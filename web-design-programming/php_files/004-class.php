<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<h1>My first PHP page</h1>
		
		<?php 
		
		class Merhaba{//
		
			function MerhabaDe($isim){
				$this->$isim = $isim;
				
				echo "<br>Merhaba" . $this->$isim;
				echo "<br>Merhaba" . $isim; // aynı
				
			}
		
		}//
		
		$selam = new Merhaba();
		$selam->MerhabaDe("<br>hey");
		
		?>	
		
	</body>
	  
</html>
