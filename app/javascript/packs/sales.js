document.getElementsByClassName("saleState").each(function() {
  var sellState = window.$(this).find("td:second-child").text();
  if(sellState == "EndedWithSales"){
    window.$(this).find("td:second-child").addClass("sold");
    console.log("===sucessful sale===")
  }
});