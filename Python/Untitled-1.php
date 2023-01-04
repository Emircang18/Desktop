<!doctype html>
<html>
<head>
<meta charset="utf-8">
<title>Untitled Document</title>
</head>
 
<body>
	<form action="php-toplama.php" method="post">
		Sayı 1 <br>
		<input type="text" name="txtSayi1"><br>
		Sayı 2 <br>
		<input type="text" name="txtSayi2"><br>
		<input type="submit" name="btn" value="TOPLA">
	</form>
	
	<?php
	if(isset($_POST["btn"])){
		$sayi1=$_POST["txtSayi1"];
		$sayi2=$_POST["txtSayi2"];
		$toplam=$sayi1+$sayi2;
		echo "Toplam : $toplam";
	}
	
	?>
</body>
</html>