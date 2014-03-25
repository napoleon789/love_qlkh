/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-11-22 16:13:31
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `cuahang`
-- ----------------------------
DROP TABLE IF EXISTS `cuahang`;
CREATE TABLE `cuahang` (
  `id` tinyint(4) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL DEFAULT '',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `w_tree` (`weight`,`name`),
  KEY `id_name` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=30 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of cuahang
-- ----------------------------
INSERT INTO `cuahang` VALUES ('1', 'Q Hộp nữ trang', '0');
INSERT INTO `cuahang` VALUES ('2', 'Q Kim cương viên', '0');
INSERT INTO `cuahang` VALUES ('3', 'Q Mỹ nghệ hungfung', '0');
INSERT INTO `cuahang` VALUES ('4', 'Q NC gắn KC vàng trắng', '0');
INSERT INTO `cuahang` VALUES ('5', 'Q NC gắn KC vàng vàng', '0');
INSERT INTO `cuahang` VALUES ('6', 'Q NC gắn đá quý', '0');
INSERT INTO `cuahang` VALUES ('7', 'Q NC ghép AU', '0');
INSERT INTO `cuahang` VALUES ('8', 'Q NC new', '0');
INSERT INTO `cuahang` VALUES ('9', 'Q NC Platium', '0');
INSERT INTO `cuahang` VALUES ('10', 'Q NC trơn', '0');
INSERT INTO `cuahang` VALUES ('11', 'Q NC đặc biệt', '0');
INSERT INTO `cuahang` VALUES ('12', 'Q Nhẫn đính hôn', '0');
INSERT INTO `cuahang` VALUES ('13', 'Q TS bạc', '0');
INSERT INTO `cuahang` VALUES ('14', 'Q TS CANADA', '0');
INSERT INTO `cuahang` VALUES ('15', 'Q TS cưới gắn KC màu', '0');
INSERT INTO `cuahang` VALUES ('16', 'Q TS HQ-Y', '0');
INSERT INTO `cuahang` VALUES ('17', 'Q TS Kim cương màu', '0');
INSERT INTO `cuahang` VALUES ('18', 'Q TS ổ', '0');
INSERT INTO `cuahang` VALUES ('19', 'Q TS Ruby', '0');
INSERT INTO `cuahang` VALUES ('20', 'Q TS Đá màu', '0');
INSERT INTO `cuahang` VALUES ('21', 'Q Vu quy Au -24K', '0');
INSERT INTO `cuahang` VALUES ('22', 'Q Đá bán quý rời', '0');
INSERT INTO `cuahang` VALUES ('23', 'Q Đá quý rời', '0');
INSERT INTO `cuahang` VALUES ('24', 'Quầy giảm giá 25% T4', '0');
INSERT INTO `cuahang` VALUES ('25', 'Quầy giảm giá 30% T4', '0');
INSERT INTO `cuahang` VALUES ('26', 'Trang sức tổng hợp du lịch', '0');
INSERT INTO `cuahang` VALUES ('27', 'Trang sức vàng du lịch', '0');
INSERT INTO `cuahang` VALUES ('28', 'Trang sức Vàng NK (Lu Lu và FJ)', '0');
INSERT INTO `cuahang` VALUES ('29', 'TS Elite', '0');
