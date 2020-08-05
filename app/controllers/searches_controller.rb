class SearchesController < ApplicationController
  def new
  end
  
  def show
    if params["ebay"] == 'on' || params["swedemom"] == 'on'
      search_term = params['q'].capitalize
      if params["ebay"] == 'on'
        response = RestClient.get    "https://svcs.ebay.com/services/search/FindingService/v1?OPERATION-NAME=findCompletedItems&SERVICE-VERSION=1.13.0&SECURITY-APPNAME=SWEDEMOMCOT74917GY11S2ELB1L5Q2&RESPONSE-DATA-FORMAT=JSON&sortOrder=PricePlusShippingLowest&keywords=#{search_term}"
        ebay = JSON.parse response
      end
      if params["swedemom"] == 'on'
        #search swedemom database
        swedemom = nil
      end
      #puts json["findCompletedItemsResponse"].first["searchResult"]
      if (ebay || swedemom) && search_term != ""
        #calculate average and trending
        if ebay
          #puts "==="+ebay["findCompletedItemsResponse"].first["searchResult"].first["item"].first["shippingInfo"].first["shippingServiceCost"].first["__value__"]+"==="
          @objects = ebay["findCompletedItemsResponse"].first["searchResult"].first["item"]
        end
      else
        render :new
      end
    else
      render :new
    end
  end
end
