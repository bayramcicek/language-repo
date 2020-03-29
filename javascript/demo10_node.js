// creating a new paragraph
window.onload = function() {
	var pNode = document.createElement("p");
	var node = document.createTextNode("some new text");
	pNode.innerHTML = "new new new text";
	//adding the text to the paragraph

	pNode.appendChild(node);

	var divNode = document.getElementById('demo');
	//adding the paragraph to the div

	divNode.appendChild(pNode);
	// body...
};


/*
Creating Elements

Use the following methods to create new nodes:
element.cloneNode() clones an element and returns the resulting node.
document.createElement(element) creates a new element node. 
document.createTextNode(text) creates a new text node.

For example:
var node = document.createTextNode("Some new text");

This will create a new text node, but it will not appear in the document until you append it to an existing element with one of the following methods:
element.appendChild(newNode) adds a new child node to an element as the last child node.
element.insertBefore(node1, node2) inserts node1 as a child before node2.


*/

