/*
The setInterval() method calls a function or evaluates an expression at specified intervals (in milliseconds).
It will continue calling the function until clearInterval() is called or the window is closed.
*/

function myAlert(){
	alert("Intern");
}

var myInerval = setInterval(myAlert, 3000);

/*Write the name of the function without parentheses when passing it into the setInterval method.*/

clearInterval(myInerval);






