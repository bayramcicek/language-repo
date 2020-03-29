<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<?php
		
		function ucgenAlani($taban, $yukseklik){
			$alan = ($taban*$yukseklik) / 2;
			return $alan;
		}
		echo ucgenAlani(5, 6); 
		
		echo "<br>";
		
		function ucgenAlani1($taban, $yukseklik=8){ // varsayılan değer hep en sonda olmalı
			$alan = ($taban*$yukseklik) / 2;
			echo $alan;
		}
		ucgenAlani1(5); 
		
		echo "<br>";
		
		if(kosul){
				//
		}
		else if(kosul){
				//
		}
		else{
				//
		}
		
		echo "<br>";
		
		for($i=0; $i<10; $i++){
			echo "ben: " . $i . "'im" . "<br>";
		
		}
		
		echo "<br>";
		echo "<ul>";
		
		$dizi = array("araba", "oyuncak", "motor");
		
		
		foreach($dizi as $yaz){
			echo "<li> $yaz </li>";
		
		}
		
		echo "</ul>";
		
		?>
		
	</body>
	  
</html>
