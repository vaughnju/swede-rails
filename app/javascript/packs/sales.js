import $ from 'jquery';
$(document).ready(function() {
  $("saleState").each(function(){
    if($(this).text == "EndedWithSales"){
      console.log("===sucessful sale===");
      //item.addClass("sold");
    }
  })
})