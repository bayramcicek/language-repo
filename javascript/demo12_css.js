var pos = 0;
//our box element
// var box = document.getElementById("box");

function move() {
	var box = document.getElementById("box");
	pos += 1;
	box.style.left = pos+"px"; //px = pixels

	if(pos >= 150) {
    clearInterval(t);
  }
}

var t = setInterval(move, 10);

