<!DOCTYPE html>
<html>
<head>
	<meta http-equiv="refresh" content="3">
	<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
	<link rel="apple-touch-icon" sizes="180x180" href="img/fav-icons/apple-touch-icon.png"/>
	<link rel="icon" type="image/png" sizes="32x32" href="img/fav-icons/favicon-32x32.png"/>
	<link rel="icon" type="image/png" sizes="16x16" href="img/fav-icons/favicon-16x16.png"/>
	<meta name="theme-color" content="#6e7833">
	<title> S.D.T.S </title>
</head>
<body>
	<br>
	<h1>
		<font color="#631c02">SMART DRIP-TECH SYSTEM</font>
	</h1>
	<h2>
		<font color="#121c10">Drip-Tech Data</font>
	</h2>
<?php
	$server = "localhost";
	$username = "root";
	$password = "";
	$dbname = "sdts_db";
	$con = mysqli_connect($server, $username, $password, $dbname) or die("unable to connect");
	$sql = "SELECT * FROM waterlevel";
	echo '  <table cellspacing = "5" cellpadding="5"><tr><th>ID</th><th>WATER LEVEL</th><th>DATE</th><th>TIME</th></tr>';
	$result=mysqli_query($con,$sql);
	if ($result->num_rows > 0) {
	    while($row = $result->fetch_assoc()) { 
	    	$row_id = $row["id"];
	      	$row_level = $row["level"];
	      	$row_date = $row["date"];
	      	$row_time = $row["time"];
	        echo '	<tr><td>' . $row_id . '</td><td>' . $row_level . '</td><td>' . $row_date . '</td><td>' . $row_time . '</td></tr>';
		}
	}
?>
</table>
</body>
</html>
</body>
</html>