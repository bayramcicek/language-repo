var globalVar = 0;
var counter = 0;
var i = 0;


function apply() {
	var elem = document.getElementById("araba");
	elem.innerHTML = "Hello World!";
	// body...
}

// setTimeout(apply, 3000);

function setMe(){
	var arr = document.querySelectorAll("p");
	arr[i].innerHTML = counter++;
	i++;
	if (i == arr.length) {i = 0;}

}
setInterval(setMe, 1100);





