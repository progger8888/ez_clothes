class CfgPatches
{
	class EZ_Military_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Pants","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Data","DZ_Gear_Containers"};
	};
};
class CfgMods
{
	class Endzone_Military_Clothing
	{
		dir = "EZ_Military_Clothing";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Endzone";
		credits = "Endzone";
		author = "Endzone";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {};
	};
};
