class CfgPatches
{
	class EZ_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Pants","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Data","DZ_Gear_Containers","EZ_Medal","EZ_BannerStand","ModularVestSystem","Mass_Textures"};
	};
};
class CfgMods
{
	class EZ_Clothing
	{
		dir = "EZ_Clothing";
		hideName = 1;
		hidePicture = 1;
		name = "EZ_Clothing";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"EZ_Clothing/Scripts/4_World"};
			};
		};
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
