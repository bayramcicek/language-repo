var d = new Date();
document.write(d + "<br> ");
document.write(" <br> ");
// d stores the current date and time

//Fri Jan 02 1970 00:00:00
var d1 = new Date(86400000); 

//Fri Jan 02 2015 10:42:00
var d2 = new Date("January 2, 2015 10:42:00");

//Sat Jun 11 1988 11:42:00
var d3 = new Date(88,5,11,11,42,0,0);

/*JavaScript counts months from 0 to 11. January is 0, and December is 11.
Date objects are static, rather than dynamic. The computer time is ticking, but date objects don't change, once created.*/

var d4 = new Date(2017, 5, 14, 9, 0, 15);
document.write(d4);
// Wed Jun 14 2017 09:09:09

var hours = d.getHours();
document.write("current hour : <br> " + hours);

function printTime() {
	var b = new Date();
	var hours = b.getHours();
	var mins = b.getMinutes();
	var secs = b.getSeconds();
	document.getElementById("s1").innerHTML = hours + ":" + mins + ":" + secs;
}
var clear = setInterval(printTime, 2000);

function clearMe() {
	clearInterval(clear);
}


