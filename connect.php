<?php
phpinfo();
error_reporting(E_ALL);

ini_set('mssql.charset', 'UTF-8');

define("SVR_ADDR", "DOJI");
define("SVR_USERNAME", "sa");
define("SVR_PASS", "sa");
define("SVR_DB_HN", "Hanoi");
define("SVR_DB_HCM", "HCM");
define("AREA_HN", 1);
define("AREA_HCM", 2);


/* Connect to ms sql server */
$dbConnection = mssql_connect(SVR_ADDR, SVR_USERNAME, SVR_PASS) or die("Couldn't connect to SQL Server on ". SVR_ADDR);

echo 'connected';
