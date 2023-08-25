class CfgPatches
{
	class EZ_Factions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Camping","EZ_BannerStand","EZ_Armbands"};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class EZ_Banner_Colorbase;
	class EZ_DoubleArmband_ColorBase;
	class Flag_TBH_EZ: Flag_Base
	{
		scope = 2;
		displayName = "The Black Hand Flag";
		descriptionShort = "ENDZONE Faction - The Black Hand - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TBH\TBH_ff.paa"};
		color = "TBH_EZ";
	};
	class EZ_TBH_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "The Black Hand - Double Armband";
		descriptionShort = "ENDZONE Faction - The Black Hand - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TBH\TBH_armband.paa"};
	};
	class EZ_PPC_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "Pineapple Pizza Chads - Banner";
		descriptionShort = "ENDZONE Faction - The Black Hand - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\PPC\PPC_bb.paa"};
	};
};
