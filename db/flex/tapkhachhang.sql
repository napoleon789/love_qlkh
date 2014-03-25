/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-11-22 14:25:25
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `tapkhachhang`
-- ----------------------------
DROP TABLE IF EXISTS `tapkhachhang`;
CREATE TABLE `tapkhachhang` (
  `id` tinyint(4) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL DEFAULT '',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `w_tree` (`weight`,`name`),
  KEY `id_name` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of tapkhachhang
-- ----------------------------
INSERT INTO `tapkhachhang` VALUES ('1', 'Bạc', '0');
INSERT INTO `tapkhachhang` VALUES ('2', 'Vàng', '1');
INSERT INTO `tapkhachhang` VALUES ('3', 'Kim Cương', '2');
INSERT INTO `tapkhachhang` VALUES ('4', 'Bạch Kim', '3');