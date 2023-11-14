DROP PROCEDURE IF EXISTS add_migration;
delimiter ??
CREATE PROCEDURE `add_migration`()
BEGIN
DECLARE v INT DEFAULT 1;
SET v = (SELECT COUNT(*) FROM `migrations` WHERE `id`='20231114044321');
IF v=0 THEN
INSERT INTO `migrations` VALUES ('20231114044321');
-- Add your query below.

-- Events list for Obsidian Nullifier
DELETE FROM `creature_ai_scripts` WHERE `id`=1531201;
INSERT INTO `creature_ai_scripts` (`id`, `delay`, `priority`, `command`, `datalong`, `datalong2`, `datalong3`, `datalong4`, `target_param1`, `target_param2`, `target_type`, `data_flags`, `dataint`, `dataint2`, `dataint3`, `dataint4`, `x`, `y`, `z`, `o`, `condition_id`, `comments`) VALUES
(1531201, 0, 0, 2, 29, 52206, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'Obsidian Nullifier - Set Field'),
(1531201, 0, 0, 50, 0, 0, 0, 0, 15311, 30, 8, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 'Aggro Anubisath Warder'),
(1531201, 0, 0, 50, 0, 0, 0, 0, 15312, 30, 8, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 'Aggro Obsidian Nullifier');

-- Events list for Anubisath Warder
DELETE FROM `creature_ai_events` WHERE `creature_id`=15311;
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531101, 15311, 0, 0, 0, 100, 0, 0, 0, 0, 0, 1531101, 0, 0, 'Anubisath Warder - Set Random Phase');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531102, 15311, 0, 0, 0, 100, 1, 750, 750, 3000, 3000, 1531102, 0, 0, 'Anubisath Warder - Periodic Cast Fire Nova (All Phases)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531103, 15311, 0, 0, 29, 100, 1, 5000, 5000, 20000, 20000, 1531103, 0, 0, 'Anubisath Warder - Entangling Roots (Phase 1)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531104, 15311, 0, 0, 29, 100, 1, 4000, 4000, 15000, 15000, 1531104, 0, 0, 'Anubisath Warder - Dust Cloud (Phase 1)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531105, 15311, 0, 0, 27, 100, 1, 5000, 5000, 20000, 20000, 1531105, 0, 0, 'Anubisath Warder - Entangling Roots (Phase 2)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531106, 15311, 0, 0, 27, 100, 1, 4000, 4000, 15000, 15000, 1531106, 0, 0, 'Anubisath Warder - Silence (Phase 2)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531107, 15311, 0, 0, 23, 100, 1, 5000, 5000, 20000, 20000, 1531107, 0, 0, 'Anubisath Warder - Fear (Phase 3)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531108, 15311, 0, 0, 23, 100, 1, 4000, 4000, 15000, 15000, 1531108, 0, 0, 'Anubisath Warder - Dust Cloud (Phase 3)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531109, 15311, 0, 0, 15, 100, 1, 5000, 5000, 20000, 20000, 1531109, 0, 0, 'Anubisath Warder - Fear (Phase 4)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531110, 15311, 0, 0, 15, 100, 1, 4000, 4000, 15000, 15000, 1531110, 0, 0, 'Anubisath Warder - Silence (Phase 4)');
INSERT INTO `creature_ai_events` (`id`, `creature_id`, `condition_id`, `event_type`, `event_inverse_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `action1_script`, `action2_script`, `action3_script`, `comment`) VALUES (1531111, 15311, 0, 4, 0, 100, 0, 0, 0, 0, 0, 1531201, 0, 0, 'Call for help');


-- Update to Hive'Zara Swarmer
UPDATE `creature_template` SET `entry`=15546, `patch`=7, `display_id1`=482, `display_id2`=0, `display_id3`=0, `display_id4`=0, `display_scale1`=0, `display_scale2`=0, `display_scale3`=0, `display_scale4`=0, `display_probability1`=0, `display_probability2`=0, `display_probability3`=0, `display_probability4`=0, `display_total_probability`=0, `mount_display_id`=0, `name`='Hive\'Zara Swarmer', `subname`=NULL, `gossip_menu_id`=0, `level_min`=60, `level_max`=60, `faction`=310, `npc_flags`=0, `speed_walk`=2.4, `speed_run`=1.71429, `detection_range`=18, `call_for_help_range`=5, `leash_range`=0, `rank`=0, `xp_multiplier`=0.5, `health_multiplier`=1.8, `mana_multiplier`=1, `armor_multiplier`=1.1, `damage_multiplier`=3.3, `damage_variance`=0.14, `damage_school`=0, `base_attack_time`=1000, `ranged_attack_time`=2000, `holy_res`=0, `fire_res`=0, `nature_res`=0, `frost_res`=0, `shadow_res`=0, `arcane_res`=0, `unit_class`=1, `unit_flags`=0, `pet_family`=0, `trainer_type`=0, `trainer_spell`=0, `trainer_class`=0, `trainer_race`=0, `type`=10, `type_flags`=8, `loot_id`=0, `pickpocket_loot_id`=0, `skinning_loot_id`=0, `gold_min`=1, `gold_max`=876, `spell_id1`=0, `spell_id2`=0, `spell_id3`=0, `spell_id4`=0, `spell_list_id`=0, `pet_spell_list_id`=0, `spawn_spell_id`=0, `auras`=NULL, `ai_name`='', `movement_type`=1, `inhabit_type`=1, `civilian`=0, `racial_leader`=0, `regeneration`=3, `equipment_id`=0, `trainer_id`=0, `vendor_id`=0, `mechanic_immune_mask`=0, `school_immune_mask`=0, `flags_extra`=2097152, `script_name`='' WHERE `entry`=15546 AND `patch`=7;

-- End of migration.
END IF;
END??
delimiter ; 
CALL add_migration();
DROP PROCEDURE IF EXISTS add_migration;
