<!doctype html>
<html lang="tr-TR">
	
	<head>
		<meta charset="utf-8">
		<title>php</title>
	</head>
	
	<body>
		
		<h1>My first PHP page</h1>
		
		<?php 
		
		class Selam{
			public function Merhaba(){
				return "<br> Merhabalar! ";				
			}					
		}
		
		class hanim_bey extends Selam{///
			public function isimCins($isim, $cinsiyet){
				echo parent::Merhaba();
				if("kadın" == strtolower($cinsiyet)){
					return $isim . " Hanım"  ."<br>";
				}
				else if("erkek" == strtolower($cinsiyet)){
					return $isim . " Bey" . "<br>";
				}
				
			}
			
		}///
		
		$message = new hanim_bey();
		echo $message->isimCins("Ali", "Erkek");
		echo $message->isimCins("Yonca", "Kadın");
		
		?>	
		
	</body>
	  
</html>
