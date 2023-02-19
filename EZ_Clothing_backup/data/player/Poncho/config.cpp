#define _ARMA_

class CfgPatches
{
	class Endzone_CamoNetPoncho
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","Inkota"};
		units[] = {"EZ_CamoNetPoncho"};
	};
};
class CfgVehicles
{
	class Clothing;
	class EZ_CamoNetPoncho_Base: Clothing
	{
		scope = 0;
		displayName = "Improvised Camo Net Poncho";
		descriptionShort = "Very simple-made and effective thing.";
		model = "Inkota\Clothing\CamoNetPoncho\CamoNetPoncho_g.p3d";
		inventorySlot[] = {"Back"};
		weight = 4000;
		itemSize[] = {6,3};
		absorbency = 0.3;
		heatIsolation = 0.0;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,50.0};
		hiddenSelections[] = {"color"};
		class ClothingTypes
		{
			male = "Inkota\Clothing\CamoNetPoncho\CamoNetPoncho.p3d";
			female = "Inkota\Clothing\CamoNetPoncho\CamoNetPoncho.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"EZ_Clothing\data\player\Poncho\data\camonet_black_nowind.rvmat"}},
									 {0.7,{"EZ_Clothing\data\player\Poncho\data\camonet_black_nowind.rvmat"}},
									 {0.5,{"EZ_Clothing\data\player\Poncho\data\camonet_black_nowind.rvmat"}},
									 {0.3,{"EZ_Clothing\data\player\Poncho\data\camonet_black_nowind.rvmat"}},
									 {0.0,{"EZ_Clothing\data\player\Poncho\data\camonet_black_nowind.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class EZ_CamoNetPoncho_Black: EZ_CamoNetPoncho_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Poncho\data\camonet_black_co.paa"};
	};
};