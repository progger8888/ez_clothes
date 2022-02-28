class CfgPatches
{
	class EZ_Clothing
	{
		unitss[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Pants","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Data","DZ_Gear_Containers","EZ_Medal","EZ_BannerStand","ModularVestSystem"};
		units[] = {};
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
	class Endzone_PlateCarrierVest: PlateCarrierVest
	{
		scope = 2;
		displayName = "Endzone Staff Plate Carrier";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa"};
	};
	class Endzone_Holster: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Endzone Staff Holster";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa"};
	};
	class Endzone_PlateCarrierPouches: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Endzone Staff Pouches";
		itemsCargoSize[] = {10,10};
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa"};
	};
	class Endzone_Mich2001Helmet: Mich2001Helmet
	{
		scope = 2;
		displayName = "Endzone Staff Tactical Helmet";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_mich2001_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_mich2001_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_mich2001_co.paa"};
	};
	class Endzone_M65: M65Jacket_ColorBase
	{
		scope = 2;
		displayName = "Endzone Staff Field Jacket";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_m65_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_m65_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_m65_co.paa"};
	};
	class Endzone_CargoPants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Endzone Staff Cargo Pants";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_cargopants_g_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_cargopants_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_cargopants_co.paa"};
	};
	class EZ_tshirt: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Endzone T-Shirt";
		descriptionShort = "Custom Endzone t-shirt made by Johan.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\endzone_tshirt.paa","EZ_Clothing\data\staff\Endzone\endzone_tshirt.paa","EZ_Clothing\data\staff\Endzone\endzone_tshirt.paa"};
	};
	class EZ_armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "Endzone Armband";
		descriptionShort = "Custom Endzone armband made by Johan.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\endzone_armband.paa","EZ_Clothing\data\staff\Endzone\endzone_armband.paa","EZ_Clothing\data\staff\Endzone\endzone_armband.paa","EZ_Clothing\data\staff\Endzone\endzone_armband.paa","EZ_Clothing\data\staff\Endzone\endzone_armband.paa"};
	};
	class EZ_Hoodie_progger: Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Hoodie (Progger)";
		descriptionShort = "NYB.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Progger\EZ_Hoodie_m_progger.paa","EZ_Clothing\data\staff\Progger\EZ_Hoodie_m_progger.paa","EZ_Clothing\data\staff\Progger\EZ_Hoodie_f_progger.paa","EZ_Clothing\data\staff\Progger\EZ_Hoodie_f_progger.paa"};
	};
	class EZ_TShirt_spawn: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Endzone T-Shirt";
		descriptionShort = "Oh! Sexy as fuck...";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Endzone\EZ_TShirt.paa","EZ_Clothing\data\player\Endzone\EZ_TShirt.paa","EZ_Clothing\data\player\Endzone\EZ_TShirt.paa"};
	};
	class EZ_Hoodie: Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Endzone Hoodie";
		descriptionShort = "Premium brand hoodie. Designed by Haley.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa","EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa","EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa","EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa"};
	};
	class EZ_bandit_GorkaEJacket_flora_1: GorkaEJacket_ColorBase
	{
		scope = 2;
		displayName = "Gorka-3 Jacket(Flora 1)";
		descriptionShort = "The Gorka-3 lacks the chest pockets of Gorka-2 and has two tilted hip pockets. It is fastened by buttons and has sleeve pockets closed by velcro flaps and one internal pocket. The jacket has a drawstring hem and hood region with cord locks to seal out wind and moisture, and the hood is equipped with a bill to offer shade from the sun and to shield from rain. There are elastic cuff closures and elastic bands at the arms to prevent the sail effect of strong gusts of wind.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora1_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora1_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora1_co.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper.rvmat"};
	};
	class EZ_bandit_GorkaPants_flora_1: GorkaPants_ColorBase
	{
		scope = 2;
		displayName = "Gorka-3 Pants(Flora 1)";
		descriptionShort = "The trousers feature a button fly, belt loops, suspender loops and an elasticized waist. The trouser legs have elastic cuffs, and bands at calf level to prevent sail effect from winds. The legs feature an internal gaiter with ties that can be worn inside the boots to seal out sand, gravel, snow, or other debris.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora1_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora1_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora1_CO.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants.rvmat"};
	};
	class EZ_bandit_GorkaEJacket_flora_2: EZ_bandit_GorkaEJacket_flora_1
	{
		scope = 2;
		displayName = "Gorka-3 Jacket(Flora 2)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora2_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora2_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora2_co.paa"};
	};
	class EZ_bandit_GorkaPants_flora_2: EZ_bandit_GorkaPants_flora_1
	{
		scope = 2;
		displayName = "Gorka-3 Pants(Flora 2)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora2_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora2_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora2_CO.paa"};
	};
	class EZ_bandit_GorkaEJacket_VSR: EZ_bandit_GorkaEJacket_flora_1
	{
		scope = 2;
		displayName = "Gorka-3 Jacket(VSR)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_VSR_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_VSR_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_VSR_co.paa"};
	};
	class EZ_bandit_GorkaPants_VSR: EZ_bandit_GorkaPants_flora_1
	{
		scope = 2;
		displayName = "Gorka-3 Pants(VSR)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_VSR_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_VSR_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_VSR_CO.paa"};
	};
	class EZ_bandit_GorkaEJacket_leaf: EZ_bandit_GorkaEJacket_flora_1
	{
		scope = 2;
		displayName = "Gorka-3 Jacket(Leaf)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_leaf_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_leaf_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_leaf_co.paa"};
	};
	class EZ_bandit_GorkaPants_leaf: EZ_bandit_GorkaPants_flora_1
	{
		scope = 2;
		displayName = "Gorka-3 Pants(Leaf)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_leaf_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_leaf_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_leaf_CO.paa"};
	};
	class EZ_bandit_Raincoat_black: Raincoat_ColorBase
	{
		scope = 2;
		displayName = "Black Scout Raincoat";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\raincoat\data\raincoat_g_black_co.paa","EZ_Clothing\data\player\Scout\raincoat\data\raincoat_black_co.paa","EZ_Clothing\data\player\Scout\raincoat\data\raincoat_black_co.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\raincoat\data\raincoat_g.rvmat","EZ_Clothing\data\player\Scout\raincoat\data\raincoat.rvmat","EZ_Clothing\data\player\Scout\raincoat\data\raincoat.rvmat"};
	};
	class EZ_bandit_Raincoat_adaptive: Raincoat_ColorBase
	{
		scope = 2;
		displayName = "Raincoat(Adaptive)";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\raincoat\data\raincoat_g_adaptive_co.paa","EZ_Clothing\data\player\Scout\raincoat\data\raincoat_adaptive_co.paa","EZ_Clothing\data\player\Scout\raincoat\data\raincoat_adaptive_co.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\raincoat\data\raincoat_g.rvmat","EZ_Clothing\data\player\Scout\raincoat\data\raincoat.rvmat","EZ_Clothing\data\player\Scout\raincoat\data\raincoat.rvmat"};
	};
	class EZ_bandit_hood_base: Clothing
	{
		displayName = "Scout Hood";
		descriptionShort = "Scout set hood.";
		model = "EZ_Clothing\data\player\Scout\Hood\hood_g.p3d";
		inventorySlot = "Headgear";
		rotationFlags = 16;
		weight = 320;
		itemSize[] = {3,2};
		varWetMax = 0.249;
		heatIsolation = 0.4;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_ushanka"};
		hiddenSelections[] = {"zbytek"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"EZ_Clothing\data\player\Scout\hood\data\hood.rvmat"}},{0.7,{"EZ_Clothing\data\player\Scout\hood\data\hood.rvmat"}},{0.5,{"EZ_Clothing\data\player\Scout\hood\data\hood_damage.rvmat"}},{0.3,{"EZ_Clothing\data\player\Scout\hood\data\hood_damage.rvmat"}},{0.0,{"EZ_Clothing\data\player\Scout\hood\data\hood_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "EZ_Clothing\data\player\Scout\Hood\hood.p3d";
			female = "EZ_Clothing\data\player\Scout\Hood\hood.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class EZ_bandit_hood_olive: EZ_bandit_hood_base
	{
		scope = 2;
		displayName = "Olive Scout Hood";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\Hood\data\hood_co.paa"};
	};
	class EZ_bandit_hood_black: EZ_bandit_hood_base
	{
		scope = 2;
		displayName = "Black Scout Hood";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\Hood\data\hood_blk_co.paa"};
	};
	class EZ_bandit_hood_leaf: EZ_bandit_hood_base
	{
		scope = 2;
		displayName = "Leaf Camo Scout Hood";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\Hood\data\hood_leaf_co.paa"};
	};
	class EZ_bandit_FaceMask_ColorBase: Clothing
	{
		displayName = "Scout Face Mask";
		descriptionShort = "The face mask is worn to conceal the identity of the user.";
		model = "EZ_Clothing\data\player\Scout\facemask\facemask_g.p3d";
		inventorySlot = "Mask";
		rotationFlags = 17;
		weight = 300;
		itemSize[] = {3,2};
		ragQuantity = 2;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_Balaclava_3holes"};
		hiddenSelections[] = {"zbytek"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"EZ_Clothing\data\player\Scout\facemask\data\facemask.rvmat"}},{0.7,{"EZ_Clothing\data\player\Scout\facemask\data\facemask.rvmat"}},{0.5,{"EZ_Clothing\data\player\Scout\facemask\data\facemask_damage.rvmat"}},{0.3,{"EZ_Clothing\data\player\Scout\facemask\data\facemask_damage.rvmat"}},{0.0,{"EZ_Clothing\data\player\Scout\facemask\data\facemask_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "EZ_Clothing\data\player\Scout\facemask\facemask.p3d";
			female = "EZ_Clothing\data\player\Scout\facemask\facemask.p3d";
		};
		class Protection
		{
			biological = 0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class EZ_bandit_FaceMask_olive: EZ_bandit_FaceMask_ColorBase
	{
		scope = 2;
		displayName = "Olive Face Mask";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\facemask\data\facemask_olive_co.paa"};
	};
	class EZ_bandit_FaceMask_black: EZ_bandit_FaceMask_ColorBase
	{
		scope = 2;
		displayName = "Black Face Mask";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\facemask\data\facemask_black_co.paa"};
	};
	class EZ_bandit_FaceMask_flora: EZ_bandit_FaceMask_ColorBase
	{
		scope = 2;
		displayName = "Flora Face Mask";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\facemask\data\facemask_flora_co.paa"};
	};
	class EZ_Flag_at: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Austria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_at_co.paa"};
	};
	class EZ_Flag_au: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Australia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_au_co.paa"};
	};
	class EZ_Flag_be: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Belgium";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_be_co.paa"};
	};
	class EZ_Flag_br: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Brazil";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_br_co.paa"};
	};
	class EZ_Flag_ca: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Canada";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa"};
	};
	class EZ_Flag_cccp: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Soviet Union";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_cccp_co.paa"};
	};
	class EZ_Flag_cz: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Czech Republic";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa"};
	};
	class EZ_Flag_de: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Germany";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_de_co.paa"};
	};
	class EZ_Flag_dk: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Denmark";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa"};
	};
	class EZ_Flag_dz: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Algeria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa"};
	};
	class EZ_Flag_es: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Spain";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_es_co.paa"};
	};
	class EZ_Flag_fi: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Finland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa"};
	};
	class EZ_Flag_fr: Flag_Base
	{
		scope = 2;
		displayName = "Flag - France";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa"};
	};
	class EZ_Flag_gr: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Greece";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa"};
	};
	class EZ_Flag_hr: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Croatia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa"};
	};
	class EZ_Flag_hu: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Hungary";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa"};
	};
	class EZ_Flag_ie: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Ireland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa"};
	};
	class EZ_Flag_il: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Israel";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_il_co.paa"};
	};
	class EZ_Flag_it: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Italy";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_it_co.paa"};
	};
	class EZ_Flag_kw: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Kuwait";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa"};
	};
	class EZ_Flag_lt: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Lithuania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa"};
	};
	class EZ_Flag_lv: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Latvia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa"};
	};
	class EZ_Flag_md: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Moldova";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_md_co.paa"};
	};
	class EZ_Flag_mt: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Malta";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa"};
	};
	class EZ_Flag_nl: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Netherlands";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa"};
	};
	class EZ_Flag_no: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Norway";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_no_co.paa"};
	};
	class EZ_Flag_nz: Flag_Base
	{
		scope = 2;
		displayName = "Flag - New Zealand";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa"};
	};
	class EZ_Flag_ph: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Philippines";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa"};
	};
	class EZ_Flag_pl: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Poland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa"};
	};
	class EZ_Flag_pt: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Portugal";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa"};
	};
	class EZ_Flag_ro: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Romania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa"};
	};
	class EZ_Flag_rs: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Serbia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa"};
	};
	class EZ_Flag_ru: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Russia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa"};
	};
	class EZ_Flag_se: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Sweden";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_se_co.paa"};
	};
	class EZ_Flag_tr: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Turkey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa"};
	};
	class EZ_Flag_uae: Flag_Base
	{
		scope = 2;
		displayName = "Flag - United Arab Emirates";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa"};
	};
	class EZ_Flag_uk: Flag_Base
	{
		scope = 2;
		displayName = "Flag - United Kingdom";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa"};
	};
	class EZ_Flag_us: Flag_Base
	{
		scope = 2;
		displayName = "Flag - United States of America";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_us_co.paa"};
	};
	class EZ_Flag_vn: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Vietnam";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa"};
	};
	class EZ_Flag_yo: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Yugoslavia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa"};
	};
	class EZ_Flag_slv: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Slovenia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_slv.paa"};
	};
	class EZ_Flag_ukr: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Ukrania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ukr.paa"};
	};
	class EZ_Armband_ukr: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Ukrania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_ukr_gg.paa",
									  "EZ_Clothing\data\player\Armband\Armband_ukr_aa.paa",
									  "EZ_Clothing\data\player\Armband\Armband_ukr_aa.paa",
									  "EZ_Clothing\data\player\Armband\Armband_ukr_aa.paa",
									  "EZ_Clothing\data\player\Armband\Armband_ukr_aa.paa"};
	};
	class EZ_Armband_at: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Austria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_at_g_co.paa","EZ_Clothing\data\player\Armband\Armband_at_small_co.paa","EZ_Clothing\data\player\Armband\Armband_at_small_co.paa","EZ_Clothing\data\player\Armband\Armband_at_big_co.paa","EZ_Clothing\data\player\Armband\Armband_at_big_co.paa"};
	};

	class EZ_Armband_slv: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Slovenia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_slv_gg.paa","EZ_Clothing\data\player\Armband\Armband_slv_aa.paa","EZ_Clothing\data\player\Armband\Armband_slv_aa.paa","EZ_Clothing\data\player\Armband\Armband_slv_aa.paa","EZ_Clothing\data\player\Armband\Armband_slv_aa.paa"};
	};
	class EZ_Armband_au: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Australia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_au_g_co.paa","EZ_Clothing\data\player\Armband\Armband_au_small_co.paa","EZ_Clothing\data\player\Armband\Armband_au_small_co.paa","EZ_Clothing\data\player\Armband\Armband_au_big_co.paa","EZ_Clothing\data\player\Armband\Armband_au_big_co.paa"};
	};
	class EZ_Armband_be: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Belgium";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_be_g_co.paa","EZ_Clothing\data\player\Armband\Armband_be_small_co.paa","EZ_Clothing\data\player\Armband\Armband_be_small_co.paa","EZ_Clothing\data\player\Armband\Armband_be_big_co.paa","EZ_Clothing\data\player\Armband\Armband_be_big_co.paa"};
	};
	class EZ_Armband_br: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Brazil";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_br_g_co.paa","EZ_Clothing\data\player\Armband\Armband_br_small_co.paa","EZ_Clothing\data\player\Armband\Armband_br_small_co.paa","EZ_Clothing\data\player\Armband\Armband_br_big_co.paa","EZ_Clothing\data\player\Armband\Armband_br_big_co.paa"};
	};
	class EZ_Armband_ca: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Canada";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_ca_g_co.paa","EZ_Clothing\data\player\Armband\Armband_ca_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ca_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ca_big_co.paa","EZ_Clothing\data\player\Armband\Armband_ca_big_co.paa"};
	};
	class EZ_Armband_cccp: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Soviet Union";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_cccp_g_co.paa","EZ_Clothing\data\player\Armband\Armband_cccp_small_co.paa","EZ_Clothing\data\player\Armband\Armband_cccp_small_co.paa","EZ_Clothing\data\player\Armband\Armband_cccp_big_co.paa","EZ_Clothing\data\player\Armband\Armband_cccp_big_co.paa"};
	};
	class EZ_Armband_cz: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Czech Republic";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_cz_g_co.paa","EZ_Clothing\data\player\Armband\Armband_cz_small_co.paa","EZ_Clothing\data\player\Armband\Armband_cz_small_co.paa","EZ_Clothing\data\player\Armband\Armband_cz_big_co.paa","EZ_Clothing\data\player\Armband\Armband_cz_big_co.paa"};
	};
	class EZ_Armband_de: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Germany";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_de_g_co.paa","EZ_Clothing\data\player\Armband\Armband_de_small_co.paa","EZ_Clothing\data\player\Armband\Armband_de_small_co.paa","EZ_Clothing\data\player\Armband\Armband_de_big_co.paa","EZ_Clothing\data\player\Armband\Armband_de_big_co.paa"};
	};
	class EZ_Armband_dk: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Denmark";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_dk_g_co.paa","EZ_Clothing\data\player\Armband\Armband_dk_small_co.paa","EZ_Clothing\data\player\Armband\Armband_dk_small_co.paa","EZ_Clothing\data\player\Armband\Armband_dk_big_co.paa","EZ_Clothing\data\player\Armband\Armband_dk_big_co.paa"};
	};
	class EZ_Armband_dz: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Algeria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_dz_g_co.paa","EZ_Clothing\data\player\Armband\Armband_dz_small_co.paa","EZ_Clothing\data\player\Armband\Armband_dz_small_co.paa","EZ_Clothing\data\player\Armband\Armband_dz_big_co.paa","EZ_Clothing\data\player\Armband\Armband_dz_big_co.paa"};
	};
	class EZ_Armband_es: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Spain";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_es_g_co.paa","EZ_Clothing\data\player\Armband\Armband_es_small_co.paa","EZ_Clothing\data\player\Armband\Armband_es_small_co.paa","EZ_Clothing\data\player\Armband\Armband_es_big_co.paa","EZ_Clothing\data\player\Armband\Armband_es_big_co.paa"};
	};
	class EZ_Armband_fi: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Finland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_fi_g_co.paa","EZ_Clothing\data\player\Armband\Armband_fi_small_co.paa","EZ_Clothing\data\player\Armband\Armband_fi_small_co.paa","EZ_Clothing\data\player\Armband\Armband_fi_big_co.paa","EZ_Clothing\data\player\Armband\Armband_fi_big_co.paa"};
	};
	class EZ_Armband_fr: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - France";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_fr_g_co.paa","EZ_Clothing\data\player\Armband\Armband_fr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_fr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_fr_big_co.paa","EZ_Clothing\data\player\Armband\Armband_fr_big_co.paa"};
	};
	class EZ_Armband_gr: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Greece";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_gr_g_co.paa","EZ_Clothing\data\player\Armband\Armband_gr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_gr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_gr_big_co.paa","EZ_Clothing\data\player\Armband\Armband_gr_big_co.paa"};
	};
	class EZ_Armband_hr: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Croatia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_hr_g_co.paa","EZ_Clothing\data\player\Armband\Armband_hr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_hr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_hr_big_co.paa","EZ_Clothing\data\player\Armband\Armband_hr_big_co.paa"};
	};
	class EZ_Armband_hu: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Hungary";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_hu_g_co.paa","EZ_Clothing\data\player\Armband\Armband_hu_small_co.paa","EZ_Clothing\data\player\Armband\Armband_hu_small_co.paa","EZ_Clothing\data\player\Armband\Armband_hu_big_co.paa","EZ_Clothing\data\player\Armband\Armband_hu_big_co.paa"};
	};
	class EZ_Armband_ie: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Ireland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_ie_g_co.paa","EZ_Clothing\data\player\Armband\Armband_ie_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ie_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ie_big_co.paa","EZ_Clothing\data\player\Armband\Armband_ie_big_co.paa"};
	};
	class EZ_Armband_il: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Israel";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_il_g_co.paa","EZ_Clothing\data\player\Armband\Armband_il_small_co.paa","EZ_Clothing\data\player\Armband\Armband_il_small_co.paa","EZ_Clothing\data\player\Armband\Armband_il_big_co.paa","EZ_Clothing\data\player\Armband\Armband_il_big_co.paa"};
	};
	class EZ_Armband_it: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Italy";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_it_g_co.paa","EZ_Clothing\data\player\Armband\Armband_it_small_co.paa","EZ_Clothing\data\player\Armband\Armband_it_small_co.paa","EZ_Clothing\data\player\Armband\Armband_it_big_co.paa","EZ_Clothing\data\player\Armband\Armband_it_big_co.paa"};
	};
	class EZ_Armband_kw: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Kuwait";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_kw_g_co.paa","EZ_Clothing\data\player\Armband\Armband_kw_small_co.paa","EZ_Clothing\data\player\Armband\Armband_kw_small_co.paa","EZ_Clothing\data\player\Armband\Armband_kw_big_co.paa","EZ_Clothing\data\player\Armband\Armband_kw_big_co.paa"};
	};
	class EZ_Armband_lt: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Lithuania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_lt_g_co.paa","EZ_Clothing\data\player\Armband\Armband_lt_small_co.paa","EZ_Clothing\data\player\Armband\Armband_lt_small_co.paa","EZ_Clothing\data\player\Armband\Armband_lt_big_co.paa","EZ_Clothing\data\player\Armband\Armband_lt_big_co.paa"};
	};
	class EZ_Armband_lv: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Latvia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_lv_g_co.paa","EZ_Clothing\data\player\Armband\Armband_lv_small_co.paa","EZ_Clothing\data\player\Armband\Armband_lv_small_co.paa","EZ_Clothing\data\player\Armband\Armband_lv_big_co.paa","EZ_Clothing\data\player\Armband\Armband_lv_big_co.paa"};
	};
	class EZ_Armband_md: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Moldova";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_md_g_co.paa","EZ_Clothing\data\player\Armband\Armband_md_small_co.paa","EZ_Clothing\data\player\Armband\Armband_md_small_co.paa","EZ_Clothing\data\player\Armband\Armband_md_big_co.paa","EZ_Clothing\data\player\Armband\Armband_md_big_co.paa"};
	};
	class EZ_Armband_mt: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Malta";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_mt_g_co.paa","EZ_Clothing\data\player\Armband\Armband_mt_small_co.paa","EZ_Clothing\data\player\Armband\Armband_mt_small_co.paa","EZ_Clothing\data\player\Armband\Armband_mt_big_co.paa","EZ_Clothing\data\player\Armband\Armband_mt_big_co.paa"};
	};
	class EZ_Armband_nl: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Netherlands";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_nl_g_co.paa","EZ_Clothing\data\player\Armband\Armband_nl_small_co.paa","EZ_Clothing\data\player\Armband\Armband_nl_small_co.paa","EZ_Clothing\data\player\Armband\Armband_nl_big_co.paa","EZ_Clothing\data\player\Armband\Armband_nl_big_co.paa"};
	};
	class EZ_Armband_no: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Norway";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_no_g_co.paa","EZ_Clothing\data\player\Armband\Armband_no_small_co.paa","EZ_Clothing\data\player\Armband\Armband_no_small_co.paa","EZ_Clothing\data\player\Armband\Armband_no_big_co.paa","EZ_Clothing\data\player\Armband\Armband_no_big_co.paa"};
	};
	class EZ_Armband_nz: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - New Zealand";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_nz_g_co.paa","EZ_Clothing\data\player\Armband\Armband_nz_small_co.paa","EZ_Clothing\data\player\Armband\Armband_nz_small_co.paa","EZ_Clothing\data\player\Armband\Armband_nz_big_co.paa","EZ_Clothing\data\player\Armband\Armband_nz_big_co.paa"};
	};
	class EZ_Armband_ph: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Philippines";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_ph_g_co.paa","EZ_Clothing\data\player\Armband\Armband_ph_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ph_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ph_big_co.paa","EZ_Clothing\data\player\Armband\Armband_ph_big_co.paa"};
	};
	class EZ_Armband_pl: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Poland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_pl_g_co.paa","EZ_Clothing\data\player\Armband\Armband_pl_small_co.paa","EZ_Clothing\data\player\Armband\Armband_pl_small_co.paa","EZ_Clothing\data\player\Armband\Armband_pl_big_co.paa","EZ_Clothing\data\player\Armband\Armband_pl_big_co.paa"};
	};
	class EZ_Armband_pt: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Portugal";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_pt_g_co.paa","EZ_Clothing\data\player\Armband\Armband_pt_small_co.paa","EZ_Clothing\data\player\Armband\Armband_pt_small_co.paa","EZ_Clothing\data\player\Armband\Armband_pt_big_co.paa","EZ_Clothing\data\player\Armband\Armband_pt_big_co.paa"};
	};
	class EZ_Armband_ro: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Romania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_ro_g_co.paa","EZ_Clothing\data\player\Armband\Armband_ro_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ro_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ro_big_co.paa","EZ_Clothing\data\player\Armband\Armband_ro_big_co.paa"};
	};
	class EZ_Armband_rs: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Serbia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_rs_g_co.paa","EZ_Clothing\data\player\Armband\Armband_rs_small_co.paa","EZ_Clothing\data\player\Armband\Armband_rs_small_co.paa","EZ_Clothing\data\player\Armband\Armband_rs_big_co.paa","EZ_Clothing\data\player\Armband\Armband_rs_big_co.paa"};
	};
	class EZ_Armband_ru: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Russia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_ru_g_co.paa","EZ_Clothing\data\player\Armband\Armband_ru_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ru_small_co.paa","EZ_Clothing\data\player\Armband\Armband_ru_big_co.paa","EZ_Clothing\data\player\Armband\Armband_ru_big_co.paa"};
	};
	class EZ_Armband_se: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Sweden";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_se_g_co.paa","EZ_Clothing\data\player\Armband\Armband_se_small_co.paa","EZ_Clothing\data\player\Armband\Armband_se_small_co.paa","EZ_Clothing\data\player\Armband\Armband_se_big_co.paa","EZ_Clothing\data\player\Armband\Armband_se_big_co.paa"};
	};
	class EZ_Armband_tr: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Turkey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_tr_g_co.paa","EZ_Clothing\data\player\Armband\Armband_tr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_tr_small_co.paa","EZ_Clothing\data\player\Armband\Armband_tr_big_co.paa","EZ_Clothing\data\player\Armband\Armband_tr_big_co.paa"};
	};
	class EZ_Armband_uae: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - United Arab Emirates";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_uae_g_co.paa","EZ_Clothing\data\player\Armband\Armband_uae_small_co.paa","EZ_Clothing\data\player\Armband\Armband_uae_small_co.paa","EZ_Clothing\data\player\Armband\Armband_uae_big_co.paa","EZ_Clothing\data\player\Armband\Armband_uae_big_co.paa"};
	};
	class EZ_Armband_uk: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - United Kingdom";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_uk_g_co.paa","EZ_Clothing\data\player\Armband\Armband_uk_small_co.paa","EZ_Clothing\data\player\Armband\Armband_uk_small_co.paa","EZ_Clothing\data\player\Armband\Armband_uk_big_co.paa","EZ_Clothing\data\player\Armband\Armband_uk_big_co.paa"};
	};
	class EZ_Armband_us: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - United States of America";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_us_g_co.paa","EZ_Clothing\data\player\Armband\Armband_us_small_co.paa","EZ_Clothing\data\player\Armband\Armband_us_small_co.paa","EZ_Clothing\data\player\Armband\Armband_us_big_co.paa","EZ_Clothing\data\player\Armband\Armband_us_big_co.paa"};
	};
	class EZ_Armband_vn: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Vietnam";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_vn_g_co.paa","EZ_Clothing\data\player\Armband\Armband_vn_small_co.paa","EZ_Clothing\data\player\Armband\Armband_vn_small_co.paa","EZ_Clothing\data\player\Armband\Armband_vn_big_co.paa","EZ_Clothing\data\player\Armband\Armband_vn_big_co.paa"};
	};
	class EZ_Armband_yo: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Yugoslavia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Armband\Armband_yo_g_co.paa","EZ_Clothing\data\player\Armband\Armband_yo_small_co.paa","EZ_Clothing\data\player\Armband\Armband_yo_small_co.paa","EZ_Clothing\data\player\Armband\Armband_yo_big_co.paa","EZ_Clothing\data\player\Armband\Armband_yo_big_co.paa"};
	};
	class EZ_Jersey_italian: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Italia Jersey";
		descriptionShort = "Official Italian football jersey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_italia_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_italia_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_italia_co.paa"};
	};
	class EZ_Jersey_manchester: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Manchester United Jersey";
		descriptionShort = "Official Manchester United football jersey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_manchester_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_manchester_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_manchester_co.paa"};
	};
	class EZ_Jersey_german: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Deutscher Fussball-Bund Jersey";
		descriptionShort = "Official Deutscher Fussball-Bund football jersey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_german_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_german_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_german_co.paa"};
	};
	class EZ_Jersey_england: TShirt_ColorBase
	{
		scope = 2;
		displayName = "England National Jersey";
		descriptionShort = "Official England National football jersey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_england_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_england_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_england_co.paa"};
	};
	class EZ_Jersey_dortmund: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Borussia Dortmund Jersey";
		descriptionShort = "Official Borussia Dortmund football jersey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_dortmund_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_dortmund_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_dortmund_co.paa"};
	};
	class EZ_Jersey_barcelona: TShirt_ColorBase
	{
		scope = 2;
		displayName = "FC Barcelona Jersey";
		descriptionShort = "Official FC Barcelona football jersey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_barcelona_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_barcelona_co.paa","EZ_Clothing\data\player\Soccer Teams\EZ_TShirt_barcelona_co.paa"};
	};
	class EZ_Event_Vest: ReflexVest
	{
		scope = 2;
		displayName = "Event Staff Vest";
		descriptionShort = "Custom Endzone Staff Event Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EZ_Event_Vest.paa","EZ_Clothing\data\staff\Endzone\EZ_Event_Vest.paa","EZ_Clothing\data\staff\Endzone\EZ_Event_Vest.paa"};
	};
	class EZ_Admin_Jacket: M65Jacket_ColorBase
	{
		scope = 2;
		displayName = "Admin Jacket";
		descriptionShort = "Custom Endzone Staff Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\endzone_jacket.paa","EZ_Clothing\data\staff\Endzone\endzone_jacket.paa","EZ_Clothing\data\staff\Endzone\endzone_jacket.paa"};
	};
	class EZ_Kokaskale_Shirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "Kokaskale Staff Tactiacl Shirt";
		descriptionShort = "Custom kokaskale Staff Tactiacl Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\kokaskale_shirt.paa","EZ_Clothing\data\staff\Kokaskale\kokaskale_shirt.paa","EZ_Clothing\data\staff\Kokaskale\kokaskale_shirt.paa"};
	};
	class EZ_Kokaskale_MVSCombatPants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "Kokaskale Staff MVS Combat Pants";
		descriptionShort = "Custom kokaskale Staff MVS Combat Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\Kokaskale_mvs_combatpants.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_mvs_combatpants.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_mvs_combatpants.paa"};
	};
	class EZ_Kokaskale_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Kokaskale Staff Shroud";
		descriptionShort = "Custom kokaskale Staff Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\Kokaskale_MVS_Shroud.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_MVS_Shroud.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_MVS_Shroud.paa"};
	};
	class EZ_Kokaskale_JungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "Kokaskale Staff Jungle Boots";
		descriptionShort = "Custom kokaskale Staff Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\Kokaskale_jungleboots.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_jungleboots.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_jungleboots.paa"};
	};
	class EZ_Kokaskale_TacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "Kokaskale Staff Tactical Gloves";
		descriptionShort = "Custom kokaskale Staff Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\Kokaskale_tacticalgloves.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_tacticalgloves.paa","EZ_Clothing\data\staff\Kokaskale\Kokaskale_tacticalgloves.paa"};
	};
	class EZ_Kokaskale_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "MVS Warrior Helmet - Tan";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\EZ_kokaskale_WarriorHelmet_co.paa","EZ_Clothing\data\staff\Kokaskale\EZ_kokaskale_WarriorHelmet_co.paa","EZ_Clothing\data\staff\Kokaskale\EZ_kokaskale_WarriorHelmet_co.paa","EZ_Clothing\data\staff\Kokaskale\EZ__kokaskale_Mandalorian_Helmet_co.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class MVS_Admin_Patch: Modular_Patch_Base
	{
		scope = 2;
		displayName = "ENDZONE Patch - ADMIN";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\EZ_admin_mvs_patch.paa","EZ_Clothing\data\staff\Kokaskale\EZ_kokaskale_Armband_co.paa"};
	};
	class Boots_GG: Inventory_Base
	{
		scope = 2;
		displayName = "Clothing";
		itemSize[] = {2,2};
		descriptionShort = "Clothing";
		model = "EZ_Clothing\data\staff\InvisibleClothes\invisible.p3d";
		inventorySlot = "Feet";
		itemInfo[] = {"Clothing","Feet"};
		weight = 1230;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		absorbency = 0.1;
		heatIsolation = 0.5;
	};
	class Pants_GG: HunterPants_ColorBase
	{
		scope = 2;
		displayName = "Clothing";
		descriptionShort = "Clothing";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa"};
	};
	class Top_GG: GorkaEJacket_ColorBase
	{
		scope = 2;
		displayName = "Clothing";
		descriptionShort = "Clothinge";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa"};
	};
	class Arms_GG: Inventory_Base
	{
		scope = 2;
		displayName = "Clothing";
		itemSize[] = {2,2};
		descriptionShort = "Clothing";
		model = "EZ_Clothing\data\staff\InvisibleClothes\invisible.p3d";
		inventorySlot = "Gloves";
	};
	class Head_GG: Inventory_Base
	{
		scope = 2;
		displayName = "Clothing";
		itemSize[] = {2,2};
		descriptionShort = "Clothing";
		model = "EZ_Clothing\data\staff\InvisibleClothes\invisible.p3d";
		inventorySlot = "Head";
		simulation = "head";
	};
	class Backpack_GG: AliceBag_ColorBase
	{
		scope = 2;
		displayName = "Clothing";
		descriptionShort = "Clothing";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa"};
	};
	class EZ_Kokas_Sneakers2: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Magneto - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers2.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers2.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers2.paa"};
	};
	class EZ_Kokas_Sneakers3: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Harvey Pekar - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers3.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers3.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers3.paa"};
	};
	class EZ_Kokas_Sneakers4: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Deadpool - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers4.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers4.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers4.paa"};
	};
	class EZ_Kokas_Sneakers5: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Jenny Sparks - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers5.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers5.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers5.paa"};
	};
	class EZ_Kokas_Sneakers6: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Astro Boy - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers6.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers6.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers6.paa"};
	};
	class EZ_Kokas_Sneakers7: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "The Mekon - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers7.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers7.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers7.paa"};
	};
	class EZ_Kokas_Sneakers8: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Cerebus - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers8.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers8.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers8.paa"};
	};
	class EZ_Kokas_Sneakers9: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Daredevil - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers9.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers9.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers9.paa"};
	};
	class EZ_Kokas_Sneakers10: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Hellboy - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers10.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers10.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers10.paa"};
	};
	class EZ_Kokas_Sneakers11: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Venom - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers11.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers11.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers11.paa"};
	};
	class EZ_Kokas_Sneakers12: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Johnny Alpha - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers12.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers12.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers12.paa"};
	};
	class EZ_Kokas_Sneakers13: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Dr.huff - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers13.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers13.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers13.paa"};
	};
	class EZ_Kokas_Sneakers14: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Punisher - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers14.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers14.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers14.paa"};
	};
	class EZ_Kokas_Sneakers15: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Iron Man - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers15.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers15.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers15.paa"};
	};
	class EZ_Kokas_Sneakers16: Sneakers_ColorBase
	{
		scope = 2;
		displayName = "Rorschach - Sneakers";
		descriptionShort = "Sneakers made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Shoes\kokas_sneakers16.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers16.paa","EZ_Clothing\data\player\Shoes\kokas_sneakers16.paa"};
	};
	class BL_TShirt_soc: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_soc.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_soc.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_soc.paa"};
	};
	class BL_TShirt_broke: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_broke.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_broke.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_broke.paa"};
	};
	class BL_TShirt_purge: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_purge.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_purge.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_purge.paa"};
	};
	class BL_TShirt_blood: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_blood.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_blood.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_blood.paa"};
	};
	class BL_TShirt_noot: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_noot.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_noot.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_noot.paa"};
	};
	class BL_TShirt_ak47: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_ak47.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_ak47.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_ak47.paa"};
	};
	class BL_TShirt_bobs: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_bobs.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_bobs.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_bobs.paa"};
	};
	class BL_TShirt_engineer: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_engineer.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_engineer.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_engineer.paa"};
	};
	class BL_TShirt_nolivesmatter: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_nolivesmatter.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_nolivesmatter.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_nolivesmatter.paa"};
	};
	class BL_TShirt_hungry: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_hungry.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_hungry.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_hungry.paa"};
	};
	class BL_Banner_Stop: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Banner - STOP";
		itemSize[] = {15,15};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Banners\Banner_stop_co.paa","EZ_Clothing\data\player\Banners\Banner_stop_co.paa","EZ_Clothing\data\player\Banners\Banner_stop_co.paa","EZ_Clothing\data\player\Banners\Banner_stop_co.paa"};
	};
	class EZ_Eviction_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Banner Of Shame";
		descriptionShort = "Banner Of Shame - For Further Information create a ticket!";
		itemSize[] = {15,15};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\Eviction_b.paa"};
	};
	class EZ_Endzone_Flag: Flag_Base
	{
		scope = 2;
		displayName = "ENDZONE Flag";
		descriptionShort = "ENDZONE Flag";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\Endzone_f.paa"};
	};
	class EZ_Medal_2: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal2_co.paa"};
	};
	class EZ_Medal_3: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal3_co.paa"};
	};
	class EZ_Medal_4: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal4_co.paa"};
	};
	class EZ_Medal_5: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal5_co.paa"};
	};
	class EZ_Medal_6: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal6_co.paa"};
	};
	class EZ_Medal_7: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal7_co.paa"};
	};
	class EZ_Medal_8: EZ_Medal
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Medal\medal8_co.paa"};
	};
	class EZ_NBC_Gloves_blackmulticam: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC BlackMultiCam Gloves";
		descriptionShort = "Custom NBC BlackMultiCam Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_blackmulticam.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_blackmulticam.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_blackmulticam.paa"};
	};
	class EZ_NBC_Gloves_blue: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC Blue Gloves";
		descriptionShort = "Custom NBC Blue Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_blue.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_blue.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_blue.paa"};
	};
	class EZ_NBC_Gloves_green: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC Green Gloves";
		descriptionShort = "Custom NBC Green Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_green.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_green.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_green.paa"};
	};
	class EZ_NBC_Gloves_red: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC Red Gloves";
		descriptionShort = "Custom NBC Red Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_red.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_red.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_red.paa"};
	};
	class EZ_NBC_Gloves_tiger: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC Tiger Gloves";
		descriptionShort = "Custom NBC Tiger Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_tiger.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_tiger.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_tiger.paa"};
	};
	class EZ_NBC_Gloves_tropic: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC Tropic Gloves";
		descriptionShort = "Custom NBC Tropic Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_tropic.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_tropic.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_tropic.paa"};
	};
	class EZ_NBC_Gloves_yellow: NBCGloves_ColorBase
	{
		scope = 2;
		displayName = "NBC Yellow Gloves";
		descriptionShort = "Custom NBC Yellow Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_yellow.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_yellow.paa","EZ_Clothing\data\player\NBC\Gloves\nbc_gloves_yellow.paa"};
	};
	class EZ_NBC_Hood_blackmulticam: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC BlackMultiCam Hood";
		descriptionShort = "Custom NBC BlackMultiCam Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_blackmulticam.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_blackmulticam.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_blackmulticam.paa"};
	};
	class EZ_NBC_Hood_blue: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC Blue Hood";
		descriptionShort = "Custom NBC Blue Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_blue.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_blue.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_blue.paa"};
	};
	class EZ_NBC_Hood_green: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC Green Hood";
		descriptionShort = "Custom NBC Green Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_green.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_green.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_green.paa"};
	};
	class EZ_NBC_Hood_red: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC Red Hood";
		descriptionShort = "Custom NBC Red Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_red.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_red.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_red.paa"};
	};
	class EZ_NBC_Hood_tiger: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC Tiger Hood";
		descriptionShort = "Custom NBC Tiger Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_tiger.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_tiger.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_tiger.paa"};
	};
	class EZ_NBC_Hood_tropic: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC Tropic Hood";
		descriptionShort = "Custom NBC Tropic Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_tropic.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_tropic.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_tropic.paa"};
	};
	class EZ_NBC_Hood_yellow: NBCHoodBase
	{
		scope = 2;
		displayName = "NBC Yellow Hood";
		descriptionShort = "Custom NBC Yellow Hood made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Hood\nbc_hood_yellow.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_yellow.paa","EZ_Clothing\data\player\NBC\Hood\nbc_hood_yellow.paa"};
	};
	class EZ_NBC_Pants_blackmulticam: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC BlackMultiCam Pants";
		descriptionShort = "Custom NBC BlackMultiCam Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_blackmulticam.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_blackmulticam.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_blackmulticam.paa"};
	};
	class EZ_NBC_Pants_blue: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC Blue Pants";
		descriptionShort = "Custom NBC Blue Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_blue.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_blue.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_blue.paa"};
	};
	class EZ_NBC_Pants_green: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC Green Pants";
		descriptionShort = "Custom NBC Green Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_green.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_green.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_green.paa"};
	};
	class EZ_NBC_Pants_red: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC Red Pants";
		descriptionShort = "Custom NBC Red Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_red.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_red.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_red.paa"};
	};
	class EZ_NBC_Pants_tiger: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC Tiger Pants";
		descriptionShort = "Custom NBC Tiger Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_tiger.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_tiger.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_tiger.paa"};
	};
	class EZ_NBC_Pants_tropic: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC Tropic Pants";
		descriptionShort = "Custom NBC Tropic Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_tropic.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_tropic.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_tropic.paa"};
	};
	class EZ_NBC_Pants_yellow: NBCPantsBase
	{
		scope = 2;
		displayName = "NBC Yellow Pants";
		descriptionShort = "Custom NBC Yellow Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Pants\nbc_pants_yellow.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_yellow.paa","EZ_Clothing\data\player\NBC\Pants\nbc_pants_yellow.paa"};
	};
	class EZ_NBC_Boots_blackmulticam: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC BlackMultiCam Boots";
		descriptionShort = "Custom NBC BlackMultiCam Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_blackmulticam.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_blackmulticam.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_blackmulticam.paa"};
	};
	class EZ_NBC_Boots_blue: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC Blue Boots";
		descriptionShort = "Custom NBC Blue Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_blue.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_blue.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_blue.paa"};
	};
	class EZ_NBC_Boots_green: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC Green Boots";
		descriptionShort = "Custom NBC Green Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_green.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_green.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_green.paa"};
	};
	class EZ_NBC_Boots_red: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC Red Boots";
		descriptionShort = "Custom NBC Red Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_red.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_red.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_red.paa"};
	};
	class EZ_NBC_Boots_tiger: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC Tiger Boots";
		descriptionShort = "Custom NBC Tiger Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_tiger.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_tiger.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_tiger.paa"};
	};
	class EZ_NBC_Boots_tropic: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC Tropic Boots";
		descriptionShort = "Custom NBC Tropic Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_tropic.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_tropic.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_tropic.paa"};
	};
	class EZ_NBC_Boots_yellow: NBCBootsBase
	{
		scope = 2;
		displayName = "NBC Yellow Boots";
		descriptionShort = "Custom NBC Yellow Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Boots\nbc_boots_yellow.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_yellow.paa","EZ_Clothing\data\player\NBC\Boots\nbc_boots_yellow.paa"};
	};
	class EZ_NBC_Jacket_blackmulticam: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC BlackMultiCam Jacket";
		descriptionShort = "Custom NBC BlackMultiCam Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_blackmulticam.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_blackmulticam.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_blackmulticam.paa"};
	};
	class EZ_NBC_Jacket_blue: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC Blue Jacket";
		descriptionShort = "Custom NBC Blue Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_blue.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_blue.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_blue.paa"};
	};
	class EZ_NBC_Jacket_green: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC Green Jacket";
		descriptionShort = "Custom NBC Green Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_green.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_green.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_green.paa"};
	};
	class EZ_NBC_Jacket_red: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC Red Jacket";
		descriptionShort = "Custom NBC Red Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_red.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_red.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_red.paa"};
	};
	class EZ_NBC_Jacket_tiger: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC Tiger Jacket";
		descriptionShort = "Custom NBC Tiger Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_tiger.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_tiger.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_tiger.paa"};
	};
	class EZ_NBC_Jacket_tropic: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC Tropic Jacket";
		descriptionShort = "Custom NBC Tropic Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_tropic.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_tropic.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_tropic.paa"};
	};
	class EZ_NBC_Jacket_yellow: NBCJacketBase
	{
		scope = 2;
		displayName = "NBC Yellow Jacket";
		descriptionShort = "Custom NBC Yellow Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_yellow.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_yellow.paa","EZ_Clothing\data\player\NBC\Jacket\nbc_jacket_yellow.paa"};
	};
	class EZ_AngryBeavers_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Angry Beavers - Double Armband";
		descriptionShort = "Angry Beavers - Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Cappie\AngryBeavers_armband.paa"};
	};
	class EZ_AngryBeavers_Flag: Flag_Base
	{
		scope = 2;
		displayName = "Angry Beavers Flag";
		descriptionShort = "Angry Beavers - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Cappie\AngryBeavers_ff.paa"};
	};
	class EZ_AngryBeavers_BaseballCap: Msp_BaseballCap_Base
	{
		scope = 2;
		displayName = "Angry Beavers - Hat";
		descriptionShort = "Angry Beavers - Hat made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Cappie\AngryBeavers_baseballcapii.paa"};
	};
	class EZ_INC_Flag: Flag_Base
	{
		scope = 2;
		displayName = "INC Flag";
		descriptionShort = "INC - CrewPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\INC\INC_ff.paa"};
	};
	class EZ_INC_Armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "INC - Armband";
		descriptionShort = "INC - CrewPackage Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\INC\INC_gg.paa","EZ_Clothing\data\patreon_crew\INC\INC_aa.paa","EZ_Clothing\data\patreon_crew\INC\INC_aa.paa","EZ_Clothing\data\patreon_crew\INC\INC_aa.paa","EZ_Clothing\data\patreon_crew\INC\INC_aa.paa"};
	};
	class EZ_INC_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "INC - Tactical Shirt";
		descriptionShort = "INC - CrewPackage Tactical Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\INC\INC_shirt.paa","EZ_Clothing\data\patreon_crew\INC\INC_shirt.paa","EZ_Clothing\data\patreon_crew\INC\INC_shirt.paa"};
	};
	class EZ_Svenne_Flag: Flag_Base
	{
		scope = 2;
		displayName = "Svenne Flag";
		desSvenneptionShort = "Svenne - CrewPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\Svenne\Svenne_ff.paa"};
	};
	class EZ_Svenne_Armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "Svenne - Armband";
		desSvenneptionShort = "Svenne - CrewPackage Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\Svenne\Svenne_gg.paa","EZ_Clothing\data\patreon_crew\Svenne\Svenne_aa.paa","EZ_Clothing\data\patreon_crew\Svenne\Svenne_aa.paa","EZ_Clothing\data\patreon_crew\Svenne\Svenne_aa.paa","EZ_Clothing\data\patreon_crew\Svenne\Svenne_aa.paa"};
	};
	class EZ_Svenne_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "Svenne - Tactical Shirt";
		desSvenneptionShort = "Svenne - CrewPackage Tactical Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\Svenne\Svenne_shirt.paa","EZ_Clothing\data\patreon_crew\Svenne\Svenne_shirt.paa","EZ_Clothing\data\patreon_crew\Svenne\Svenne_shirt.paa"};
	};
	class Barrel_Ammo_EZ: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel - Ammo";
		color = "Ammo_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_ammo.paa"};
	};
	class BarrelHoles_Ammo_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		displayName = "Fire Barrel";
		color = "Ammo_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_hollbarrel_ammo.paa"};
	};
	class Barrel_Tools_EZ: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel - Tools";
		color = "Tools_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_tools.paa"};
	};
	class BarrelHoles_Tools_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		displayName = "Fire Barrel";
		color = "Tools_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_hollbarrel_tools.paa"};
	};
	class Barrel_Meds_EZ: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel - Meds";
		color = "Meds_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_medicine.paa"};
	};
	class BarrelHoles_Meds_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		displayName = "Fire Barrel";
		color = "Meds_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_hollbarrel_medicine.paa"};
	};
	class Barrel_Mags_EZ: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel - Mags";
		color = "Mags_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_mags.paa"};
	};
	class BarrelHoles_Mags_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		displayName = "Fire Barrel";
		color = "Mags_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_hollbarrel_mags.paa"};
	};
	class Barrel_Food_EZ: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel - Food";
		color = "Food_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_food.paa"};
	};
	class BarrelHoles_Food_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		displayName = "Fire Barrel";
		color = "Food_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_hollbarrel_food.paa"};
	};
	class Barrel_C4_EZ: Barrel_ColorBase
	{
		scope = 2;
		displayName = "Barrel - Explosives";
		color = "C4_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_explosions.paa"};
	};
	class BarrelHoles_C4_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		displayName = "Fire Barrel";
		color = "C4_EZ";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_hollbarrel_explosions.paa"};
	};
	class EZ_HunterPants_Green: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Pants - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_green.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_green.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_green.paa"};
	};
	class EZ_HunterPants_Tabac: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Pants - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_tabac.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_tabac.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_tabac.paa"};
	};
	class EZ_HunterPants_Summer: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Pants - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_summer.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_summer.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_summer.paa"};
	};
	class EZ_HunterPants_Winter: HunterPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Pants - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_winter.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_winter.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunterpants_fleese_winter.paa"};
	};
	class EZ_HuntingJacket_Green: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {7,7};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_green.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_green.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_green.paa"};
	};
	class EZ_HuntingJacket_Tabac: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {7,7};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_tabac.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_tabac.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_tabac.paa"};
	};
	class EZ_HuntingJacket_Summer: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {7,7};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_summer.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_summer.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_summer.paa"};
	};
	class EZ_HuntingJacket_Winter: HuntingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Fleece Hunting Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {7,7};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_winter.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_winter.paa","EZ_Clothing\data\player\EZ_Hunting_Clothes\hunting_jacket_fleese_winter.paa"};
	};
	class EZ_Ushanka_Winter_Chernarus: Ushanka_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Winter Ushanka Chernarus - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\ushanka_winter.paa","EZ_Clothing\data\player\HeadGear\ushanka_winter.paa","EZ_Clothing\data\player\HeadGear\ushanka_winter.paa"};
	};
	class EZ_Ushanka_Summer_Chernarus: Ushanka_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Summer Ushanka Chernarus - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\ushanka_summer.paa","EZ_Clothing\data\player\HeadGear\ushanka_summer.paa","EZ_Clothing\data\player\HeadGear\ushanka_summer.paa"};
	};
	class EZ_QuiltedJacket_Black_Blue: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Quilted Jacket Black/Blue - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\quiltedjacket_blue_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_blue_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_blue_black.paa"};
	};
	class EZ_QuiltedJacket_Black_Yellow: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Quilted Jacket Black/Yellow - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\quiltedjacket_yellow_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_yellow_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_yellow_black.paa"};
	};
	class EZ_QuiltedJacket_Black_Red: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Quilted Jacket Black/Red - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\quiltedjacket_red_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_red_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_red_black.paa"};
	};
	class EZ_QuiltedJacket_Black_Green: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Quilted Jacket Black/Green - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\quiltedjacket_green_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_green_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_green_black.paa"};
	};
	class EZ_QuiltedJacket_Black_Purple: QuiltedJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Quilted Jacket Black/Purple - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\quiltedjacket_purple_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_purple_black.paa","EZ_Clothing\data\player\Top\quiltedjacket_purple_black.paa"};
	};
	class EZ_BomberJacket_Navy: BomberJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Bomber Navy Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\bomberjacket_navy.paa","EZ_Clothing\data\player\Top\bomberjacket_navy.paa","EZ_Clothing\data\player\Top\bomberjacket_navy.paa"};
	};
	class EZ_RidersJacket_Black_Red: RidersJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Rider Jacket Black/Red - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\riders_jacket_red.paa","EZ_Clothing\data\player\Top\riders_jacket_red.paa","EZ_Clothing\data\player\Top\riders_jacket_red.paa"};
	};
	class EZ_RidersJacket_Red_Black: RidersJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Rider Jacket Red/Black - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\riders_jacket_red_black.paa","EZ_Clothing\data\player\Top\riders_jacket_red_black.paa","EZ_Clothing\data\player\Top\riders_jacket_red_black.paa"};
	};
	class EZ_Hoodie_Blackcamo: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Hoodie Black Camo - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\hoodie_blackcamo.paa","EZ_Clothing\data\player\Top\hoodie_blackcamo.paa","EZ_Clothing\data\player\Top\hoodie_blackcamo.paa"};
	};
	class EZ_Hoodie_Colourful: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Hoodie Colourful Camo - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\hoodie_colourful.paa","EZ_Clothing\data\player\Top\hoodie_colourful.paa","EZ_Clothing\data\player\Top\hoodie_colourful.paa"};
	};
	class EZ_Hoodie_Blue_Green: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Hoodie Blue/Green Camo - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\hoodie_blue_green.paa","EZ_Clothing\data\player\Top\hoodie_blue_green.paa","EZ_Clothing\data\player\Top\hoodie_blue_green.paa"};
	};
	class EZ_Hoodie_Blue_Leopard: Hoodie_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Hoodie Leopard Camo - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\hoodie_leopard.paa","EZ_Clothing\data\player\Top\hoodie_leopard.paa","EZ_Clothing\data\player\Top\hoodie_leopard.paa"};
	};
	class EZ_HikingJacket_Colourful: HikingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Hiking Colourful Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\hikingjacket_colourful.paa","EZ_Clothing\data\player\Top\hikingjacket_colourful.paa","EZ_Clothing\data\player\Top\hikingjacket_colourful.paa"};
	};
	class EZ_HikingJacket_Green: HikingJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Hiking Green Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\hikingjacket_green.paa","EZ_Clothing\data\player\Top\hikingjacket_green.paa","EZ_Clothing\data\player\Top\hikingjacket_green.paa"};
	};
	class EZ_Tracksuit_Jacket_Addidas_Flower: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Jacket Addidas Flower - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\abibas_shirt_flower.paa","EZ_Clothing\data\player\Top\abibas_shirt_flower.paa","EZ_Clothing\data\player\Top\abibas_shirt_flower.paa"};
	};
	class EZ_Tracksuit_Pants_Addidas_Flower: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Pants Addidas Flower - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\abibas_pants_flower.paa","EZ_Clothing\data\player\Pants\abibas_pants_flower.paa","EZ_Clothing\data\player\Pants\abibas_pants_flower.paa"};
	};
	class EZ_Tracksuit_Jacket_Addidas_Gucci: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Jacket Addidas Gucci - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\abibas_shirt_gucci.paa","EZ_Clothing\data\player\Top\abibas_shirt_gucci.paa","EZ_Clothing\data\player\Top\abibas_shirt_gucci.paa"};
	};
	class EZ_Tracksuit_Pants_Addidas_Gucci: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Pants Addidas Gucci - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\abibas_pants_gucci.paa","EZ_Clothing\data\player\Pants\abibas_pants_gucci.paa","EZ_Clothing\data\player\Pants\abibas_pants_gucci.paa"};
	};
	class EZ_Tracksuit_Jacket_Addidas_Prada: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Jacket Addidas Prada - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\abibas_shirt_prada.paa","EZ_Clothing\data\player\Top\abibas_shirt_prada.paa","EZ_Clothing\data\player\Top\abibas_shirt_prada.paa"};
	};
	class EZ_Tracksuit_Pants_Addidas_Prada: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Pants Addidas Prada - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\abibas_pants_prada.paa","EZ_Clothing\data\player\Pants\abibas_pants_prada.paa","EZ_Clothing\data\player\Pants\abibas_pants_prada.paa"};
	};
	class EZ_Tracksuit_Jacket_Addidas_Burberry: TrackSuitJacket_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Jacket Addidas Burberry - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\abibas_shirt_burberry.paa","EZ_Clothing\data\player\Top\abibas_shirt_burberry.paa","EZ_Clothing\data\player\Top\abibas_shirt_burberry.paa"};
	};
	class EZ_Tracksuit_Pants_Addidas_Burberry: TrackSuitPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Tracksuit Pants Addidas Burberry - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\abibas_pants_burberry.paa","EZ_Clothing\data\player\Pants\abibas_pants_burberry.paa","EZ_Clothing\data\player\Pants\abibas_pants_burberry.paa"};
	};
	class EZ_Shirt_Floral_Flower: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Shirt Floran Flower - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\shirt_ground_floral_flower.paa","EZ_Clothing\data\player\Top\shirt_button_floral_flower.paa","EZ_Clothing\data\player\Top\shirt_button_floral_flower.paa"};
	};
	class EZ_Shirt_Floral_Green: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Shirt Floran Green - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\shirt_ground_floral_green.paa","EZ_Clothing\data\player\Top\shirt_button_floral_green.paa","EZ_Clothing\data\player\Top\shirt_button_floral_green.paa"};
	};
	class EZ_Shirt_Floral_Tropic: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Shirt Floran Tropicmade by Kokaskale";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\shirt_ground_floral_tropic.paa","EZ_Clothing\data\player\Top\shirt_button_floral_tropic.paa","EZ_Clothing\data\player\Top\shirt_button_floral_tropic.paa"};
	};
	class EZ_Shirt_Floral_White: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Shirt Floran White - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\shirt_ground_floral_white.paa","EZ_Clothing\data\player\Top\shirt_button_floral_white.paa","EZ_Clothing\data\player\Top\shirt_button_floral_white.paa"};
	};
	class EZ_SlacksStrip_Blue: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Strip Slack Pants Blue - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_blue.paa","EZ_Clothing\data\player\Pants\slacks_strip_blue.paa","EZ_Clothing\data\player\Pants\slacks_strip_blue.paa"};
	};
	class EZ_SlacksStrip_Bluelight: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Strip Slack Pants Bluelight - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_bluelight.paa","EZ_Clothing\data\player\Pants\slacks_strip_bluelight.paa","EZ_Clothing\data\player\Pants\slacks_strip_bluelight.paa"};
	};
	class EZ_SlacksStrip_Red: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Strip Slack Pants Red - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_red.paa","EZ_Clothing\data\player\Pants\slacks_strip_red.paa","EZ_Clothing\data\player\Pants\slacks_strip_red.paa"};
	};
	class EZ_SlacksStrip_Green: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Strip Slack Pants Green - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_green.paa","EZ_Clothing\data\player\Pants\slacks_strip_green.paa","EZ_Clothing\data\player\Pants\slacks_strip_green.paa"};
	};
	class EZ_SlacksLinen_Beige: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Linen Slack Pants Beige - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_linen_beige.paa","EZ_Clothing\data\player\Pants\slacks_strip_linen_beige.paa","EZ_Clothing\data\player\Pants\slacks_strip_linen_beige.paa"};
	};
	class EZ_SlacksLinen_Blue: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Linen Slack Pants Blue - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_linen_blue.paa","EZ_Clothing\data\player\Pants\slacks_strip_linen_blue.paa","EZ_Clothing\data\player\Pants\slacks_strip_linen_blue.paa"};
	};
	class EZ_SlacksLinen_White: SlacksPants_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Linen Slack Pants White - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\slacks_strip_linen_white.paa","EZ_Clothing\data\player\Pants\slacks_strip_linen_white.paa","EZ_Clothing\data\player\Pants\slacks_strip_linen_white.paa"};
	};
	class EZ_Jeans_Black: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Ripped Jean Black - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,4};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\jeans_m_grd_black.paa","EZ_Clothing\data\player\Pants\jeans_black.paa","EZ_Clothing\data\player\Pants\jeans_f_black.paa"};
	};
	class EZ_Jeans_Blue: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Ripped Jean Blue - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,4};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\jeans_m_grd_blue.paa","EZ_Clothing\data\player\Pants\jeans_blue.paa","EZ_Clothing\data\player\Pants\jeans_f_blue.paa"};
	};
	class EZ_Jeans_Gray: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Ripped Jean Gray - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,4};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\jeans_m_grd_gray.paa","EZ_Clothing\data\player\Pants\jeans_gray.paa","EZ_Clothing\data\player\Pants\jeans_f_gray.paa"};
	};
	class EZ_Jeans_White: Jeans_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Ripped Jean White - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,4};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\jeans_m_grd_white.paa","EZ_Clothing\data\player\Pants\jeans_white.paa","EZ_Clothing\data\player\Pants\jeans_f_white.paa"};
	};
	class EZ_BalaclavaMask_Green: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Green Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_green.paa","EZ_Clothing\data\player\HeadGear\balaclava_green.paa","EZ_Clothing\data\player\HeadGear\balaclava_green.paa"};
	};
	class EZ_BalaclavaMask_Black: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Black Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_black.paa","EZ_Clothing\data\player\HeadGear\balaclava_black.paa","EZ_Clothing\data\player\HeadGear\balaclava_black.paa"};
	};
	class EZ_BalaclavaMask_Red: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Red Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_red.paa","EZ_Clothing\data\player\HeadGear\balaclava_red.paa","EZ_Clothing\data\player\HeadGear\balaclava_red.paa"};
	};
	class EZ_BalaclavaMask_Gray: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Gray Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_gray.paa","EZ_Clothing\data\player\HeadGear\balaclava_gray.paa","EZ_Clothing\data\player\HeadGear\balaclava_gray.paa"};
	};
	class EZ_BalaclavaMask_White: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - White Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_white.paa","EZ_Clothing\data\player\HeadGear\balaclava_white.paa","EZ_Clothing\data\player\HeadGear\balaclava_white.paa"};
	};
	class EZ_BalaclavaMask_Blue: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Blue Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_blue.paa","EZ_Clothing\data\player\HeadGear\balaclava_blue.paa","EZ_Clothing\data\player\HeadGear\balaclava_blue.paa"};
	};
	class EZ_BalaclavaMask_Brown: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Brown Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_brown.paa","EZ_Clothing\data\player\HeadGear\balaclava_brown.paa","EZ_Clothing\data\player\HeadGear\balaclava_brown.paa"};
	};
	class EZ_BalaclavaMask_Christmas: BalaclavaMask_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Christmas Lycra Balaclava - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\balaclava_christmas.paa","EZ_Clothing\data\player\HeadGear\balaclava_christmas.paa","EZ_Clothing\data\player\HeadGear\balaclava_christmas.paa"};
	};
	class EZ_DeminJacket_White: DenimJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Demin Jacket WHite - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\denim_jacket_white.paa","EZ_Clothing\data\player\Top\denim_jacket_white.paa","EZ_Clothing\data\player\Top\denim_jacket_white.paa"};
	};
	class EZ_DeminJacket_Black: DenimJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Demin Jacket Black - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\denim_jacket_black.paa","EZ_Clothing\data\player\Top\denim_jacket_black.paa","EZ_Clothing\data\player\Top\denim_jacket_black.paa"};
	};
	class EZ_DeminJacket_Blue: DenimJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Demin Jacket Blue - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\denim_jacket_blue.paa","EZ_Clothing\data\player\Top\denim_jacket_blue.paa","EZ_Clothing\data\player\Top\denim_jacket_blue.paa"};
	};
	class EZ_DeminJacket_Gray: DenimJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Demin Jacket Gray - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\denim_jacket_gray.paa","EZ_Clothing\data\player\Top\denim_jacket_gray.paa","EZ_Clothing\data\player\Top\denim_jacket_gray.paa"};
	};
	class EZ_DeminJacket_Green: DenimJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Demin Jacket Green - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\denim_jacket_green.paa","EZ_Clothing\data\player\Top\denim_jacket_green.paa","EZ_Clothing\data\player\Top\denim_jacket_green.paa"};
	};
	class EZ_DeminJacket_Plaid: DenimJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Demin Jacket Plaid - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {6,6};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\denim_jacket_plaid.paa","EZ_Clothing\data\player\Top\denim_jacket_plaid.paa","EZ_Clothing\data\player\Top\denim_jacket_plaid.paa"};
	};
	class EZ_Shirt_Plaid: Shirt_ColorBase
	{
		scope = 2;
		descriptionShort = "Endzone - Shirt Plaid - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\shirt_ground_plaid.paa","EZ_Clothing\data\player\Top\shirt_button_plaid.paa","EZ_Clothing\data\player\Top\shirt_button_plaid.paa"};
	};
	class EZ_PrisonUniformJacket_Orange: PrisonUniformJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Prison Orange Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\prison_top_g_orange.paa","EZ_Clothing\data\player\Top\prison_top_orange.paa","EZ_Clothing\data\player\Top\prison_top_orange.paa"};
	};
	class EZ_PrisonUniformJacket_Striped: PrisonUniformJacket
	{
		scope = 2;
		descriptionShort = "Endzone - Prison Striped Jacket - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Top\prison_top_g_striped.paa","EZ_Clothing\data\player\Top\prison_top_striped.paa","EZ_Clothing\data\player\Top\prison_top_striped.paa"};
	};
	class EZ_PrisonUniformPants_Orange: PrisonUniformPants
	{
		scope = 2;
		descriptionShort = "Endzone - Prison Orange Pants - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\prison_pants_g_orange.paa","EZ_Clothing\data\player\Pants\prison_pants_orange.paa","EZ_Clothing\data\player\Pants\prison_pants_orange.paa"};
	};
	class EZ_PrisonUniformPants_Striped: PrisonUniformPants
	{
		scope = 2;
		descriptionShort = "Endzone - Prison Striped Pants - Extended. Made by Kokaskale.";
		itemsCargoSize[] = {5,5};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Pants\prison_pants_g_striped.paa","EZ_Clothing\data\player\Pants\prison_pants_striped.paa","EZ_Clothing\data\player\Pants\prison_pants_striped.paa"};
	};
	class EZ_PrisonerCap_Orange: PrisonerCap
	{
		scope = 2;
		descriptionShort = "Endzone - Prison Orange Cap - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\prison_cap_orange.paa","EZ_Clothing\data\player\HeadGear\prison_cap_orange.paa","EZ_Clothing\data\player\HeadGear\prison_cap_orange.paa"};
	};
	class EZ_PrisonerCap_Striped: PrisonerCap
	{
		scope = 2;
		descriptionShort = "Endzone - Prison Striped Cap - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\HeadGear\prison_cap_striped.paa","EZ_Clothing\data\player\HeadGear\prison_cap_striped.paa","EZ_Clothing\data\player\HeadGear\prison_cap_striped.paa"};
	};
	class EZ_Mechanix_Gloves: TacticalGloves_ColorBase
	{
		scope=2;
		descriptionShort = "Endzone - Gloves Mechanix - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\player\Gloves\tacticalgloves_black_mechanix.paa",
			"EZ_Clothing\data\player\Gloves\tacticalgloves_black_mechanix.paa",
			"EZ_Clothing\data\player\Gloves\tacticalgloves_black_mechanix.paa"
		};
	};
	class EZ_Brown_Vest: PlateCarrierVest
	{
		displayName = "Endzone - Vest";
		descriptionShort = "Endzone - Brown Tactical Vest - Extended. Made by Kokaskale.";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa",
									  "EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa",
									  "EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa"};
	};
	class EZ_Brown_Pouches: PlateCarrierPouches
	{
		displayName = "Endzone - Pouches";
		descriptionShort = "Endzone - Brown Tactical Vest - Extended. Made by Kokaskale.";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa",
									  "EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa",
									  "EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa"};
	};
	class EZ_Brown_Holster: PlateCarrierHolster
	{
		displayName = "Endzone - Holster";
		descriptionShort = "Endzone - Brown Tactical Vest - Extended. Made by Kokaskale.";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa",
									  "EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa",
									  "EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa"};
	};
	class EZ_North_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "North - Double Armband";
		descriptionShort = "North - PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_armband.paa"};
	};
	class EZ_North_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "North - Banner";
		descriptionShort = "North- PlattonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_bb.paa"};
	};
	class EZ_North_Flag: Flag_Base
	{
		scope = 2;
		displayName = "North - Flag";
		descriptionShort = "North - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_ff.paa"};
	};
	class EZ_North_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "North - Balaclava";
		descriptionShort = "North - PlatoonPackage Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_balaclava.paa"};
	};
	class EZ_North_JungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "North - Jungle Boots";
		descriptionShort = "North - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_jungleboots.paa","EZ_Clothing\data\patreon_platoon\North\North_jungleboots.paa","EZ_Clothing\data\patreon_platoon\North\North_jungleboots.paa"};
	};
	class EZ_North_TacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "North - Tactical Gloves";
		descriptionShort = "North - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\North\North_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\North\North_tacticalgloves.paa"};
	};
	class EZ_North_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "North - Assault Pack";
		descriptionShort = "Endzone North - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_RaidPack.paa","EZ_Clothing\data\patreon_platoon\North\North_RaidPack.paa","EZ_Clothing\data\patreon_platoon\North\North_RaidPack.paa"};
	};
	class EZ_North_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "North - Helmet";
		descriptionShort = "North - PlatoonPackage Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\North\North_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\North\North_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\North\North_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_North_TacticalShirt: HikingJacket_ColorBase
	{
		scope = 2;
		displayName = "North - MVS Tactica lShirt";
		descriptionShort = "North - PlatoonPackage Tactica lShirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_shirt.paa","EZ_Clothing\data\patreon_platoon\North\North_shirt.paa","EZ_Clothing\data\patreon_platoon\North\North_shirt.paa"};
	};
	class EZ_North_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "North - MVS Pants";
		descriptionShort = "North - PlatoonPackage Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_combatpants.paa"};
	};
	class EZ_North_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "North - Vest";
		descriptionShort = "North - PlatoonPackage Vest made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_vest.paa"};
	};
	class EZ_North_Mvs_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "North - Helmet";
		descriptionShort = "North - PlatoonPackage Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\North\North_mvs_helmet.paa","EZ_Clothing\data\Mvs_Test\OpsCoreComtacs_co.paa"};
	};
	class EZ_North_MVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "North - Shroud";
		descriptionShort = "North - PlatoonPackage Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\North\North_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\North\North_MVS_Shroud.paa"};
	};
	class EZ_North_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "North - Heavy Plate Carrier";
		descriptionShort = "North - PlatoonPackage Heavy Plate Carrier made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\North\North_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\North\North_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\North\North_MVSHeavy_co.paa"};
	};
	class EZ_BABILON_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "BABILON - Double Armband";
		descriptionShort = "BABILON -PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_armband.paa"};
	};
	class EZ_BABILON_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "BABILON - Banner";
		descriptionShort = "BABILON - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_bb.paa"};
	};
	class EZ_BABILON_Flag: Flag_Base
	{
		scope = 2;
		displayName = "BABILON - Flag";
		descriptionShort = "BABILON - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_ff.paa"};
	};
	class EZ_BABILON_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Shirt";
		descriptionShort = "BABILON - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_combatshirt.paa"};
	};
	class EZ_BABILON_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Pants";
		descriptionShort = "BABILON - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_combatpants.paa"};
	};
	class EZ_BABILON_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Balaclava";
		descriptionShort = "BABILON - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_balaclava.paa"};
	};
	class EZ_BABILON_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Helmet";
		descriptionShort = "BABILON - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_helmet.paa"};
	};
	class EZ_BABILON_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Vest";
		descriptionShort = "BABILON - PlatoonPackage MVS Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_mvs_vest.paa"};
	};
	class EZ_BABILONMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Shroud";
		descriptionShort = "BABILON - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_MVS_Shroud.paa"};
	};
	class EZ_BABILONJungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "BABILON - Jungle Boots";
		descriptionShort = "BABILON - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_jungleboots.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_jungleboots.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_jungleboots.paa"};
	};
	class EZ_BABILONTacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "BABILON - Tactical Gloves";
		descriptionShort = "BABILON - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_tacticalgloves.paa"};
	};
	class EZ_BABILON_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "BABILON - MVS Heavy Plate Carrier";
		descriptionShort = "BABILON - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_MVSHeavy_co.paa"};
	};
	class EZ_BABILON_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "BABILON - Assault Pack";
		descriptionShort = "Endzone BABILON - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_RaidPack.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_RaidPack.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_RaidPack.paa"};
	};
	class EZ_BABILON_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "BABILON - MVS Warrior Helmet";
		descriptionShort = "BABILON - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\BABILON\BABILON_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\BABILON\BABILON_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_NoobSquad_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "NoobSquad - Double Armband";
		descriptionShort = "NoobSquad -PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_armband.paa"};
	};
	class EZ_NoobSquad_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "NoobSquad - Banner";
		descriptionShort = "NoobSquad - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_bb.paa"};
	};
	class EZ_NoobSquad_Flag: Flag_Base
	{
		scope = 2;
		displayName = "NoobSquad - Flag";
		descriptionShort = "NoobSquad - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_ff.paa"};
	};
	class EZ_NoobSquad_TacticalShirt: TacticalShirt_Olive
	{
		scope = 2;
		displayName = "NoobSquad - MVS Shirt";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_combatshirt.paa"};
	};
	class EZ_NoobSquad_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "NoobSquad - MVS Pants";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_combatpants.paa"};
	};
	class EZ_NoobSquad_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "NoobSquad - MVS Balaclava";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_balaclava.paa"};
	};
	class EZ_NoobSquad_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "NoobSquad - MVS Helmet";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_helmet.paa"};
	};
	class EZ_NoobSquad_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "NoobSquad - MVS Vest";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_mvs_vest.paa"};
	};
	class EZ_NoobSquadMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "NoobSquad - MVS Shroud";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_MVS_Shroud.paa"};
	};
	class EZ_NoobSquadJungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "NoobSquad - Jungle Boots";
		descriptionShort = "NoobSquad - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_jungleboots.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_jungleboots.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_jungleboots.paa"};
	};
	class EZ_NoobSquadTacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "NoobSquad - Tactical Gloves";
		descriptionShort = "NoobSquad - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_tacticalgloves.paa"};
	};
	class EZ_NoobSquad_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "NoobSquad - MVS Heavy Plate Carrier";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_MVSHeavy_co.paa"};
	};
	class EZ_NoobSquad_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "NoobSquad - Assault Pack";
		descriptionShort = "Endzone NoobSquad - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_RaidPack.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_RaidPack.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_RaidPack.paa"};
	};
	class EZ_NoobSquad_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "NoobSquad - MVS Warrior Helmet";
		descriptionShort = "NoobSquad - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NoobSquad\NoobSquad_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_NWA_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - Double Armband";
		descriptionShort = "North Western Alliance -PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_armband.paa"};
	};
	class EZ_NWA_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "North Western Alliance - Banner";
		descriptionShort = "North Western Alliance - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_bb.paa"};
	};
	class EZ_NWA_Flag: Flag_Base
	{
		scope = 2;
		displayName = "North Western Alliance - Flag";
		descriptionShort = "North Western Alliance - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_ff.paa"};
	};
	class EZ_NWA_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Shirt";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_combatshirt.paa"};
	};
	class EZ_NWA_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Pants";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_combatpants.paa"};
	};
	class EZ_NWA_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Balaclava";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_balaclava.paa"};
	};
	class EZ_NWA_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Helmet";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_helmet.paa"};
	};
	class EZ_NWA_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Vest";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_mvs_vest.paa"};
	};
	class EZ_NWAMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Shroud";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_MVS_Shroud.paa"};
	};
	class EZ_NWAJungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - Jungle Boots";
		descriptionShort = "North Western Alliance - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_jungleboots.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_jungleboots.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_jungleboots.paa"};
	};
	class EZ_NWATacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - Tactical Gloves";
		descriptionShort = "North Western Alliance - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_tacticalgloves.paa"};
	};
	class EZ_NWA_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Heavy Plate Carrier";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_MVSHeavy_co.paa"};
	};
	class EZ_NWA_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "North Western Alliance - Assault Pack";
		descriptionShort = "Endzone NWA - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_RaidPack.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_RaidPack.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_RaidPack.paa"};
	};
	class EZ_NWA_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Warrior Helmet";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NWA\NWA_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_Creamteam_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Creamteam - Double Armband";
		descriptionShort = "Creamteam -PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_armband.paa"};
	};
	class EZ_Creamteam_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Creamteam - Banner";
		descriptionShort = "Creamteam - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_bb.paa"};
	};
	class EZ_Creamteam_Flag: Flag_Base
	{
		scope = 2;
		displayName = "Creamteam - Flag";
		descriptionShort = "Creamteam - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_ff.paa"};
	};
	class EZ_Creamteam_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "Creamteam - MVS Shirt";
		descriptionShort = "Creamteam - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_combatshirt.paa"};
	};
	class EZ_Creamteam_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "Creamteam - MVS Pants";
		descriptionShort = "Creamteam - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_combatpants.paa"};
	};
	class EZ_Creamteam_Balaclava: BalaclavaMask_ColorBase
	{
		scope = 2;
		displayName = "Creamteam - Balaclava";
		descriptionShort = "Creamteam - PlatoonPackage Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_balaclava_co.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_balaclava_co.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_balaclava_co.paa"};
	};
	class EZ_Creamteam_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "Creamteam - MVS Helmet";
		descriptionShort = "Creamteam - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_helmet.paa"};
	};
	class EZ_Creamteam_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "Creamteam - MVS Vest";
		descriptionShort = "Creamteam - PlatoonPackage MVS Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_mvs_vest.paa"};
	};
	class EZ_CreamteamMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Creamteam - MVS Shroud";
		descriptionShort = "Creamteam - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_MVS_Shroud.paa"};
	};
	class EZ_CreamteamJungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "Creamteam - Jungle Boots";
		descriptionShort = "Creamteam - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_jungleboots.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_jungleboots.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_jungleboots.paa"};
	};
	class EZ_CreamteamTacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "Creamteam - Tactical Gloves";
		descriptionShort = "Creamteam - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_tacticalgloves.paa"};
	};
	class EZ_Creamteam_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Creamteam - MVS Heavy Plate Carrier";
		descriptionShort = "Creamteam - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_MVSHeavy_co.paa"};
	};
	class EZ_Creamteam_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Creamteam - Assault Pack";
		descriptionShort = "Endzone Creamteam - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_RaidPack.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_RaidPack.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_RaidPack.paa"};
	};
	class EZ_Creamteam_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Creamteam - MVS Warrior Helmet";
		descriptionShort = "Creamteam - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\Creamteam\Creamteam_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_PTG_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "PTG - Double Armband";
		descriptionShort = "PTG -PlatoonPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_armband.paa"};
	};
	class EZ_PTG_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "PTG - Banner";
		descriptionShort = "PTG - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_bb.paa"};
	};
	class EZ_PTG_Flag: Flag_Base
	{
		scope = 2;
		displayName = "PTG - Flag";
		descriptionShort = "PTG - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_ff.paa"};
	};
	class EZ_PTG_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "PTG - MVS Shirt";
		descriptionShort = "PTG - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_combatshirt.paa"};
	};
	class EZ_PTG_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "PTG - MVS Pants";
		descriptionShort = "PTG - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_combatpants.paa"};
	};
	class EZ_PTG_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "PTG - MVS Balaclava";
		descriptionShort = "PTG - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_balaclava.paa"};
	};
	class EZ_PTG_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "PTG - MVS Helmet";
		descriptionShort = "PTG - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_helmet.paa"};
	};
	class EZ_PTG_Vest: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "PTG - MVS Vest";
		descriptionShort = "PTG - PlatoonPackage MVS Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_mvs_vest.paa"};
	};
	class EZ_PTGMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "PTG - MVS Shroud";
		descriptionShort = "PTG - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_MVS_Shroud.paa"};
	};
	class EZ_PTGJungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "PTG - Jungle Boots";
		descriptionShort = "PTG - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_jungleboots.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_jungleboots.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_jungleboots.paa"};
	};
	class EZ_PTGTacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "PTG - Tactical Gloves";
		descriptionShort = "PTG - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_tacticalgloves.paa"};
	};
	class EZ_PTG_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "PTG - MVS Heavy Plate Carrier";
		descriptionShort = "PTGe - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_MVSHeavy_co.paa"};
	};
	class EZ_PTG_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "PTG - Assault Pack";
		descriptionShort = "PTG - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_RaidPack.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_RaidPack.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_RaidPack.paa"};
	};
	class EZ_PTG_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "PTG - MVS Warrior Helmet";
		descriptionShort = "PTG - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\PTG\PTG_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\PTG\PTG_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_DTOM_Flag: Flag_Base
	{
		scope = 2;
		displayName = "Dont Tread on Minion Flag";
		descriptionShort = "Dont Tread on Minion - CrewPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\DTOM\DTOM_ff.paa"};
	};
	class EZ_DTOM_Armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "Dont Tread on Minion - Armband";
		descriptionShort = "Dont Tread on Minion - CrewPackage Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\DTOM\DTOM_gg.paa","EZ_Clothing\data\patreon_crew\DTOM\DTOM_aa.paa","EZ_Clothing\data\patreon_crew\DTOM\DTOM_aa.paa","EZ_Clothing\data\patreon_crew\DTOM\DTOM_aa.paa","EZ_Clothing\data\patreon_crew\DTOM\DTOM_aa.paa"};
	};
	class EZ_DTOM_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "Dont Tread on Minion - Tactical Shirt";
		descriptionShort = "Dont Tread on Minion - CrewPackage Hiking Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\DTOM\DTOM_shirt.paa","EZ_Clothing\data\patreon_crew\DTOM\DTOM_shirt.paa","EZ_Clothing\data\patreon_crew\DTOM\DTOM_shirt.paa"};
	};
	class EZ_NN_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_armband.paa"};
	};
	class EZ_NN_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_bb.paa"};
	};
	class EZ_NN_Flag: Flag_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_ff.paa"};
	};
	class EZ_NN_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_combatshirt.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_combatshirt.paa"};
	};
	class EZ_NN_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_combatpants.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_combatpants.paa"};
	};
	class EZ_NN_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_balaclava.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_balaclava.paa"};
	};
	class EZ_NN_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_helmet.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_helmet.paa"};
	};
	class EZ_NN_Vest: ModularVestSystem_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_vest.paa","EZ_Clothing\data\patreon_platoon\NN\NN_mvs_vest.paa"};
	};
	class EZ_NN_MVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\NN\NN_MVS_Shroud.paa","EZ_Clothing\data\patreon_platoon\NN\NN_MVS_Shroud.paa"};
	};
	class EZ_NN_JungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_jungleboots.paa","EZ_Clothing\data\patreon_platoon\NN\NN_jungleboots.paa","EZ_Clothing\data\patreon_platoon\NN\NN_jungleboots.paa"};
	};
	class EZ_NN_TacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\NN\NN_tacticalgloves.paa","EZ_Clothing\data\patreon_platoon\NN\NN_tacticalgloves.paa"};
	};
	class EZ_NN_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\NN\NN_MVSHeavy_co.paa","EZ_Clothing\data\patreon_platoon\NN\NN_MVSHeavy_co.paa"};
	};
	class EZ_NN_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_RaidPack.paa","EZ_Clothing\data\patreon_platoon\NN\NN_RaidPack.paa","EZ_Clothing\data\patreon_platoon\NN\NN_RaidPack.paa"};
	};
	class EZ_NN_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		descriptionShort = "Not all those who wander are lost - made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NN\NN_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NN\NN_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NN\NN_WarriorHelmet.paa","EZ_Clothing\data\patreon_platoon\NN\NN_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_PREDS_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "PREDS - Armband";
		descriptionShort = "PREDS - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\PREDS\PREDS_armband.paa"};
	};
	class EZ_PREDS_Jacket: M65Jacket_ColorBase
	{
		scope = 2;
		displayName = "PREDS - Jacket";
		descriptionShort = "PREDS - Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\PREDS\PREDS_jacket.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_jacket.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_jacket.paa"};
	};
	class EZ_PREDS_Pants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "PREDS - Cargo Pants";
		descriptionShort = "PREDS - Cargo Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\PREDS\PREDS_pants.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_pants.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_pants.paa"};
	};
	class EZ_PREDS_Helmet: Mich2001Helmet
	{
		scope = 2;
		displayName = "PREDS - Helmet";
		descriptionShort = "PREDS - Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\PREDS\PREDS_helmet.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_helmet.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_helmet.paa"};
	};
	class EZ_PREDS_Vest: PlateCarrierVest
	{
		scope = 2;
		displayName = "PREDS - Vest";
		descriptionShort = "PREDS - Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\PREDS\PREDS_vest.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_vest.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_vest.paa"};
	};
	class EZ_PREDSMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "PREDS - Shroud";
		descriptionShort = "PREDS - Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_squad\PREDS\PREDS_MVS_Shroud.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_MVS_Shroud.paa","EZ_Clothing\data\patreon_squad\PREDS\PREDS_MVS_Shroud.paa"};
	};
	class EZ_PrigorodkiWP_Flag: Flag_Base
	{
		scope = 2;
		displayName = "PrigorodkiWP Flag";
		descriptionShort = "PrigorodkiWP - CrewPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_ff.paa"};
	};
	class EZ_PrigorodkiWP_Armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "PrigorodkiWP - Armband";
		descriptionShort = "PrigorodkiWP - CrewPackage Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_gg.paa",
									  "EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_aa.paa",
									  "EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_aa.paa",
									  "EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_aa.paa",
									  "EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_aa.paa"};
	};
	class EZ_PrigorodkiWP_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "PrigorodkiWP - Tactical Shirt";
		descriptionShort = "PrigorodkiWP - CrewPackage Hiking Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\PrigorodkiWP\PrigorodkiWP_shirt.paa"};
	};
	class EZ_KolmiokarvaMafia_Flag: Flag_Base
	{
		scope = 2;
		displayName = "KolmiokarvaMafia Flag";
		descriptionShort = "KolmiokarvaMafia - CrewPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_ff.paa"};
	};
	class EZ_KolmiokarvaMafia_Armband: Armband_ColorBase
	{
		scope = 2;
		displayName = "KolmiokarvaMafia - Armband";
		descriptionShort = "KolmiokarvaMafia - CrewPackage Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_gg.paa",
									  "EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_aa.paa",
									  "EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_aa.paa",
									  "EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_aa.paa",
									  "EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_aa.paa"};
	};
	class EZ_KolmiokarvaMafia_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "KolmiokarvaMafia - Tactical Shirt";
		descriptionShort = "KolmiokarvaMafia - CrewPackage Hiking Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\KolmiokarvaMafia\KolmiokarvaMafia_shirt.paa"};
	};
	class EZ_ForestCrow_Armband: EZ_DoubleArmband_ColorBase
	{
		displayName = "ForestCrow - Double Armband";
		descriptionShort = "ForestCrow -PlatoonPackage Double Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_armband.paa"};
	};
	class EZ_ForestCrow_Banner: EZ_Banner_Colorbase
	{
		displayName = "ForestCrow - Banner";
		descriptionShort = "ForestCrow - PlatoonPackage Banner made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_bb.paa"};
	};
	class EZ_ForestCrow_Flag: Flag_Base
	{
		displayName = "ForestCrow - Flag";
		descriptionShort = "ForestCrow - PlatoonPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_ff.paa"};
	};
	class EZ_ForestCrow_TacticalShirt: MVS_CombatShirt_Base
	{
		displayName = "ForestCrow - MVS Shirt";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Shirt made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_combatshirt.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_combatshirt.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_combatshirt.paa"};
	};
	class EZ_ForestCrow_Pants: MVS_CombatPants_Base
	{
		displayName = "ForestCrow - MVS Pants";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Pants made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_combatpants.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_combatpants.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_combatpants.paa"};
	};
	class EZ_ForestCrow_Balaclava: MVS_Balaclava2_Base
	{
		displayName = "ForestCrow - MVS Balaclava";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Balaclava made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_balaclava.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_balaclava.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_balaclava.paa"
		};
	};
	class EZ_ForestCrow_Helmet: MVS_Helmet_Base
	{
		displayName = "ForestCrow - MVS Helmet";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Helmet made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_helmet.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_helmet.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_helmet.paa"
		};
	};
	class EZ_ForestCrow_Vest: ModularVestSystem_Base
	{
		displayName = "ForestCrow - MVS Vest";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Vest made by Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_vest.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_vest.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_vest.paa"};
	};
	class EZ_ForestCrowMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Shroud";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_MVS_Shroud.paa"};
	};
	class EZ_ForestCrowJungleBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "ForestCrow - Jungle Boots";
		descriptionShort = "ForestCrow - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa"
		};
	};
	class EZ_ForestCrowTacticalGloves: TacticalGloves_ColorBase
	{
		displayName = "ForestCrow - Tactical Gloves";
		descriptionShort = "ForestCrow - PlatoonPackage Tactical Gloves made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_tacticalgloves.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_tacticalgloves.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_tacticalgloves.paa"
		};
	};
	class EZ_ForestCrow_MVS_Combat_Vest_Heavy: ModularVestSystem_Heavy
	{
		displayName = "ForestCrow - MVS Heavy Plate Carrier";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_MVSHeavy_co.paa"};
	};
	class EZ_ForestCrow_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "ForestCrow - Assault Pack";
		descriptionShort = "Endzone NWA - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_RaidPack.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_RaidPack.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_RaidPack.paa"
			
		};
	};
	class EZ_ForestCrow_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Warrior Helmet";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_Mandalorian_Helmet.paa",
			"EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"
		};
	};
	class EZ_Yellowjackets_Flag: Flag_Base
	{
		displayName = "Yellowjackets Flag";
		descriptionShort = "Yellowjackets - CrewPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_ff.paa"};
	};
	class EZ_Yellowjackets_Armband: Armband_ColorBase
	{
		displayName = "Yellowjackets - Armband";
		descriptionShort = "Yellowjackets - CrewPackage Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_gg.paa",
									  "EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_aa.paa",
									  "EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_aa.paa",
									  "EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_aa.paa",
									  "EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_aa.paa"};
	};
	class EZ_Yellowjackets_TacticalShirt: TacticalShirt_ColorBase
	{
		displayName = "Yellowjackets - Tactical Shirt";
		descriptionShort = "Yellowjackets - CrewPackage Hiking Jacket made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\Yellowjackets\Yellowjackets_shirt.paa"};
	};
	class EZ_DieRamschhändler_Flag: Flag_Base
	{
		displayName = "Die Ramschhändler Flag";
		descriptionShort = "Die Ramschhändler - CrewPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_ff.paa"};
	};
	class EZ_DieRamschhändler_Armband: Armband_ColorBase
	{
		displayName = "Die Ramschhändler - Armband";
		descriptionShort = "Die Ramschhändler - CrewPackage Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_gg.paa",
									  "EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_aa.paa",
									  "EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_aa.paa",
									  "EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_aa.paa",
									  "EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_aa.paa"};
	};
	class EZ_DieRamschhändler_TacticalShirt: TacticalShirt_ColorBase
	{
		displayName = "Die Ramschhändler - Tactical Shirt";
		descriptionShort = "Die Ramschhändler - CrewPackage Hiking Jacket made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_shirt.paa",
									  "EZ_Clothing\data\patreon_crew\DieRamschhändler\DieRamschhändler_shirt.paa"};
	};
};
