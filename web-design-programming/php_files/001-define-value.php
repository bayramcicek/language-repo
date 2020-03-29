<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<h1>My first PHP page</h1>
		
		<?php
		$metin = "bu bir string <br>";
		$deger = 10 ."<br>";
		$ondalik = 1.2 ."<br>";

		$saat = 24;
		define("day", "monday <br>"); // sabit adi ve deger
		echo day;
		
		echo $metin;
		echo $deger;
		echo $ondalik;
		
		echo $saat;
			
		
		
		?>
		
	</body>
	  
</html>
