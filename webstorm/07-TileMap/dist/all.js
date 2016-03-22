/**
 * Created by zhaokang on 16/3/15.
 */
var mymap = L.map('mapid').setView([30.533, 114.355], 16);
//var mymap = L.map('mapid').setView([51.505, -0.09], 13);

//L.tileLayer('https://api.tiles.mapbox.com/v4/{id}/{z}/{x}/{y}.png?access_token={accessToken}', {
//    attribution: 'Map data &copy; <a href="http://openstreetmap.org">OpenStreetMap</a> contributors, <a href="http://creativecommons.org/licenses/by-sa/2.0/">CC-BY-SA</a>, Imagery © <a href="http://mapbox.com">Mapbox</a>',
//    maxZoom: 18,
//    id: 'your.mapbox.project.id',
//    accessToken: 'your.mapbox.public.access.token'
//}).addTo(mymap);

L.tileLayer('https://api.tiles.mapbox.com/v4/{id}/{z}/{x}/{y}.png?access_token=pk.eyJ1IjoibWFwYm94IiwiYSI6ImNpandmbXliNDBjZWd2M2x6bDk3c2ZtOTkifQ._QA7i5Mpkd_m30IGElHziw', {
    maxZoom: 18,
    //attribution: 'Map data &copy; <a href="http://openstreetmap.org">OpenStreetMap</a> contributors, ' +
    //'<a href="http://creativecommons.org/licenses/by-sa/2.0/">CC-BY-SA</a>, ' +
    //'Imagery © <a href="http://mapbox.com">Mapbox</a>',
    id: 'mapbox.streets'
}).addTo(mymap);


