class CfgExilecustomCode 
{	
	//EBM LootSpawner Fix
	Exileclient_system_lootmanager_thread_spawn = "EBM\exileclient_system_lootmanager_thread_spawn.sqf";
	//RocketLauncher Fix
	ExileClient_util_playerEquipment_add = "custom\client\ExileClient_util_playerEquipment_add.sqf";
	
	//ExAd
	ExileServer_system_territory_database_load = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_xm8_slide = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
	ExileClient_gui_xm8_show = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";

	ExileClient_system_snow_thread_update = "Snow\ExileClient_system_snow_thread_update.sqf";
	
	//Base Spawning
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "custom\DTG_Spawn_Override\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "custom\DTG_Spawn_Override\ExileClient_gui_selectSpawnLocation_show.sqf";
	
		ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	
	//Igiload
	ExileClient_object_player_event_onEnterSafezone = "ExileClient_object_player_event_onEnterSafezone.sqf";
	
	//Vehicle Protection System
    ExileServer_object_player_database_load = "overrides\ExileServer_object_player_database_load.sqf";
    ExileServer_object_vehicle_database_load = "overrides\ExileServer_object_vehicle_database_load.sqf";
    ExileServer_object_vehicle_database_update = "overrides\ExileServer_object_vehicle_database_update.sqf";

	// Kill Messages
	ExileServer_object_player_event_onMpKilled = "overrides\KillMessages\ExileServer_object_player_event_onMpKilled.sqf"; // Make sure this location matches where you copied the file..
	
	//Update to 1.66
	ExileClient_gui_postProcessing_initialize = "fixes\ExileClient_gui_postProcessing_initialize.sqf";
	ExileClient_gui_postProcessing_reset = "fixes\ExileClient_gui_postProcessing_reset.sqf";
	ExileClient_gui_postProcessing_toggleDialogBackgroundBlur = "fixes\ExileClient_gui_postProcessing_toggleDialogBackgroundBlur.sqf";
	ExileClient_object_player_death_startBleedingOut = "fixes\ExileClient_object_player_death_startBleedingOut.sqf";
	ExileClient_object_player_event_onKilled = "fixes\ExileClient_object_player_event_onKilled.sqf";
	
};