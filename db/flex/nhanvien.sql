/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-11-22 16:17:36
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `nhanvien`
-- ----------------------------
DROP TABLE IF EXISTS `nhanvien`;
CREATE TABLE `nhanvien` (
  `id` tinyint(4) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL DEFAULT '',
  `manv` varchar(50) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `w_tree` (`manv`,`name`),
  KEY `id_name` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=44 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of nhanvien
-- ----------------------------
INSERT INTO `nhanvien` VALUES ('1', 'TUYẾN', 'BH0001');
INSERT INTO `nhanvien` VALUES ('2', 'HOÀNG NGỌC ANH', 'BH0007');
INSERT INTO `nhanvien` VALUES ('3', 'Bùi Thị duyên', 'BH0008');
INSERT INTO `nhanvien` VALUES ('4', 'DUY ANH', 'BH0010');
INSERT INTO `nhanvien` VALUES ('5', 'Phương Trang', 'BH0011');
INSERT INTO `nhanvien` VALUES ('6', 'HẰNG NGA', 'BH0012');
INSERT INTO `nhanvien` VALUES ('7', 'Bùi Kim Cúc', 'BH0013');
INSERT INTO `nhanvien` VALUES ('8', 'Ngô Thị Thanh', 'BH0014');
INSERT INTO `nhanvien` VALUES ('9', 'Hồng Nhung', 'BH0015');
INSERT INTO `nhanvien` VALUES ('10', 'NGUYỄN NHA TRANG', 'DJ0001');
INSERT INTO `nhanvien` VALUES ('11', 'NGUYỄN THỊ NHA TRANG', 'DJDH1');
INSERT INTO `nhanvien` VALUES ('12', 'VŨ TIẾN CƯỜNG', 'DJDH10');
INSERT INTO `nhanvien` VALUES ('13', 'NGUYỄN THỦY TIÊN', 'DJDH2');
INSERT INTO `nhanvien` VALUES ('14', 'NGUYỄN THỊ HỒNG VÂN', 'DJDH3');
INSERT INTO `nhanvien` VALUES ('15', 'NGUYỄN THÀNH LUÂN', 'DJDH4');
INSERT INTO `nhanvien` VALUES ('16', 'NGUYỄN THỊ PHƯƠNG A', 'DJDH5');
INSERT INTO `nhanvien` VALUES ('17', 'VŨ THỊ PHƯỢNG', 'DJDH6');
INSERT INTO `nhanvien` VALUES ('18', 'HOÀNG NGỌC ANH', 'DJDH7');
INSERT INTO `nhanvien` VALUES ('19', 'PHẠM THẢO TRANG', 'DJDH8');
INSERT INTO `nhanvien` VALUES ('20', 'NGUYỄN THỊ PHƯƠNG B', 'DJDH9');
INSERT INTO `nhanvien` VALUES ('21', 'HOÀNG THỊ NGA', 'DJDW1');
INSERT INTO `nhanvien` VALUES ('22', 'NGÔ MINH PHƯƠNG', 'DJDW2');
INSERT INTO `nhanvien` VALUES ('23', 'NGUYỄN THUÝ VÂN', 'DJDW3');
INSERT INTO `nhanvien` VALUES ('24', 'NGUYỄN THU VÂN', 'DJDW4');
INSERT INTO `nhanvien` VALUES ('25', 'HOÀNG TUYẾT MAI', 'DJDW5');
INSERT INTO `nhanvien` VALUES ('26', 'NGUYỄN THỊ PHẤN', 'DJDW6');
INSERT INTO `nhanvien` VALUES ('27', 'NGUYỄN HUYỀN TRÂM', 'DJDW7');
INSERT INTO `nhanvien` VALUES ('28', 'Nguyễn Thị Hồng', 'DJWL 6');
INSERT INTO `nhanvien` VALUES ('29', 'BÙI MINH NGUYỆT', 'DJWL1');
INSERT INTO `nhanvien` VALUES ('30', 'NGÔ LAN HƯƠNG', 'DJWL2');
INSERT INTO `nhanvien` VALUES ('31', 'Nguyễn Thủy Tiên', 'DJWL3');
INSERT INTO `nhanvien` VALUES ('32', 'TỐNG THỊ TUYẾT HỒNG', 'DJWL4');
INSERT INTO `nhanvien` VALUES ('33', 'LÊ THU TRANG', 'DJWL5');
INSERT INTO `nhanvien` VALUES ('34', 'NGUYỄN THÀNH LUÂN', 'DJWL6');
INSERT INTO `nhanvien` VALUES ('35', 'Phạm Thảo Trang', 'DJWL7');
INSERT INTO `nhanvien` VALUES ('36', 'Hoàng Ngọc Lan', 'DJWL8');
INSERT INTO `nhanvien` VALUES ('37', 'TẠ THÚY NGA', 'SLDO1');
INSERT INTO `nhanvien` VALUES ('38', 'VŨ THỊ THUẦN', 'SLDO2');
INSERT INTO `nhanvien` VALUES ('39', 'VŨ THÙY DUNG', 'SLDO3');
INSERT INTO `nhanvien` VALUES ('40', 'ĐINH KIM TUYẾN', 'SLDO4');
INSERT INTO `nhanvien` VALUES ('41', 'Trần Thanh Vân', 'SlDO5');
INSERT INTO `nhanvien` VALUES ('42', 'Hoàng Thu Hà', 'SLDO6');
INSERT INTO `nhanvien` VALUES ('43', 'Khương Thúy Nga', 'SLDO7');
