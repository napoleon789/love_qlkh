/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-11-22 16:12:10
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `loaisanpham`
-- ----------------------------
DROP TABLE IF EXISTS `loaisanpham`;
CREATE TABLE `loaisanpham` (
  `id` tinyint(4) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL DEFAULT '',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `w_tree` (`weight`,`name`),
  KEY `id_name` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=37 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of loaisanpham
-- ----------------------------
INSERT INTO `loaisanpham` VALUES ('1', 'Chuỗi trai', '0');
INSERT INTO `loaisanpham` VALUES ('2', 'Dây', '0');
INSERT INTO `loaisanpham` VALUES ('3', 'Dây liền mặt', '0');
INSERT INTO `loaisanpham` VALUES ('4', 'Hangfung', '0');
INSERT INTO `loaisanpham` VALUES ('5', 'Hoa tai', '0');
INSERT INTO `loaisanpham` VALUES ('6', 'Hộp nữ trang', '0');
INSERT INTO `loaisanpham` VALUES ('7', 'Kẹp Cavat', '0');
INSERT INTO `loaisanpham` VALUES ('8', 'Kiềng', '0');
INSERT INTO `loaisanpham` VALUES ('9', 'Kim cương kiểm định GIA', '0');
INSERT INTO `loaisanpham` VALUES ('10', 'Kim cương kiểm định Việt Nam', '0');
INSERT INTO `loaisanpham` VALUES ('11', 'Kim cương màu', '0');
INSERT INTO `loaisanpham` VALUES ('12', 'Kim cương đen', '0');
INSERT INTO `loaisanpham` VALUES ('13', 'Lắc', '0');
INSERT INTO `loaisanpham` VALUES ('14', 'Manxec', '0');
INSERT INTO `loaisanpham` VALUES ('15', 'Mặt dây', '0');
INSERT INTO `loaisanpham` VALUES ('16', 'Nhẫn', '0');
INSERT INTO `loaisanpham` VALUES ('17', 'Nhẫn cưới', '0');
INSERT INTO `loaisanpham` VALUES ('18', 'R&S Tấm', '0');
INSERT INTO `loaisanpham` VALUES ('19', 'Ve cài áo', '0');
INSERT INTO `loaisanpham` VALUES ('20', 'Vòng', '0');
INSERT INTO `loaisanpham` VALUES ('21', 'Đá Amethyst', '0');
INSERT INTO `loaisanpham` VALUES ('22', 'Đá Aquamarine', '0');
INSERT INTO `loaisanpham` VALUES ('23', 'Đá bán quý khác', '0');
INSERT INTO `loaisanpham` VALUES ('24', 'Đá Citrine', '0');
INSERT INTO `loaisanpham` VALUES ('25', 'Đá Fancy', '0');
INSERT INTO `loaisanpham` VALUES ('26', 'Đá Garnet', '0');
INSERT INTO `loaisanpham` VALUES ('27', 'Đá Lemon Quartz', '0');
INSERT INTO `loaisanpham` VALUES ('28', 'Đá Moonstone', '0');
INSERT INTO `loaisanpham` VALUES ('29', 'Đá Peridot', '0');
INSERT INTO `loaisanpham` VALUES ('30', 'Đá Ruby', '0');
INSERT INTO `loaisanpham` VALUES ('31', 'Đá Ruby Cab', '0');
INSERT INTO `loaisanpham` VALUES ('32', 'Đá Sapphia', '0');
INSERT INTO `loaisanpham` VALUES ('33', 'Đá Spinel', '0');
INSERT INTO `loaisanpham` VALUES ('34', 'Đá tạc tượng', '0');
INSERT INTO `loaisanpham` VALUES ('35', 'Đá Tectit', '0');
INSERT INTO `loaisanpham` VALUES ('36', 'Đá Topa', '0');
