<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<h1>class</h1>
		
		<?php 
		
		class Selam{// class
			
			function __construct(){
				echo "Merhaba";
			}
			
			function isimAl($isim){
				$this->$isim = $isim;
				echo "<br>" . $isim;
			}
			
			function __destruct(){
				echo "<br> güle güle";
			}
			
		}// class
		
		$selam = new Selam();
		
		$selam->isimAl("bayraktar IHA");
		
		
		?>	
		
	</body>
	  
</html>
