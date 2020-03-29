var x = 10;
document.write("A variable declared without a value will have the value undefined.<br>");
document.write("JavaScript is case sensitive. For example, the variables lastName and lastname, are two different variables<br>");
document.write(x);
x = "padding";
document.write("<br>", x);

// var a = 324;
//document.write("<br>", A); // This code will not result in any output, as x and X are two different variables.
document.write("- The first character must be a letter, an underscore (_), or a dollar sign ($). Subsequent characters may be letters, digits, underscores, or dollar signs.<br>- Numbers are not allowed as the first character.<br>- Variable names cannot include a mathematical or logical operator in the name. For instance, 2*something or this+that;<br>- JavaScript names must not contain spaces.<br>Hyphens are not allowed in JavaScript. It is reserved for subtractions.<br>");
as = 13;
document.write("<br>", as);

me = "hello\n";
you = "feyza\"";

document.write(me + you);

var isActive = true;
var isHoliday = false;

var asd = eval("5*12"); // 60
document.write(asd);

var hh = 10 * "4";
document.write(hh); // 40

var ben = 10 * "hello";
document.write(ben); // NaN

var mod = 10.5 % 0.2;
document.write(mod); // 0.09999999999999942

if (5 == 5 && 6 == 6) {
	document.write("<br> equal");
}
var age = 21;
var isAdult = (age < 18) ? "Too young": "Old enough";

document.write(isAdult); // Old enough

var mystring1 = "<br>I am learning ";
var mystring2 = "JavaScript with SoloLearn.";
document.write(mystring1 + mystring2);



