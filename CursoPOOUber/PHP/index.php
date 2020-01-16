<?php   
require_once("car.php");
require_once("UberX.php");
require_once("account.php");
require_once("UberPool.php");

$uberX = new UberX("placas", new Account("Andres Herrera","El Ine"),"Chevrolet","Spark");
$uberX->printDataCar();
$uberPool = new UberPool("placas2", new Account("Andres Herrera 2","El Ine"),"Chevrolet 2","Spark 2");
$uberPool->printDataCar();

?>