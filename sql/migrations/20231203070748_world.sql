DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20231203070748');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20231203070748');
-- Add your query below.

UPDATE `creature_template` SET `entry`=15277, `patch`=7, `display_id1`=15351, `display_id2`=0, `display_id3`=0, `display_id4`=0, `display_scale1`=0, `display_scale2`=0, `display_scale3`=0, `display_scale4`=0, `display_probability1`=0, `display_probability2`=0, `display_probability3`=0, `display_probability4`=0, `display_total_probability`=0, `mount_display_id`=0, `name`='Anubisath Defender', `subname`='', `gossip_menu_id`=0, `level_min`=62, `level_max`=62, `faction`=310, `npc_flags`=0, `speed_walk`=1.6, `speed_run`=2.14286, `detection_range`=20, `call_for_help_range`=20, `leash_range`=0, `rank`=1, `xp_multiplier`=1, `health_multiplier`=150, `mana_multiplier`=1, `armor_multiplier`=1.2, `damage_multiplier`=30.05, `damage_variance`=0.14, `damage_school`=0, `base_attack_time`=2000, `ranged_attack_time`=2000, `holy_res`=0, `fire_res`=75, `nature_res`=75, `frost_res`=75, `shadow_res`=75, `arcane_res`=75, `unit_class`=1, `unit_flags`=0, `pet_family`=0, `trainer_type`=0, `trainer_spell`=0, `trainer_class`=0, `trainer_race`=0, `type`=10, `type_flags`=8, `loot_id`=15277, `pickpocket_loot_id`=0, `skinning_loot_id`=0, `gold_min`=0, `gold_max`=0, `spell_id1`=0, `spell_id2`=0, `spell_id3`=0, `spell_id4`=0, `spell_list_id`=0, `pet_spell_list_id`=0, `spawn_spell_id`=0, `auras`=NULL, `ai_name`='EventAI', `movement_type`=0, `inhabit_type`=3, `civilian`=0, `racial_leader`=0, `regeneration`=3, `equipment_id`=0, `trainer_id`=0, `vendor_id`=0, `mechanic_immune_mask`=613105627, `school_immune_mask`=0, `flags_extra`=2097408, `script_name`='' WHERE `entry`=15277 AND `patch`=7;

DELETE FROM `creature_ai_scripts` WHERE `id`=1527702;
INSERT INTO `creature_ai_scripts` (`id`, `delay`, `priority`, `command`, `datalong`, `datalong2`, `datalong3`, `datalong4`, `target_param1`, `target_param2`, `target_type`, `data_flags`, `dataint`, `dataint2`, `dataint3`, `dataint4`, `x`, `y`, `z`, `o`, `condition_id`, `comments`) VALUES
(1527702, 0, 0, 15, 13022, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'Anubisath Defender - Cast Spell Fire and Arcane Reflect'),
(1527702, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 'Anubisath Defender - Call for Help');

DELETE FROM `creature_ai_scripts` WHERE `id` IN (1527767);

-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
