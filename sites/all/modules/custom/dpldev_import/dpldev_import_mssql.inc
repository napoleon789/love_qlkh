<?php
// ini_set('mssql.charset', 'UTF-8');

define("SVR_ADDR", "118.70.128.57,10000");
define("SVR_USERNAME", "sa");
define("SVR_PASS", "sa");
define("SVR_DB_HN", "HaNoi");
define("SVR_DB_HCM", "HCM");
define("AREA_HN", 1);
define("AREA_HCM", 2);

function dpldev_import_getData($db, $latestDate) {


  /* Connect to ms sql server */
  $connectionInfo = array("Database" => $db,
    "UID" => SVR_USERNAME,
    "PWD" => SVR_PASS,
    "CharacterSet" => "UTF-8");

  $dbConnection = sqlsrv_connect(SVR_ADDR, $connectionInfo);
  if ($dbConnection === false) {
    die("Couldn't connect to SQL Server on ". SVR_ADDR);
  }

  $query = "SELECT dmkhach_hang.ma as makh,
				     dmkhach_hang.ten as hoten,
					 dmkhach_hang.dia_chi as diachi,
					 ktdu_lieu.dien_thoai as mobile,
					 dmkhach_hang.email as email,
					 ktdu_lieu.dien_thoai as phone,
					 dmnhom_hh1.ten as sanpham,
					 dmhang_hoa.ma as masp,
					 ktdu_lieu.so_ctu as sohd,
					 dmhang_hoa.don_vi as donvi,
					 ktdu_lieu.so_luong1 as soluong,
					 ktdu_lieu.sotien1 as giatri,
					 ktdu_lieu.tk_no as tk_no,
					 dmnhom_hh.ten as cuahang,
					 dmdai_ly.ma as manv,
					 dmdai_ly.ten as nhanvien,
					 convert(varchar, ktdu_lieu.ngay_ctu, 103) as ngay_ban,
					 dmnhom_hh1.ten as loaisan_pham,
					 dmkho_hang.ten as ten_kho,
					 DATEDIFF(s,'1970-01-01', ktdu_lieu.ngay_ctu) as ngay_capnhat,
					 ktdu_lieu.counter as counter
					 ";
  $query .= "FROM ktdu_lieu INNER JOIN dmkhach_hang ON ktdu_lieu.makhach_hang=dmkhach_hang.makhach_hang
							  INNER JOIN dmhang_hoa ON ktdu_lieu.mahang_hoa=dmhang_hoa.mahang_hoa
							  INNER JOIN dmnhom_hh1 ON ktdu_lieu.manhom_hh1=dmnhom_hh1.manhom_hh1
							  INNER JOIN dmnhom_hh ON ktdu_lieu.manhom_hh=dmnhom_hh.manhom_hh
							  INNER JOIN dmdai_ly ON ktdu_lieu.madai_ly=dmdai_ly.madai_ly
							  INNER JOIN dmkho_hang ON ktdu_lieu.makho_hang=dmkho_hang.makho_hang ";
  $query .= "WHERE ktdu_lieu.machung_tu=46
				 
				 AND ktdu_lieu.mahang_hoa<>0";
  /*AND (ktdu_lieu.makho_hang=900001
       or ktdu_lieu.makho_hang=900002
       or ktdu_lieu.makho_hang=900003
       or ktdu_lieu.makho_hang=900004
       or ktdu_lieu.makho_hang=900005
       or ktdu_lieu.makho_hang=900006
         or ktdu_lieu.makho_hang=900007
       or ktdu_lieu.makho_hang=900011
       or ktdu_lieu.makho_hang=900018
       or ktdu_lieu.makho_hang=900019
       or ktdu_lieu.makho_hang=900025)"; */

  if ($latestDate != "")
    $query .= " AND ktdu_lieu.ngay_ctu > convert(datetime, '" . $latestDate . "', 103) ";
 // $query .= " AND ktdu_lieu.ngay_gio > convert(datetime, '" . $latestDate . "', 103) ";

  $query .= " ORDER BY ktdu_lieu.ngay_ctu";

  $result = sqlsrv_query($dbConnection, $query);

  $area = AREA_HN;
  if ($db == SVR_DB_HN)
    $area = AREA_HN;
  else if ($db == SVR_DB_HCM)
    $area = AREA_HCM;

  while($row = sqlsrv_fetch_array($result, SQLSRV_FETCH_ASSOC)) {
    $row['ngayban'] = strtotime(dpldev_control_convert_date($row['ngay_ban'], 'd/m/Y'));
    $row['area'] = $area;

    $data = serialize($row);
    $row['data'] = $data;
   print_r ($row);
    die;
    drupal_write_record('pmkt', $row);
  }
  sqlsrv_free_stmt($result);

  sqlsrv_close($dbConnection);
}