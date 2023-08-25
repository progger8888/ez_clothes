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
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class Mich2001Helmet;
	class TacticalShirt_ColorBase;
	class MVS_Balaclava2_Base;
	class MVS_CombatPants_Base;
	class MVS_CombatShirt_Base;
	class Modular_Patch_Base;
	class ModularVestSystem_Base;
	class TacticalGloves_ColorBase;
	class JungleBoots_ColorBase;
	class MVS_Helmet_Base;
	class MVS_Pack_Base;
	class MVS_Assault_Pack_Tan;
	class MVS_Comtacs_Base;
	class MVS_WarriorHelmet_Base;
	class EZ_DoubleArmband_ColorBase;
	class HuntingJacket_ColorBase;
	class MVS_Shroud_Base;
	class ModularVestSystem_Heavy;
	class EZ_SOF_Jacket_ColorBase;
	class EZ_SOF_Pants_ColorBase;
	class EZ_SOF_Helmet_ColorBase;
	class EZ_SOF_Balaclava_ColorBase;
	class EZ_SOF_Gloves_ColorBase;
	class EZ_SOF_Platecarrier_ColorBase;
	class EZ_SOF_Backpack_ColorBase;
	class MassHeavyPlateVest_ColorBase;
	class MVS_Balaclava_Base;
	class Flag_Base;
	class EZ_Banner_Colorbase;
	class EZ_BabySharks_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - Double Armband";
		descriptionShort = "BabyBabySharks -PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_armband.paa"};
	};
	class EZ_BabySharks_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "BabyBabySharks - Banner";
		descriptionShort = "BabyBabySharks - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_bb.paa"};
		itemSize[] = {4,4};
	};
	class Flag_BabySharks_EZ: Flag_Base
	{
		scope = 2;
		displayName = "BabyBabySharks - Flag";
		descriptionShort = "BabyBabySharks - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_ff.paa"};
		color = "BabySharks_EZ";
	};
	class EZ_BabySharks_MVSHelmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "BabyBabySharks - MVS Helmet";
		descriptionShort = "BabyBabySharks - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_mvs_helmet.paa"};
	};
	class EZ_BabySharks_MVSShroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "BabyBabySharks - MVS Shroud";
		descriptionShort = "BabyBabySharks - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_MVS_Shroud.paa"};
	};
	class EZ_BabySharks_JungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - Jungle Boots";
		descriptionShort = "BabyBabySharks - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_jungleboots.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_jungleboots.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_jungleboots.paa"};
	};
	class MVS_Combat_Vest_Heavy_BabySharks: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "BabyBabySharks - MVS Heavy Plate Carrier";
		descriptionShort = "BabyBabySharks - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		color = "BabyBabySharks";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_MVSHeavy_co.paa"};
	};
	class EZ_BabySharks_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "BabyBabySharks - MVS Warrior Helmet";
		descriptionShort = "BabyBabySharks - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_Mandalorian_Helmet.paa",
									  "EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_BabySharks_SOFJacket: EZ_SOF_Jacket_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - SOF Jacket";
		descriptionShort = "BabyBabySharks - PlatoonPackage SOF Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_sof_shirt.paa"};
	};
	class EZ_BabySharks_SOFPants: EZ_SOF_Pants_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - SOF Pants";
		descriptionShort = "BabyBabySharks - PlatoonPackage SOF Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_sof_pants.paa"};
	};
	class EZ_BabySharks_SOFBalaclava: EZ_SOF_Balaclava_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - SOF Balaclava";
		descriptionShort = "BabyBabySharks - PlatoonPackage SOF Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_sof_balaclava.paa"};
	};
	class EZ_BabySharks_SOFGloves: EZ_SOF_Gloves_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - SOF Gloves";
		descriptionShort = "BabyBabySharks - PlatoonPackage SOF Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_sof_gloves.paa"};
	};
	class EZ_BabySharks_SOFPlatecarrier: EZ_SOF_Platecarrier_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - SOF Platecarrier";
		descriptionShort = "BabyBabySharks - PlatoonPackage SOF Platecarrier made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_sof_vest.paa"};
	};
	class EZ_BabySharks_SOFBackpack: EZ_SOF_Backpack_ColorBase
	{
		scope = 2;
		displayName = "BabyBabySharks - SOF Backpack";
		descriptionShort = "BabyBabySharks - PlatoonPackage SOF Backpack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\BabySharks\Sharks_sof_backpack.paa"};
	};
	class Flag_TBH_EZ: Flag_Base
	{
		scope = 2;
		displayName = "The Black Hand Flag";
		descriptionShort = "The Black Hand - ArmbandPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_armband\TBH\TBH_ff.paa"};
		color = "TBH_EZ";
	};
	class EZ_TBH_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "The Black Hand - Double Armband";
		descriptionShort = "The Black Hand - ArmbandPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_armband\TBH\TBH_armband.paa"};
	};
	class Flag_SneakyBlinders_EZ: Flag_Base
	{
		scope = 2;
		displayName = "SneakyBlinders Flag";
		descriptionShort = "SneakyBlinders - ArmbandPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_armband\SneakyBlinders\SneakyBlinders_ff.paa"};
		color = "SneakyBlinders_EZ";
	};
	class EZ_SneakyBlinders_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "SneakyBlinders - Double Armband";
		descriptionShort = "SneakyBlinders - ArmbandPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_armband\SneakyBlinders\SneakyBlinders_armband.paa"};
	};
	class Flag_YemekYemeks_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Yemek Yemeks Flag";
		descriptionShort = "Yemek Yemeks - CrewPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_crew\YemekYemeks\YemekYemeks_ff.paa"};
		color = "YemekYemeks_EZ";
	};
	class EZ_YemekYemeks_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Yemek Yemeks - Double Armband";
		descriptionShort = "Yemek Yemeks - CrewPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_crew\YemekYemeks\YemekYemeks_armband.paa"};
	};
	class EZ_YemekYemeks_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "Yemek Yemeks - Tactical Shirt";
		descriptionShort = "Yemek Yemeks - CrewPackage Tactical Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_crew\YemekYemeks\YemekYemeks_shirt.paa",
									  "EZ_Clothing\data\patreon\patreon_crew\YemekYemeks\YemekYemeks_shirt.paa",
									  "EZ_Clothing\data\patreon\patreon_crew\YemekYemeks\YemekYemeks_shirt.paa"};
	};
	class Flag_SwipersCorp_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Swipers Corp. Flag";
		descriptionShort = "Swipers Corp. - ArmbandPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_armband\SwipersCorp\SwipersCorp_ff.paa"};
		color = "SwipersCorp_EZ";
	};
	class EZ_SwipersCorp_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Swipers Corp. - Double Armband";
		descriptionShort = "Swipers Corp. - ArmbandPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_armband\SwipersCorp\SwipersCorp_armband.paa"};
	};
};
