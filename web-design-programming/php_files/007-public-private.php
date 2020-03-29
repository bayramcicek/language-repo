<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<h1>public</h1>
		
		<?php 
		
		class Karsilama{ //
			
			public $isim;
			public $yas;
			private $mesaj = "yaşındasın";
			
			function yazdir(){
				return $this->isim . ", " . $this->yas . ", " . $this->mesaj;
			}
			
		} //
				
		$obj = new Karsilama();
		$obj->isim = "hakan";
		$obj->yas = 20;
		// $obj->mesaj = "asdfghjk lşizxccv" // hata
		
		echo $obj->yazdir();
		
		?>	
		
	</body>
	  
</html>
