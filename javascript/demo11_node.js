function myFunc() {
	// body...
	var parent = document.getElementById("demo");
	var child = document.getElementById("p2");
	parent.removeChild(child);

	// var child = document.getElementById("p2");
	// child.parentNode.removeChild(child);

	var hId = document.getElementById("h1id");
	var hIdRep = document.getElementById("h4id");

	hId.parentNode.replaceChild(hIdRep, hId);

}

setTimeout(myFunc, 3000);





