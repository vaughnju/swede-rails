// This file is automatically compiled by Webpack, along with any other files
// present in this directory. You're encouraged to place your actual application logic in
// a relevant structure within app/javascript and only use these pack files to reference
// that code so it'll be compiled.

require("@rails/ujs").start();
require("turbolinks").start();
require("@rails/activestorage").start();
require("channels");
require("jquery");
require("jquery_ujs");


// Uncomment to copy all static images under ../images to the output folder and reference
// them with the image_pack_tag helper in views (e.g <%= image_pack_tag 'rails.png' %>)
// or the `imagePath` JavaScript helper below.
//
// const images = require.context('../images', true)
// const imagePath = (name) => images(name, true)
//import $ from 'jquery';
$(document).ready(function() {
  $("saleState").each(function(){
    if(this.text == "EndedWithSales"){
      console.log("===sucessful sale===")
    }
  })
})
/*document.getElementsByClassName("saleState").each(function() {
  var sellState = window.$(this).find("td:second-child").text();
  if(sellState == "EndedWithSales"){
    window.$(this).find("td:second-child").addClass("sold");
    console.log("===sucessful sale===")
  }
});*/