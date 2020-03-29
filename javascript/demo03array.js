var course1 ="HTML"; 
var course2 ="CSS"; 
var course3 ="JS"; 

var courses = new Array("HTML", "CSS", "JS");

document.write(courses[0]);

var me = courses[1]; // CSS
courses[2] = "<br>Python is love <3 <br>";

document.write(courses[2]);

document.write(courses[23]); // undefined

function sayHello () {
   console.log("Hello ");
}
function sayThere () {
   console.log("there");
}
var funkies = [sayHello, sayThere];
for(var i in funkies) {
   funkies[i]();
}