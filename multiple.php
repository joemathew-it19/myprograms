<?php

$servername = "121.200.55.60:3307";
$username = "2019UIT1150";
$password = "2019UIT1150";
$database = "2019UIT1150";
$conn = mysqli_connect($servername, $username, $password,$database);
if (!$conn) {
die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully <br />";
$trunc="truncate table multiplication";
mysqli_query($conn,$trunc);
echo "table truncated <br />";
for($i=1;$i<=30;$i++)
{
$result=$i*5;
$sql="insert into multiplication(multiplicant,multipler,result)values('$i',5,'$result')";
$res=mysqli_query($conn,$sql);
echo "result $res <br />";
mysqli_close($conn);
}
?>
 
