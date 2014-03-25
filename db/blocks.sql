/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50516
Source Host           : localhost:3306
Source Database       : qlkh

Target Server Type    : MYSQL
Target Server Version : 50516
File Encoding         : 65001

Date: 2012-10-13 15:47:05
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `blocks`
-- ----------------------------
DROP TABLE IF EXISTS `blocks`;
CREATE TABLE `blocks` (
  `bid` int(11) NOT NULL AUTO_INCREMENT,
  `module` varchar(64) NOT NULL DEFAULT '',
  `delta` varchar(32) NOT NULL DEFAULT '0',
  `theme` varchar(64) NOT NULL DEFAULT '',
  `status` tinyint(4) NOT NULL DEFAULT '0',
  `weight` tinyint(4) NOT NULL DEFAULT '0',
  `region` varchar(64) NOT NULL DEFAULT '',
  `custom` tinyint(4) NOT NULL DEFAULT '0',
  `throttle` tinyint(4) NOT NULL DEFAULT '0',
  `visibility` tinyint(4) NOT NULL DEFAULT '0',
  `pages` text NOT NULL,
  `title` varchar(64) NOT NULL DEFAULT '',
  `cache` tinyint(4) NOT NULL DEFAULT '1',
  PRIMARY KEY (`bid`),
  UNIQUE KEY `tmd` (`theme`,`module`,`delta`),
  KEY `list` (`theme`,`status`,`region`,`weight`,`module`)
) ENGINE=InnoDB AUTO_INCREMENT=61 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of blocks
-- ----------------------------
INSERT INTO `blocks` VALUES ('1', 'user', '0', 'garland', '1', '0', 'left', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('2', 'user', '1', 'garland', '1', '0', 'left', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('3', 'system', '0', 'garland', '1', '10', 'footer', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('4', 'locale', '0', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('5', 'menu', 'devel', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('6', 'menu', 'features', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('7', 'menu', 'primary-links', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('8', 'menu', 'secondary-links', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('9', 'node', '0', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('10', 'user', '2', 'garland', '0', '0', '', '0', '0', '0', '', '', '1');
INSERT INTO `blocks` VALUES ('11', 'user', '3', 'garland', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('12', 'devel', '0', 'garland', '0', '0', '', '0', '0', '0', '', '', '1');
INSERT INTO `blocks` VALUES ('13', 'devel', '2', 'garland', '0', '0', '', '0', '0', '0', 'devel/php', '', '1');
INSERT INTO `blocks` VALUES ('14', 'user', '0', 'dpldev', '0', '-11', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('15', 'user', '1', 'dpldev', '0', '-10', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('16', 'system', '0', 'dpldev', '0', '-9', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('17', 'locale', '0', 'dpldev', '0', '-6', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('18', 'menu', 'devel', 'dpldev', '0', '-8', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('19', 'menu', 'features', 'dpldev', '0', '-7', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('20', 'menu', 'primary-links', 'dpldev', '0', '-5', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('21', 'menu', 'secondary-links', 'dpldev', '0', '-4', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('22', 'node', '0', 'dpldev', '0', '-3', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('23', 'user', '2', 'dpldev', '0', '1', '', '0', '0', '0', '', '', '1');
INSERT INTO `blocks` VALUES ('24', 'user', '3', 'dpldev', '0', '2', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('25', 'devel', '0', 'dpldev', '0', '0', '', '0', '0', '0', '', '', '1');
INSERT INTO `blocks` VALUES ('26', 'devel', '2', 'dpldev', '0', '-1', '', '0', '0', '0', 'devel/php', '', '1');
INSERT INTO `blocks` VALUES ('27', 'block', '1', 'dpldev', '0', '-17', '', '0', '0', '1', '<front>', 'Khách hàng của tháng:', '-1');
INSERT INTO `blocks` VALUES ('28', 'menu', 'menu-shortcut', 'dpldev', '1', '-17', 'left', '0', '0', '1', '<front>\r\nnhap-tu-file-excel\r\nnode/add/import-from-excel\r\nkhachhang/*/view\r\nkhachhang/*/*\r\nvip', '', '-1');
INSERT INTO `blocks` VALUES ('31', 'calendar', '0', 'dpldev', '0', '-3', '', '0', '0', '0', '', '', '1');
INSERT INTO `blocks` VALUES ('32', 'views', 'calendar-calendar_block_1', 'dpldev', '0', '-2', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('33', 'views', 'calendar-block_1', 'dpldev', '0', '0', '', '0', '0', '0', '', '', '-1');
INSERT INTO `blocks` VALUES ('36', 'dpldev_customer', 'khcnstt', 'dpldev', '1', '-10', 'content', '0', '0', '1', '<front>', '', '1');
INSERT INTO `blocks` VALUES ('38', 'dpldev_marketing', 'sms', 'dpldev', '1', '-17', 'content', '0', '0', '1', 'marketing/sms', '', '1');
INSERT INTO `blocks` VALUES ('39', 'dpldev_marketing', 'email', 'dpldev', '1', '-16', 'content', '0', '0', '1', 'marketing/email', '', '1');
INSERT INTO `blocks` VALUES ('40', 'dpldev_marketing', 'letter', 'dpldev', '1', '-15', 'content', '0', '0', '1', 'marketing/thutay', '', '1');
INSERT INTO `blocks` VALUES ('41', 'dpldev_marketing', 'membercard', 'dpldev', '1', '-14', 'content', '0', '0', '1', 'marketing/membercard', '', '1');
INSERT INTO `blocks` VALUES ('42', 'dpldev_customer', 'filter', 'dpldev', '1', '-15', 'left', '0', '0', '1', 'khachhang\r\nkhachhang/vip\r\nmarketing/*', '', '1');
INSERT INTO `blocks` VALUES ('43', 'dpldev_customer', 'search', 'dpldev', '1', '-17', 'content_top', '0', '0', '1', 'khachhang\r\nkhachhang/vip', '<none>', '1');
INSERT INTO `blocks` VALUES ('44', 'dpldev_customer', 'khachmoi', 'dpldev', '0', '-13', '', '0', '0', '1', 'khachhang\r\nkhachhang/khachmoi\r\nkhachhang/khachmoi/*', '<none>', '1');
INSERT INTO `blocks` VALUES ('45', 'dpldev_customer', 'khachcu', 'dpldev', '0', '-14', '', '0', '0', '1', 'khachhang/khachcu\r\nkhachhang/khachcu/*', '<none>', '1');
INSERT INTO `blocks` VALUES ('46', 'dpldev_customer', 'doanhsocao', 'dpldev', '0', '-15', '', '0', '0', '1', 'khachhang/doanhsocao\r\nkhachhang/doanhsocao/*', '<none>', '1');
INSERT INTO `blocks` VALUES ('47', 'dpldev_customer', 'doanhsothap', 'dpldev', '0', '-18', '', '0', '0', '1', 'khachhang/doanhsothap\r\nkhachhang/doanhsothap/*', '<none>', '1');
INSERT INTO `blocks` VALUES ('48', 'dpldev_customer', 'lienheganday', 'dpldev', '0', '-16', '', '0', '0', '1', 'khachhang/lienheganday\r\nkhachhang/lienheganday/*', '<none>', '1');
INSERT INTO `blocks` VALUES ('49', 'dpldev_customer', 'lienhetruocday', 'dpldev', '0', '-2', '', '0', '0', '1', 'khachhang/lienhetruocday\r\nkhachhang/lienhetruocday/*', '<none>', '1');
INSERT INTO `blocks` VALUES ('51', 'dpldev_customer', 'vip', 'dpldev', '0', '-12', '', '0', '0', '1', 'khachhang/vip', '<none>', '1');
INSERT INTO `blocks` VALUES ('52', 'calendar_block', '0', 'dpldev', '0', '-16', '', '0', '0', '0', '', '', '1');
INSERT INTO `blocks` VALUES ('53', 'dpldev_marketing', 'report', 'dpldev', '1', '-18', 'content', '0', '0', '1', 'martketing\r\n<front>', '', '1');
INSERT INTO `blocks` VALUES ('54', 'dpldev_marketing', 'khachhangcuathang', 'dpldev', '1', '-13', 'content', '0', '0', '1', '<front>\r\nmarketing', '', '1');
INSERT INTO `blocks` VALUES ('56', 'dpldev_calendar', 'lienhethangtoi', 'dpldev', '1', '-11', 'content', '0', '0', '1', '<front>', '<none>', '1');
INSERT INTO `blocks` VALUES ('57', 'quicktabs', 'qtbkhachhang', 'dpldev', '1', '-12', 'content', '0', '0', '1', 'khachhang\r\nkhachhang/khachmoi\r\nkhachhang/khachcu\r\nkhachhang/doanhsocao\r\nkhachhang/doanhsothap\r\nkhachhang/lienheganday\r\nkhachhang/lienhetruocday\r\nmarketing\r\nmarketing/*', 'Sắp xếp theo:', '-1');
INSERT INTO `blocks` VALUES ('58', 'menu', 'menu-shortcut2', 'dpldev', '1', '-16', 'left', '0', '0', '1', 'marketing\r\nmarketing/*', '', '-1');
INSERT INTO `blocks` VALUES ('60', 'menu', 'menu-topshortcut', 'dpldev', '1', '0', 'inner_page_title', '0', '0', '1', 'node/add/khachhang\r\nkhachhang\r\nkhachhang/*\r\nnode/add/import-from-excel', '<none>', '-1');
