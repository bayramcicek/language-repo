document.write("merhaba <br>");

function person(name, age, favColor) {
	this.name = name;
	this.age = age;
	this.favColor = favColor;
	// body...
}

var p1 = new person("John", 42, "green");
var p2 = new person("Amy", 21, "red");

document.write(p1.age, "<br>"); // Outputs 42
document.write(p2.name, "<br>"); // Outputs "Amy"

// Use the following syntax to create an object method:

function ben(isim, age1) {
	// body...
	this.isim = isim;
	this.age1 = age1;
	this.surName =  function(){
		document.write("kurt<br>");
	}
	this.yearOfBirth = bornYear;
}

function bornYear() {
  return (2019 - this.age1);
}

var f1 = new ben("feyza", 18);
document.write(f1.isim, "<br>");
f1.surName();	

document.write(f1.yearOfBirth(), "<br>");

/*
"Note that it's not necessary to write the function's parentheses when assigning it to an object."
It's not only "not necessary" – you MUSTN'T write the function's parentheses,
because you're referring to the function itself, not to the result of its evaluation.

I find it worrying that the author of the lesson doesn't emphasize the fundamental difference between the two.
*/