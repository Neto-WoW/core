DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20240207025317');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20240207025317');
-- Add your query below.

USE mangos;
UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16028;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15931;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15932;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15956;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15953;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15952;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15954;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15936;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16011;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16061;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16060;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16064;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16065;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16062;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 16063;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15989;

UPDATE creature_template
SET armor_multiplier = 2
WHERE entry = 15990;

-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
