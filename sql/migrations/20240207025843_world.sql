DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20240207025843');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20240207025843');
-- Add your query below.

USE mangos;
UPDATE creature_template
SET speed_walk = 0.8, speed_run = 0.285714
WHERE entry IN (16783, 16784, 16785);

UPDATE creature_template
SET speed_walk = 0.3, speed_run = 0.285714
WHERE entry = 16027;


-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
