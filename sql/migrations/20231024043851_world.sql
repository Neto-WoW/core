DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20231024043851');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20231024043851');
-- Add your query below.

UPDATE `creature_template` SET `entry`=15555, `patch`=7, `display_id1`=15554, `display_id2`=0, `display_id3`=0, `display_id4`=0, `display_scale1`=0, `display_scale2`=0, `display_scale3`=0, `display_scale4`=0, `display_probability1`=0, `display_probability2`=0, `display_probability3`=0, `display_probability4`=0, `display_total_probability`=0, `mount_display_id`=0, `name`='Hive\'Zara Larva', `subname`='', `gossip_menu_id`=0, `level_min`=59, `level_max`=60, `faction`=310, `npc_flags`=0, `speed_walk`=2, `speed_run`=1.15, `detection_range`=18, `call_for_help_range`=5, `leash_range`=0, `rank`=0, `xp_multiplier`=1, `health_multiplier`=1, `mana_multiplier`=1, `armor_multiplier`=1.1, `damage_multiplier`=12.3, `damage_variance`=0.14, `damage_school`=0, `base_attack_time`=2000, `ranged_attack_time`=2000, `holy_res`=0, `fire_res`=0, `nature_res`=0, `frost_res`=0, `shadow_res`=0, `arcane_res`=0, `unit_class`=1, `unit_flags`=0, `pet_family`=0, `trainer_type`=0, `trainer_spell`=0, `trainer_class`=0, `trainer_race`=0, `type`=10, `type_flags`=8, `loot_id`=0, `pickpocket_loot_id`=0, `skinning_loot_id`=0, `gold_min`=129, `gold_max`=173, `spell_id1`=25721, `spell_id2`=0, `spell_id3`=0, `spell_id4`=0, `spell_list_id`=0, `pet_spell_list_id`=0, `spawn_spell_id`=0, `auras`=NULL, `ai_name`='', `movement_type`=1, `inhabit_type`=3, `civilian`=0, `racial_leader`=0, `regeneration`=3, `equipment_id`=0, `trainer_id`=0, `vendor_id`=0, `mechanic_immune_mask`=1019952987, `school_immune_mask`=0, `flags_extra`=2097153, `script_name`='mob_zara_larva' WHERE `entry`=15555 AND `patch`=7;

-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
