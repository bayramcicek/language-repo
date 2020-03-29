<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<h1>My first PHP page</h1>
		
		<?php 
		$sinifListe=array("bir", "iki", "üç");  // array
		echo sinifListe . "<br>";
		echo "sinifListe" . "<br>";
		echo $sinifListe . "<br>";
		echo join("," , $sinifListe); // yazdır
		
		echo "<br>";
		
		array_push($sinifListe, "ek1", "ek2");
		echo join("," , $sinifListe);
		
		echo "<br>";
		
		array_pop($sinifListe);
		print_r($sinifListe);
		
		echo "<br>";
		
		$a = 2;	
		$b = 4;
		echo ($a**$b);
		
		echo "<br>";
		
		function tarihSaat(){
			echo "Tarih: " . date("y/m/d") . "<br>";
			
			echo "Saat: " . date("H:m:s") . "<br>";
					
		}
		tarihSaat();
			
		?>	
		
	</body>
	  
</html>
