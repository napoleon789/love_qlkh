/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-11-22 14:27:33
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `khohang`
-- ----------------------------
DROP TABLE IF EXISTS `khohang`;
CREATE TABLE `khohang` (
  `id` tinyint(4) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL DEFAULT '',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`),
  KEY `w_tree` (`weight`,`name`),
  KEY `id_name` (`name`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=17 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of khohang
-- ----------------------------
INSERT INTO `khohang` VALUES ('1', 'kho 37 trần nhân tông ( nữ trang )', '0');
INSERT INTO `khohang` VALUES ('2', 'kho 56 tràng tiền', '1');
INSERT INTO `khohang` VALUES ('3', 'kho 72 phạm hùng - land mark', '2');
INSERT INTO `khohang` VALUES ('4', 'kho 80 quang trung hà đông', '3');
INSERT INTO `khohang` VALUES ('5', 'kho diamond house doji - t3', '4');
INSERT INTO `khohang` VALUES ('6', 'kho dojiwell doji - t1', '5');
INSERT INTO `khohang` VALUES ('7', 'kho hàng nhập trả lại pkdts - t9', '6');
INSERT INTO `khohang` VALUES ('8', 'kho hàng sjc hà nội chậm trả', '7');
INSERT INTO `khohang` VALUES ('9', 'kho hàng sjc đà nẵng chậm trả', '8');
INSERT INTO `khohang` VALUES ('10', 'kho km đặc biệt doji - t4', '9');
INSERT INTO `khohang` VALUES ('11', 'kho pkd ts doji - t9', '10');
INSERT INTO `khohang` VALUES ('12', 'kho pkd vàng doji', '11');
INSERT INTO `khohang` VALUES ('13', 'kho silver d\'amour doji - t2', '12');
INSERT INTO `khohang` VALUES ('14', 'kho trang sức du lịch doji - t5', '13');
INSERT INTO `khohang` VALUES ('15', 'kho wedding land doji - t3', '14');
INSERT INTO `khohang` VALUES ('16', 'kho xưởng - đá quý', '15');
