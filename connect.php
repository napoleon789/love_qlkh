<?php
ini_set('mssql.charset', 'UTF-8');
$serverName = "JHDM8FZ7X45HNQH\SQLEXPRESS"; //serverName\instanceName

// ini_set('mssql.charset', 'UTF-8');

define("SVR_ADDR", "JHDM8FZ7X45HNQH\SQLEXPRESS");
define("SVR_USERNAME", "sa");
define("SVR_PASS", "sa");
define("SVR_DB_HN", "HaNoi");
define("SVR_DB_HCM", "HCM");
define("AREA_HN", 1);
define("AREA_HCM", 2);

$connectionInfo = array("Database" => 'HaNoi',
  "UID" => SVR_USERNAME,
  "PWD" => SVR_PASS,
  "CharacterSet" => "UTF-8");

$dbConnection = sqlsrv_connect($serverName, $connectionInfo);
if ($dbConnection === false) {
  die("Couldn't connect to SQL Server on ");
}
die("chu mừng thành công");