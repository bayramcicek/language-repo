function changeImage() {
	// body...
	var el = document.getElementById('myimg');
	el.src = "./sun.png";

	var xd = document.getElementById("demo");
	xd.style.color = "blue";
	xd.style.width = "50px";

	var asd = document.getElementById("abc");
	asd.style.fontSize = "100px";
}

setTimeout(changeImage, 2000);


