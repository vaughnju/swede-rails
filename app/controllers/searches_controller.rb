#require 'fusioncharts-rails'
class SearchesController < ApplicationController
  def new
  end
  # layout false
  def HomeView
    
  end
  
  def show
    @avgSale = 0.0
    @sales = 0
    @total = 0.0
    @early = 0
    @mid = 0
    @late = 0
    @date = DateTime.current.to_date
    @trending = ""
    @saleDate = []
    if params["ebay"] == 'on' || params["swedemom"] == 'on'
      search_term = params['q'].capitalize
      if params["ebay"] == 'on'
        response = RestClient.get "https://svcs.ebay.com/services/search/FindingService/v1?OPERATION-NAME=findCompletedItems&SERVICE-VERSION=1.13.0&SECURITY-APPNAME=SWEDEMOMCOT74917GY11S2ELB1L5Q2&RESPONSE-DATA-FORMAT=JSON&sortOrder=PricePlusShippingLowest&keywords=#{search_term}"
        ebay = JSON.parse response
      end
      if params["swedemom"] == 'on'
        #search swedemom database
        swedemom = nil
      end
      #puts json["findCompletedItemsResponse"].first["searchResult"]
      if (ebay || swedemom) && search_term != ""
        for item in ebay["findCompletedItemsResponse"].first["searchResult"].first["item"]
          #puts item["shippingInfo"].first["shippingServiceCost"].first["__value__"]
          if item["shippingInfo"].first["shippingServiceCost"] == nil
            #shippingServiceCost = [["@currencyId": "USD"],["__value__": "0.0"]]
            #shippingServiceCost = [["@currencyId","USD"],["__value__", "0.0"]]
            newShipping = ["ShippingServiceCost"=>[["@currencyId", "USD"],["__value__", "0.0"]]]
            item["shippingInfo"].append(newShipping)
            #item["shippingInfo"][1] << "__value__"
            #item["shippingInfo"].first["shippingServiceCost"].first["__value__"]  = "0.0"
            #puts ""
            #puts item["shippingInfo"]
            #puts ""
          end
        end
        if ebay
          @objects = ebay["findCompletedItemsResponse"].first["searchResult"].first["item"]
          #calculate average and trending
          for post in @objects
            if post["sellingStatus"].first["sellingState"].first == "EndedWithSales"
              @total += post["sellingStatus"].first["convertedCurrentPrice"].first["__value__"].to_f
              @sales += 1
              @saleDate.push(post["listingInfo"].first["endTime"].first, post["sellingStatus"].first["convertedCurrentPrice"].first["__value__"])
              if DateTime.parse(post["listingInfo"].first["endTime"].first) > @date - 30.days
                @late += 1
              elsif DateTime.parse(post["listingInfo"].first["endTime"].first) > @date - 60.days
                @mid += 1
              else
                @early += 1
              end
            end
          end
          @avgSale = (@total/@sales).round(2)
          if @early > @mid && @early > @late
            @trending = "down"
          elsif @late > @early && @late > @mid
            @trending = "up"
          else
            @trending = "stable"
          end
        end
      else
        render :new
      end
    else
      render :new
    end
  end
end
