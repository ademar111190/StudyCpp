BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS `continent` (
	`id`	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT UNIQUE,
	`name`	TEXT NOT NULL UNIQUE,
	`name_pt`	TEXT NOT NULL UNIQUE,
	`name_es`	TEXT NOT NULL UNIQUE
);
INSERT INTO `continent` VALUES (1,'Africa','África','África');
INSERT INTO `continent` VALUES (2,'Asia	','Asia','Ásia');
INSERT INTO `continent` VALUES (3,'Europe','Europa','Europa');
INSERT INTO `continent` VALUES (4,'North America','América do Norte','Norteamérica');
INSERT INTO `continent` VALUES (5,'South America','Sudamérica','América do Sul');
INSERT INTO `continent` VALUES (6,'Antarctica','Antártida','Antártida');
COMMIT;
