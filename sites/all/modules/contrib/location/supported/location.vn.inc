<?php

// Vietnam

function location_province_list_vn() {
  return array(
    'AG' => 'An Giang',
    'BV' => 'Bà Rịa-Vũng Tàu',
    'BK' => 'Bắc Cạn',
    'BG' => 'Bắc Giang',
    'BL' => 'Bạc Liêu',
    'BN' => 'Bắc Ninh',
    'BR' => 'Bến Tre',
    'BD' => 'Bình Định',
    'BI' => 'Bình Dương',
    'BP' => 'Bình Phước',
    'BU' => 'Bình Thuận',
    'CM' => 'Cà Mau',
    'CN' => 'Cần Thơ',
    'CB' => 'Cao Bằng',
    'DA' => 'Đà Nẵng',
    'DC' => 'Đắc Lắc',
    'DO' => 'Đắc Nông',
    'DB' => 'Điện Biên',
    'DN' => 'Đồng Nai',
    'DT' => 'Đồng Tháp',
    'GL' => 'Gia Lai',
    'HG' => 'Hà Giang',
    'HM' => 'Hà Nam',
    'HA' => 'Hà Tây',
    'HT' => 'Hà Tĩnh',
    'HD' => 'Hải Dương',
    'HP' => 'Hải Phòng',
    'HN' => 'Hà Nội',
    'HU' => 'Hậu Giang',
    'HC' => 'Hồ Chí Minh',
    'HO' => 'Hòa Bình',
    'HY' => 'Hưng Yên',
    'KH' => 'Khánh Hòa',
    'KG' => 'Kiên Giang',
    'KT' => 'Kon Tum',
    'LI' => 'Lai Châu',
    'LD' => 'Lâm Đồng',
    'LS' => 'Lạng Sơn',
    'LO' => 'Lào Cai',
    'LA' => 'Long An',
    'ND' => 'Nam Định',
    'NA' => 'Nghệ An',
    'NB' => 'Ninh Bình',
    'NT' => 'Ninh Thuận',
    'PT' => 'Phú Thọ',
    'PY' => 'Phú Yên',
    'QB' => 'Quảng Bình',
    'QM' => 'Quảng Nam',
    'QG' => 'Quảng Ngãi',
    'QN' => 'Quảng Ninh',
    'QT' => 'Quảng Trị',
    'ST' => 'Sóc Trăng',
    'SL' => 'Sơn La',
    'TN' => 'Tây Ninh',
    'TB' => 'Thái Bình',
    'TY' => 'Thái Nguyên',
    'TH' => 'Thanh Hóa',
    'TT' => 'Thừa Thiên-Huế',
    'TG' => 'Tiền Giang',
    'TV' => 'Trà Vinh',
    'TQ' => 'Tuyên Quang',
    'VL' => 'Vĩnh Long',
    'VC' => 'Vĩnh Phúc',
    'YB' => 'Yên Bái',
  );
}

/**
 * Returns minimum and maximum latitude and longitude needed to create a bounding box.
 */
function location_bounds_vn() {
  return array(
    'minlng' => 102.2111,
    'minlat' => 8.589833,
    'maxlng' => 109.412,
    'maxlat' => 23.4265,
  );
}
