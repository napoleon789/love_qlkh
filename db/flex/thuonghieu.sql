/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-11-22 14:27:25
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `thuonghieu`
-- ----------------------------
DROP TABLE IF EXISTS `thuonghieu`;
CREATE TABLE `thuonghieu` (
  `id` tinyint(4) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL DEFAULT '',
  `tag` varchar(200) NOT NULL DEFAULT '',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `w_tree` (`weight`,`name`),
  KEY `id_name` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of thuonghieu
-- ----------------------------
INSERT INTO `thuonghieu` VALUES ('1', 'Diamond House', 'JBDH', '0');
INSERT INTO `thuonghieu` VALUES ('2', 'Wedding Land', 'JBWL', '1');
INSERT INTO `thuonghieu` VALUES ('3', 'Dojiwell', '', '2');
INSERT INTO `thuonghieu` VALUES ('4', 'Silver D\'amour', 'JBSL', '3');
INSERT INTO `thuonghieu` VALUES ('5', '56 Tràng Tiền', 'JBTT', '4');
INSERT INTO `thuonghieu` VALUES ('6', 'Khách hàng thuê văn phòng', 'VPTN', '5');
