window.onload = function() { fungsiSaya(); }

function fungsiSaya() {
	menu1 = document.getElementById("topmenu").getElementsByTagName("a")[0].firstChild;
	menu1.nodeValue = "Projects";
	
	menu2 = document.getElementById("topmenu").getElementsByTagName("a")[1].firstChild;
	menu2.nodeValue = "About";

	menu3 = document.getElementById("topmenu").getElementsByTagName("a")[2].firstChild;
	menu3.nodeValue = "Contact";
}