var courses = new Array(3);
courses[0] = "selam";
courses[1] = "mehaba";
courses[2] = "günaydın";

x = "JavaScript arrays are dynamic, so you can declare an array and not pass any arguments with the Array() constructor. <br>You can then add the elements dynamically.<br>"
document.write(x);

var coursesNew = ["123456789", "bbb", "ccc"];

document.write(coursesNew);

document.write("<br><br>The array literal syntax is the recommended way to declare arrays<br>");
document.write(coursesNew.length + "<br>");

/*
The length property is always one more than the highest array index.
If the array is empty, the length property returns 0.
*/

document.write("<br> length = " + coursesNew[0].length);

var c1 = ["HTML", "CSS"];
var c2 = ["JS", "C++"];
var courses = c1.concat(c2);

document.write("<br> " + courses);
document.write(" <br> <br> ");
/*
The concat operation does not affect the c1 and c2 arrays - it returns the resulting concatenation as a new array.
*/

var person = []; // empty array
person["name"] = "John";
person["age"] = 47;
console.log(person["age"]); // 47
console.log(person.age); // 47


/*
Now, person is treated as an object, instead of being an array.
The named indexes "name" and "age" become properties of the person object.
*/

/*
As the person array is treated as an object, the standard array methods and properties will produce incorrect results.
For example, person.length will return 0.
*/

document.write("<br> So basically you cannot have an associative array in JS. If you want (key:value) you need an object. Because the only difference between an Object and an Array in JS is that Arrays use numerical keys and objects use names. <br> So an Array is really just an object using numerical keys.")

document.write("<br>Associative arrays are like dictionaries in python.<br>");

/*
Remember that JavaScript does not support arrays with named indexes.
In JavaScript, arrays always use numbered indexes.
It is better to use an object when you want the index to be a string (text).
Use an array when you want the index to be a number.
If you use a named index, JavaScript will redefine the array to a standard object.
*/



