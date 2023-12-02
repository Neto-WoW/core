DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20231202062514');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20231202062514');
-- Add your query below.

UPDATE `creature_ai_events` SET `id`=1531102, `creature_id`=15311, `condition_id`=0, `event_type`=0, `event_inverse_phase_mask`=0, `event_chance`=100, `event_flags`=1, `event_param1`=6000, `event_param2`=6001, `event_param3`=6000, `event_param4`=6001, `action1_script`=1531102, `action2_script`=0, `action3_script`=0, `comment`='Anubisath Warder - Periodic Cast Fire Nova (All Phases)' WHERE `id`=1531102;


-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
