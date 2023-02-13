class CfgPatches
{
	class EZ_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Pants","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Data","DZ_Gear_Containers","EZ_Medal","EZ_BannerStand","ModularVestSystem"};
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
	class Clothing;
	class Inventory_Base;
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class Mich2001Helmet;
	class M65Jacket_ColorBase;
	class CargoPants_ColorBase;
	class AliceBag_ColorBase;
	class Hoodie_ColorBase;
	class HunterPants_ColorBase;
	class TShirt_ColorBase;
	class GorkaPants_ColorBase;
	class ReflexVest;
	class GorkaEJacket_ColorBase;
	class Raincoat_ColorBase;
	class BalaclavaMask_ColorBase;
	class Armband_ColorBase;
	class Flag_Base;
	class EZ_Banner_Colorbase;
	class TacticalShirt_ColorBase;
	class HikingJacket_ColorBase;
	class USMCPants_ColorBase;
	class TTSKOPants;
	class MiniDress_ColorBase;
	class TrackSuitJacket_ColorBase;
	class TrackSuitPants_ColorBase;
	class BDUPants;
	class BDUJacket;
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
	class TacticalShirt_Olive;
	class Sneakers_ColorBase;
	class Barrel_ColorBase;
	class BarrelHoles_ColorBase;
	class EZ_Medal;
	class Msp_BaseballCap_Base;
	class EZ_DoubleArmband_ColorBase;
	class NBCGloves_ColorBase;
	class NBCHoodBase;
	class NBCPantsBase;
	class NBCJacketBase;
	class NBCBootsBase;
	class Ushanka_ColorBase;
	class QuiltedJacket_ColorBase;
	class RidersJacket_ColorBase;
	class BomberJacket_ColorBase;
	class HuntingJacket_ColorBase;
	class Shirt_ColorBase;
	class Jeans_ColorBase;
	class SlacksPants_ColorBase;
	class DenimJacket;
	class PrisonUniformJacket;
	class PrisonerCap;
	class PrisonUniformPants;
	class MVS_Shroud_Base;
	class ModularVestSystem_Heavy;
	class SurgicalGloves_ColorBase;
	class MilitaryBeret_ColorBase;
	class Balaclava3Holes_ColorBase;
	class CombatBoots_ColorBase;
	class EZ_SOF_Jacket_ColorBase;
	class EZ_SOF_Pants_ColorBase;
	class EZ_SOF_Helmet_ColorBase;
	class EZ_SOF_Balaclava_ColorBase;
	class EZ_SOF_Gloves_ColorBase;
	class EZ_SOF_Platecarrier_ColorBase;
	class EZ_SOF_Backpack_ColorBase;
	class EZ_BTS_Flag: Flag_Base
	{
		scope = 2;
		displayName = "Beach Teleportation Service Flag";
		descriptionShort = "Beach Teleportation Service - SquadPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_ff.paa"};
	};
	class EZ_BTS_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Beach Teleportation Service - Armband";
		descriptionShort = "Beach Teleportation Service - SquadPackage armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_armband.paa"};
	};
	class EZ_BTS_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Beach Teleportation Service - Banner";
		descriptionShort = "Beach Teleportation Service - SquadPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_bb.paa"};
	};
	class EZ_BTS_MVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "BTS - MVS Shroud";
		descriptionShort = "BTS - SquadPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_squad\BTS\BTS_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_squad\BTS\BTS_MVS_Shroud.paa"};
	};
	class EZ_BTS_Vest: PlateCarrierVest
	{
		scope = 2;
		displayName = "Beach Teleportation Service - Vest";
		descriptionShort = "Beach Teleportation Service - SquadPackage Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_vest_co.paa","EZ_Clothing\data\patreon_squad\BTS\BTS_vest_co.paa","EZ_Clothing\data\patreon_squad\BTS\BTS_vest_co.paa"};
	};
	class EZ_BTS_MilitaryBeret: MilitaryBeret_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		model="\DZ\characters\headgear\MilitaryBeret_NZ_g.p3d";
		lootTag[]=
		{
			"Military_west"
		};
		class ClothingTypes
		{
			male="\DZ\characters\headgear\MilitaryBeret_NZ_m.p3d";
			female="\DZ\characters\headgear\MilitaryBeret_NZ_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_squad\BTS\BTS_militaryberet.paa",
			"EZ_Clothing\data\patreon_squad\BTS\BTS_militaryberet.paa",
			"EZ_Clothing\data\patreon_squad\BTS\BTS_militaryberet.paa"
		};
	};
	class EZ_BTS_HuntingJacket: HuntingJacket_ColorBase
	{
		scope = 2;
		displayName = "Beach Teleportation Service - Hunting Jacket";
		descriptionShort = "Beach Teleportation Service - SquadPackage Hunting Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_huntingjacket.paa",
								      "EZ_Clothing\data\patreon_squad\BTS\BTS_huntingjacket.paa",
									  "EZ_Clothing\data\patreon_squad\BTS\BTS_huntingjacket.paa"};
	};
	class EZ_BTS_HunterPants: HunterPants_ColorBase
	{
		scope = 2;
		displayName = "Beach Teleportation Service - Hunter Pants";
		descriptionShort = "Beach Teleportation Service - SquadPackage Hunter Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\BTS\BTS_hunterpants.paa",
								      "EZ_Clothing\data\patreon_squad\BTS\BTS_hunterpants.paa",
									  "EZ_Clothing\data\patreon_squad\BTS\BTS_hunterpants.paa"};
	};
};