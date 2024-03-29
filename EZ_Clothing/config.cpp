class CfgPatches
{
	class EZ_Clothing
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Pants","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Data","DZ_Gear_Containers","EZ_Medal","EZ_BannerStand","ModularVestSystem","Mass_Textures","DZ_Gear_Camping","EZ_BannerStand","EZ_Armbands","EZ_Other_Magazine"};
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
	class TacticalGloves_ColorBase;
	class JungleBoots_ColorBase;
	class Sneakers_ColorBase;
	class Barrel_ColorBase;
	class BarrelHoles_ColorBase;
	class EZ_Medal;
	class HikingBoots_ColorBase;
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
	class WorkingGloves_ColorBase;
	class HuntingJacket_ColorBase;
	class Shirt_ColorBase;
	class Jeans_ColorBase;
	class SlacksPants_ColorBase;
	class DenimJacket;
	class PrisonUniformJacket;
	class PrisonerCap;
	class PrisonUniformPants;
	class TrackSuitJacket_ColorBase;
	class TrackSuitPants_ColorBase;
	class MVS_CombatPants_Base;
	class MVS_Shroud_Base;
	class Modular_Patch_Base;
	class EZ_Magazine_Base;
	class EZ_Bandit_Hood_Base: Clothing
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
	class EZ_Admin_Hoodie: Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Endzone Hoodie";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa","EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa","EZ_Clothing\data\player\Endzone\EZ_Hoodie.paa"};
	};
	class EZ_Bandit_Hood_Black: EZ_Bandit_Hood_Base
	{
		scope = 2;
		displayName = "Scout Hood";
		heatIsolation = 0.2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\Hood\data\hood_blk_co.paa"};
	};
	class EZ_Bandit_FaceMask_ColorBase: Clothing
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
	class EZ_Bandit_FaceMask_Black: EZ_Bandit_FaceMask_ColorBase
	{
		scope = 2;
		displayName = "Scout Face Mask";
		heatIsolation = 0.01;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\facemask\data\facemask_black_co.paa"};
	};
	class EZ_bandit_GorkaEJacket_flora_1: GorkaEJacket_ColorBase
	{
		scope = 2;
		displayName = "Scout Jacket";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora1_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora1_co.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper_flora1_co.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_upper.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_upper.rvmat"};
	};
	class EZ_Bandit_GorkaPants: GorkaPants_ColorBase
	{
		scope = 2;
		displayName = "Scout Pants";
		heatIsolation = 0.80000001;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora1_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora1_CO.paa","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants_flora1_CO.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\gorka\data\gorka_pants.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants.rvmat","EZ_Clothing\data\player\Scout\gorka\data\gorka_pants.rvmat"};
	};
	class EZ_Bandit_Raincoat_Black: Raincoat_ColorBase
	{
		scope = 2;
		displayName = "Scout Raincoat";
		heatIsolation = 0.1;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Scout\raincoat\data\raincoat_g_black_co.paa","EZ_Clothing\data\player\Scout\raincoat\data\raincoat_black_co.paa","EZ_Clothing\data\player\Scout\raincoat\data\raincoat_black_co.paa"};
		hiddenSelectionsMaterials[] = {"EZ_Clothing\data\player\Scout\raincoat\data\raincoat_g.rvmat","EZ_Clothing\data\player\Scout\raincoat\data\raincoat.rvmat","EZ_Clothing\data\player\Scout\raincoat\data\raincoat.rvmat"};
	};
	
	
	class EZ_HikingBoots_Black: HikingBoots_ColorBase
	{
		scope=2;
		displayName = "Scout Boots";
		heatIsolation = 0.64999998;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\shoes\data\hikingBoots_black_co.paa",
			"\dz\characters\shoes\data\hikingBoots_black_co.paa",
			"\dz\characters\shoes\data\hikingBoots_black_co.paa"
		};
	};
	class EZ_WorkingGloves_Black: WorkingGloves_ColorBase
	{
		scope=2;
		displayName = "Scout Gloves";
		heatIsolation = 0.01;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa",
			"DZ\characters\gloves\data\WorkingGloves_black_co.paa"
		};
	};
	class Flag_at_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Austria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_at_co.paa"};
		color = "at_EZ";
	};
	class Flag_au_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Australia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_au_co.paa"};
		color = "au_EZ";
	};
	class Flag_be_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Belgium";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_be_co.paa"};
		color = "be_EZ";
	};
	class Flag_br_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Brazil";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_br_co.paa"};
		color = "br_EZ";
	};
	class Flag_ca_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Canada";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa"};
		color = "ca_EZ";
	};
	class Flag_cz_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Czech Republic";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa"};
		color = "cz_EZ";
	};
	class Flag_de_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Germany";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_de_co.paa"};
		color = "de_EZ";
	};
	class Flag_dk_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Denmark";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa"};
		color = "dk_EZ";
	};
	class Flag_dz_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Algeria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa"};
		color = "dz_EZ";
	};
	class Flag_es_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Spain";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_es_co.paa"};
		color = "es_EZ";
	};
	class Flag_fi_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Finland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa"};
		color = "fi_EZ";
	};
	class Flag_fr_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - France";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa"};
		color = "fr_EZ";
	};
	class Flag_gr_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Greece";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa"};
		color = "gr_EZ";
	};
	class Flag_hr_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Croatia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa"};
		color = "hr_EZ";
	};
	class Flag_hu_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Hungary";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa"};
		color = "hu_EZ";
	};
	class Flag_ie_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Ireland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa"};
		color = "ie_EZ";
	};
	class Flag_il_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Israel";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_il_co.paa"};
		color = "il_EZ";
	};
	class Flag_it_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Italy";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_it_co.paa"};
		color = "it_EZ";
	};
	class Flag_kw_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Kuwait";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa"};
		color = "kw_EZ";
	};
	class Flag_lt_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Lithuania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa"};
		color = "lt_EZ";
	};
	class Flag_lv_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Latvia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa"};
		color = "lv_EZ";
	};
	class Flag_md_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Moldova";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_md_co.paa"};
		color = "md_EZ";
	};
	class Flag_mt_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Malta";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa"};
		color = "mt_EZ";
	};
	class Flag_nl_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Netherlands";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa"};
		color = "nl_EZ";
	};
	class Flag_no_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Norway";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_no_co.paa"};
		color = "no_EZ";
	};
	class Flag_nz_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - New Zealand";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa"};
		color = "nz_EZ";
	};
	class Flag_ph_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Philippines";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa"};
		color = "ph_EZ";
	};
	class Flag_pl_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Poland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa"};
		color = "pl_EZ";
	};
	class Flag_pt_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Portugal";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa"};
		color = "pt_EZ";
	};
	class Flag_ro_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Romania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa"};
		color = "ro_EZ";
	};
	class Flag_rs_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Serbia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa"};
		color = "rs_EZ";
	};
	class Flag_ru_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Russia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa"};
		color = "ru_EZ";
	};
	class Flag_se_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Sweden";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_se_co.paa"};
		color = "se_EZ";
	};
	class Flag_tr_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Turkey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa"};
		color = "tr_EZ";
	};
	class Flag_uae_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - United Arab Emirates";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa"};
		color = "uae_EZ";
	};
	class Flag_uk_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - United Kingdom";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa"};
		color = "uk_EZ";
	};
	class Flag_us_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - United States of America";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_us_co.paa"};
		color = "us_EZ";
	};
	class Flag_vn_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Vietnam";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa"};
		color = "vn_EZ";
	};
	class Flag_yo_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Yugoslavia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa"};
		color = "yo_EZ";
	};
	class Flag_slv_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Slovenia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_slv.paa"};
		color = "slv_EZ";
	};
	class Flag_ukr_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Flag - Ukrania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ukr.paa"};
		color = "ukr_EZ";
	};
	class Armband_ukr_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Ukrania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa","EZ_Clothing\data\player\Country Flags\Flag_ukr.paa"};
		color = "ukr_EZ";
	};
	class Armband_at_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Austria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa","EZ_Clothing\data\player\Country Flags\Flag_at_co.paa"};
		color = "at_EZ";
	};
	class Armband_slv_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Slovenia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa","EZ_Clothing\data\player\Country Flags\Flag_slv.paa"};
		color = "slv_EZ";
	};
	class Armband_au_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Australia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa","EZ_Clothing\data\player\Country Flags\Flag_au_co.paa"};
		color = "au_EZ";
	};
	class Armband_be_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Belgium";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa","EZ_Clothing\data\player\Country Flags\Flag_be_co.paa"};
		color = "be_EZ";
	};
	class Armband_br_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Brazil";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa","EZ_Clothing\data\player\Country Flags\Flag_br_co.paa"};
		color = "br_EZ";
	};
	class Armband_ca_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Canada";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ca_co.paa"};
		color = "ca_EZ";
	};
	class Armband_cz_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Czech Republic";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_cz_co.paa"};
	};
	class Armband_de_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Germany";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa","EZ_Clothing\data\player\Country Flags\Flag_de_co.paa"};
		color = "de_EZ";
	};
	class Armband_dk_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Denmark";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dk_co.paa"};
		color = "dk_EZ";
	};
	class Armband_dz_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Algeria";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_dz_co.paa"};
		color = "dz_EZ";
	};
	class Armband_es_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Spain";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa","EZ_Clothing\data\player\Country Flags\Flag_es_co.paa"};
		color = "es_EZ";
	};
	class Armband_fi_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Finland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fi_co.paa"};
		color = "fi_EZ";
	};
	class Armband_fr_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - France";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_fr_co.paa"};
		color = "fr_EZ";
	};
	class Armband_gr_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Greece";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_gr_co.paa"};
		color = "gr_EZ";
	};
	class Armband_hr_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Croatia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hr_co.paa"};
		color = "hr_EZ";
	};
	class Armband_hu_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Hungary";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa","EZ_Clothing\data\player\Country Flags\Flag_hu_co.paa"};
		color = "hu_EZ";
	};
	class Armband_ie_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Ireland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ie_co.paa"};
		color = "ie_EZ";
	};
	class Armband_il_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Israel";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa","EZ_Clothing\data\player\Country Flags\Flag_il_co.paa"};
		color = "il_EZ";
	};
	class Armband_it_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Italy";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa","EZ_Clothing\data\player\Country Flags\Flag_it_co.paa"};
		color = "it_EZ";
	};
	class Armband_kw_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Kuwait";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa","EZ_Clothing\data\player\Country Flags\Flag_kw_co.paa"};
		color = "kw_EZ";
	};
	class Armband_lt_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Lithuania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lt_co.paa"};
		color = "lt_EZ";
	};
	class Armband_lv_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Latvia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa","EZ_Clothing\data\player\Country Flags\Flag_lv_co.paa"};
		color = "lv_EZ";
	};
	class Armband_md_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Moldova";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa","EZ_Clothing\data\player\Country Flags\Flag_md_co.paa"};
		color = "md_EZ";
	};
	class Armband_mt_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Malta";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_mt_co.paa"};
		color = "mt_EZ";
	};
	class Armband_nl_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Netherlands";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nl_co.paa"};
		color = "nl_EZ";
	};
	class Armband_no_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Norway";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa","EZ_Clothing\data\player\Country Flags\Flag_no_co.paa"};
		color = "no_EZ";
	};
	class Armband_nz_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - New Zealand";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa","EZ_Clothing\data\player\Country Flags\Flag_nz_co.paa"};
		color = "nz_EZ";
	};
	class Armband_ph_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Philippines";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ph_co.paa"};
		color = "ph_EZ";
	};
	class Armband_pl_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Poland";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pl_co.paa"};
		color = "pl_EZ";
	};
	class Armband_pt_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Portugal";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa","EZ_Clothing\data\player\Country Flags\Flag_pt_co.paa"};
		color = "pt_EZ";
	};
	class Armband_ro_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Romania";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ro_co.paa"};
		color = "ro_EZ";
	};
	class Armband_rs_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Serbia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa","EZ_Clothing\data\player\Country Flags\Flag_rs_co.paa"};
		color = "rs_EZ";
	};
	class Armband_ru_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Russia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa","EZ_Clothing\data\player\Country Flags\Flag_ru_co.paa"};
		color = "ru_EZ";
	};
	class Armband_se_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Sweden";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa","EZ_Clothing\data\player\Country Flags\Flag_se_co.paa"};
		color = "se_EZ";
	};
	class Armband_tr_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Turkey";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa","EZ_Clothing\data\player\Country Flags\Flag_tr_co.paa"};
		color = "tr_EZ";
	};
	class Armband_uae_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - United Arab Emirates";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uae_co.paa"};
		color = "uae_EZ";
	};
	class Armband_uk_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - United Kingdom";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa","EZ_Clothing\data\player\Country Flags\Flag_uk_co.paa"};
		color = "uk_EZ";
	};
	class Armband_us_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - United States of America";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa","EZ_Clothing\data\player\Country Flags\Flag_us_co.paa"};
		color = "us_EZ";
	};
	class Armband_vn_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Vietnam";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa","EZ_Clothing\data\player\Country Flags\Flag_vn_co.paa"};
		color = "vn_EZ";
	};
	class Armband_yo_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Armband - Yugoslavia";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa","EZ_Clothing\data\player\Country Flags\Flag_yo_co.paa"};
		color = "yo_EZ";
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
	class EZ_TShirt_soc: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_soc.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_soc.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_soc.paa"};
	};
	class EZ_TShirt_broke: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_broke.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_broke.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_broke.paa"};
	};
	class EZ_TShirt_purge: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_purge.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_purge.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_purge.paa"};
	};
	class EZ_TShirt_blood: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_blood.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_blood.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_blood.paa"};
	};
	class EZ_TShirt_noot: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_noot.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_noot.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_noot.paa"};
	};
	class EZ_TShirt_ak47: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_ak47.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_ak47.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_ak47.paa"};
	};
	class EZ_TShirt_bobs: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_bobs.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_bobs.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_bobs.paa"};
	};
	class EZ_TShirt_engineer: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_engineer.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_engineer.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_engineer.paa"};
	};
	class EZ_TShirt_nolivesmatter: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_nolivesmatter.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_nolivesmatter.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_nolivesmatter.paa"};
	};
	class EZ_TShirt_hungry: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Property of EndZone";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Tshirt\BL_TShirt_hungry.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_hungry.paa","EZ_Clothing\data\player\Tshirt\BL_TShirt_hungry.paa"};
	};
	class EZ_Banner_Stop: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Banner - STOP";
		itemSize[] = {15,15};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Banners\Banner_stop_co.paa","EZ_Clothing\data\player\Banners\Banner_stop_co.paa","EZ_Clothing\data\player\Banners\Banner_stop_co.paa","EZ_Clothing\data\player\Banners\Banner_stop_co.paa"};
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
	class Barrel_Ammo_EZ: Barrel_ColorBase
	{
		scope = 2;
		color = "Ammo_EZ";
		displayName = "Barrel - Ammo";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_ammo.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_ammo.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_ammo.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Ammo_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		color = "Ammo_EZ";
		displayName = "Fire Barrel";
		hiddenSelectionsTextures[] = {"dz\gear\cooking\data\stoneground_co.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_ammo.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_ammo.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900;
					transferToAttachmentsCoef = 0.5;
					RefTexsMats[] = {"dz\gear\cooking\data\barrel_green_holes.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.7,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Tools_EZ: Barrel_ColorBase
	{
		scope = 2;
		color = "Tools_EZ";
		displayName = "Barrel - Tools";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_tools.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_tools.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_tools.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Tools_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		color = "Tools_EZ";
		displayName = "Fire Barrel";
		hiddenSelectionsTextures[] = {"dz\gear\cooking\data\stoneground_co.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_tools.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_tools.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900;
					transferToAttachmentsCoef = 0.5;
					RefTexsMats[] = {"dz\gear\cooking\data\barrel_green_holes.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.7,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Meds_EZ: Barrel_ColorBase
	{
		scope = 2;
		color = "Meds_EZ";
		displayName = "Barrel - Meds";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_medicine.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_medicine.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_medicine.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Meds_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		color = "Meds_EZ";
		displayName = "Fire Barrel";
		hiddenSelectionsTextures[] = {"dz\gear\cooking\data\stoneground_co.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_medicine.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_medicine.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900;
					transferToAttachmentsCoef = 0.5;
					RefTexsMats[] = {"dz\gear\cooking\data\barrel_green_holes.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.7,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Mags_EZ: Barrel_ColorBase
	{
		scope = 2;
		color = "Mags_EZ";
		displayName = "Barrel - Mags";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_mags.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_mags.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_mags.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Mags_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		color = "Mags_EZ";
		displayName = "Fire Barrel";
		hiddenSelectionsTextures[] = {"dz\gear\cooking\data\stoneground_co.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_mags.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_mags.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900;
					transferToAttachmentsCoef = 0.5;
					RefTexsMats[] = {"dz\gear\cooking\data\barrel_green_holes.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.7,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Food_EZ: Barrel_ColorBase
	{
		scope = 2;
		color = "Food_EZ";
		displayName = "Barrel - Food";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_food.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_food.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_food.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Food_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		color = "Food_EZ";
		displayName = "Fire Barrel";
		hiddenSelectionsTextures[] = {"dz\gear\cooking\data\stoneground_co.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_food.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_food.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900;
					transferToAttachmentsCoef = 0.5;
					RefTexsMats[] = {"dz\gear\cooking\data\barrel_green_holes.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.7,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_C4_EZ: Barrel_ColorBase
	{
		scope = 2;
		color = "C4_EZ";
		displayName = "Barrel - Explosives";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Barrels\EZ_barrel_explosions.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_explosions.paa","EZ_Clothing\data\player\Barrels\EZ_barrel_explosions.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					RefTexsMats[] = {"dz\gear\containers\data\barrel_green.rvmat"};
					healthLevels[] = {{1.0,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.7,{"dz\gear\containers\data\barrel_green.rvmat"}},{0.5,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.3,{"dz\gear\containers\data\barrel_green_damage.rvmat"}},{0.0,{"dz\gear\containers\data\barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_C4_EZ: BarrelHoles_ColorBase
	{
		scope = 2;
		color = "C4_EZ";
		displayName = "Fire Barrel";
		hiddenSelectionsTextures[] = {"dz\gear\cooking\data\stoneground_co.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_explosions.paa","EZ_Clothing\data\player\Barrels\EZ_hollbarrel_explosions.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 900;
					transferToAttachmentsCoef = 0.5;
					RefTexsMats[] = {"dz\gear\cooking\data\barrel_green_holes.rvmat"};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.7,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
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
	class EZ_Jeans_Blue_Set: Jeans_ColorBase
	{
		scope = 2;
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
		scope = 2;
		descriptionShort = "Endzone - Gloves Mechanix - Extended. Made by Kokaskale.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Gloves\tacticalgloves_black_mechanix.paa","EZ_Clothing\data\player\Gloves\tacticalgloves_black_mechanix.paa","EZ_Clothing\data\player\Gloves\tacticalgloves_black_mechanix.paa"};
	};
	class EZ_Brown_Vest: PlateCarrierVest
	{
		displayName = "Endzone - Vest";
		descriptionShort = "Endzone - Brown Tactical Vest - Extended. Made by Kokaskale.";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa","EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa","EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa"};
	};
	class EZ_Brown_Pouches: PlateCarrierPouches
	{
		displayName = "Endzone - Pouches";
		descriptionShort = "Endzone - Brown Tactical Vest - Extended. Made by Kokaskale.";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa","EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa","EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa"};
	};
	class EZ_Brown_Holster: PlateCarrierHolster
	{
		displayName = "Endzone - Holster";
		descriptionShort = "Endzone - Brown Tactical Vest - Extended. Made by Kokaskale.";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa","EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa","EZ_Clothing\data\player\Vest\vanilla_tactical_vest_brown.paa"};
	};
	class EZ_Admin_Plate: PlateCarrierVest
	{
		scope = 2;
		displayName = "Endzone Staff Plate";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa"};
	};
	class EZ_Admin_Holster: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Endzone Staff Holster";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa"};
	};
	class EZ_Admin_Pouches: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Endzone Staff Pouches";
		itemsCargoSize[] = {10,10};
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_ballisticvest_co.paa"};
	};
	class EZ_Admin_Helmet: Mich2001Helmet
	{
		scope = 2;
		displayName = "Endzone Staff Helmet";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_mich2001_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_mich2001_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_mich2001_co.paa"};
	};
	class EZ_Admin_M65: M65Jacket_ColorBase
	{
		scope = 2;
		displayName = "Endzone Staff Jacket";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_m65_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_m65_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_m65_co.paa"};
	};
	class EZ_Admin_Pants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Endzone Staff Cargo Pants";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EndZone_cargopants_g_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_cargopants_co.paa","EZ_Clothing\data\staff\Endzone\EndZone_cargopants_co.paa"};
	};
	class EZ_Admin_Tshirt: TShirt_ColorBase
	{
		scope = 2;
		displayName = "Endzone Staff T-Shirt";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\endzone_tshirt.paa","EZ_Clothing\data\staff\Endzone\endzone_tshirt.paa","EZ_Clothing\data\staff\Endzone\endzone_tshirt.paa"};
	};
	class EZ_Admin_Progger: Hoodie_ColorBase
	{
		scope = 2;
		displayName = "Endzone Staff (Progger)";
		itemsCargoSize[] = {10,10};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Progger\EZ_Hoodie_m_progger.paa","EZ_Clothing\data\staff\Progger\EZ_Hoodie_m_progger.paa","EZ_Clothing\data\staff\Progger\EZ_Hoodie_m_progger.paa"};
	};
	class EZ_Boots_GG: Inventory_Base
	{
		scope = 2;
		displayName = "Clothing";
		descriptionShort = "Clothing";
		model = "EZ_Clothing\data\staff\InvisibleClothes\invisible.p3d";
		inventorySlot = "Feet";
		itemSize[] = {2,2};
		weight = 100;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		varWetMax = 0.49;
		heatIsolation = 1;
	};
	class EZ_Pants_GG: HunterPants_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa"};
	};
	class EZ_Top_GG: GorkaEJacket_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa"};
	};
	class EZ_Arms_GG: Inventory_Base
	{
		scope = 2;
		displayName = "Clothing";
		descriptionShort = "Clothing";
		model = "EZ_Clothing\data\staff\InvisibleClothes\invisible.p3d";
		inventorySlot = "Gloves";
		itemSize[] = {2,2};
	};
	class EZ_Head_GG: Inventory_Base
	{
		scope = 2;
		displayName = "Clothing";
		descriptionShort = "Clothing";
		model = "EZ_Clothing\data\staff\InvisibleClothes\invisible.p3d";
		inventorySlot = "Head";
		itemSize[] = {2,2};
	};
	class EZ_Backpack_GG: AliceBag_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,0.3,ca)","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa","EZ_Clothing\data\staff\InvisibleClothes\Invisible_ca.paa"};
	};
	class EZ_Eviction_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Banner Of Shame";
		descriptionShort = "Banner Of Shame - For Further Information create a ticket!";
		itemSize[] = {15,15};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\Eviction_b.paa"};
	};
	class Armband_ez_EZ: Armband_ColorBase
	{
		scope = 2;
		displayName = "Endzone Armband";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa","EZ_Clothing\data\staff\Endzone\Endzone_f.paa"};
		color = "ez_EZ";
	};
	class EZ_Event_Vest: ReflexVest
	{
		scope = 2;
		displayName = "Event Staff Vest";
		descriptionShort = "Custom Endzone Staff Event Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EZ_Event_Vest.paa","EZ_Clothing\data\staff\Endzone\EZ_Event_Vest.paa","EZ_Clothing\data\staff\Endzone\EZ_Event_Vest.paa"};
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
	class MVS_Admin_Patch: Modular_Patch_Base
	{
		scope = 2;
		displayName = "ENDZONE Patch - ADMIN";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\EZ_admin_mvs_patch.paa","EZ_Clothing\data\staff\Kokaskale\EZ_kokaskale_Armband_co.paa"};
	};
	class MVS_Donov_Patch: Modular_Patch_Base
	{
		scope = 2;
		displayName = "ENDZONE Patch - ADMIN";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Kokaskale\EZ_admin_mvs_patch.paa","EZ_Clothing\data\staff\Kokaskale\EZ_donov_Armband_co.paa"};
	};
	class EZ_Donov_Plate: PlateCarrierVest
	{
		scope = 2;
		displayName = "Endzone Staff Plate";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\EZ_donov_plate_co.paa","EZ_Clothing\data\staff\Endzone\EZ_donov_plate_co.paa","EZ_Clothing\data\staff\Endzone\EZ_donov_plate_co.paa"};
	};
	class Flag_Endzone_EZ: Flag_Base
	{
		scope = 2;
		displayName = "ENDZONE Flag";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Endzone\Endzone_f.paa"};
		color = "ez_EZ";
	};
		class EZ_Magazine_1: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 1";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_1.paa"};
	};
	class EZ_Magazine_2: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 2";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_2.paa"};
	};
	class EZ_Magazine_3: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 3";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_3.paa"};
	};
	class EZ_Magazine_4: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 4";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_4.paa"};
	};
	class EZ_Magazine_5: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 5";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_5.paa"};
	};
	class EZ_Magazine_6: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 6";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_6.paa"};
	};
	class EZ_Magazine_7: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 7";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_7.paa"};
	};
	class EZ_Magazine_8: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 8";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_8.paa"};
	};
	class EZ_Magazine_9: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 9";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_9.paa"};
	};
	class EZ_Magazine_10: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 10";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_10.paa"};
	};
	class EZ_Magazine_11: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 11";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_11.paa"};
	};
	class EZ_Magazine_12: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 12";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_12.paa"};
	};
	class EZ_Magazine_13: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 13";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_13.paa"};
	};
	class EZ_Magazine_14: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 14";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_14.paa"};
	};
	class EZ_Magazine_15: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 15";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_15.paa"};
	};
	class EZ_Magazine_16: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 16";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_16.paa"};
	};
	class EZ_Magazine_17: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 17";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_17.paa"};
	};
	class EZ_Magazine_18: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 18";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_18.paa"};
	};
	class EZ_Magazine_19: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 19";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_19.paa"};
	};
	class EZ_Magazine_20: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 20";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_20.paa"};
	};
	class EZ_Magazine_21: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 21";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_21.paa"};
	};
	class EZ_Magazine_22: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 22";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_22.paa"};
	};
	class EZ_Magazine_23: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 23";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_23.paa"};
	};
	class EZ_Magazine_24: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 24";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_24.paa"};
	};
	class EZ_Magazine_25: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 25";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_25.paa"};
	};
	class EZ_Magazine_26: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 26";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_26.paa"};
	};
	class EZ_Magazine_27: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 27";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_27.paa"};
	};
	class EZ_Magazine_28: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 28";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_28.paa"};
	};
	class EZ_Magazine_29: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 29";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_29.paa"};
	};
	class EZ_Magazine_30: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 30";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_30.paa"};
	};
	class EZ_Magazine_31: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 31";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_31.paa"};
	};
	class EZ_Magazine_32: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 32";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_32.paa"};
	};
	class EZ_Magazine_33: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 33";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_33.paa"};
	};
	class EZ_Magazine_34: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 34";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_34.paa"};
	};
	class EZ_Magazine_35: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 35";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_35.paa"};
	};
	class EZ_Magazine_36: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 36";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_36.paa"};
	};
	class EZ_Magazine_37: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 37";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_37.paa"};
	};
	class EZ_Magazine_38: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 38";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_38.paa"};
	};
	class EZ_Magazine_39: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 39";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_39.paa"};
	};
	class EZ_Magazine_40: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 40";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_40.paa"};
	};
	class EZ_Magazine_41: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 41";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_41.paa"};
	};
	class EZ_Magazine_42: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 42";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_42.paa"};
	};
	class EZ_Magazine_43: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 43";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_43.paa"};
	};
	class EZ_Magazine_44: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 44";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_44.paa"};
	};
	class EZ_Magazine_45: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 45";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_45.paa"};
	};
	class EZ_Magazine_46: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 46";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_46.paa"};
	};
	class EZ_Magazine_47: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 47";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_47.paa"};
	};
	class EZ_Magazine_48: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 48";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_48.paa"};
	};
	class EZ_Magazine_49: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 49";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_49.paa"};
	};
	class EZ_Magazine_50: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Nr. 50";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\PC_Gamer_Issue_50.paa"};
	};
		class EZ_Magazine_51: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Batman 2001";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\batman.paa"};
	};
	class EZ_Magazine_52: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Command & Conquer Red Alert 1996";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\c&cRedalert.paa"};
	};
	class EZ_Magazine_53: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Comic Book Captain America";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\captainamerika.paa"};
	};
	class EZ_Magazine_54: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "National Geographic War Face";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\childwar.paa"};
	};
	class EZ_Magazine_55: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Counter-Strike Global Offensive";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\counterstrike.paa"};
	};
	class EZ_Magazine_56: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Counter-Strike Condition Zero";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\counterstrike2.paa"};
	};
	class EZ_Magazine_57: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Cyberpunk";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\cyberpunk.paa"};
	};
	class EZ_Magazine_58: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Dayz 2014";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\dayz.paa"};
	};
	class EZ_Magazine_59: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "People Diana, Princess of Wales 1997";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\diana.paa"};
	};
	class EZ_Magazine_60: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine DOOM II 1994";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\doomII.paa"};
	};
	class EZ_Magazine_61: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Driver 1999";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\driver.paa"};
	};
	class EZ_Magazine_62: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Formula 1 Grand Prix 2 1996";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\f1grandprix2.paa"};
	};
	class EZ_Magazine_63: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Final Fantasty VII 1998";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\finalfantastyVII.paa"};
	};
	class EZ_Magazine_64: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Grand Theft Auto Sad Andreas 2005";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\gtaSanandreas.paa"};
	};
	class EZ_Magazine_65: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Comic Book Joker";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\joker.paa"};
	};
	class EZ_Magazine_66: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "TIME Martin Luther King JR.";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\lutherking.paa"};
	};
	class EZ_Magazine_67: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Medal Of Honour Pacific Assault 2003";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\medalofhonor.paa"};
	};
	class EZ_Magazine_68: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Metro Exodus";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\metroexodus.paa"};
	};
	class EZ_Magazine_69: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "GQ The Athete Of The Century - Muhammad Ali";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\mohamedali.paa"};
	};
	class EZ_Magazine_70: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "LIFE To The Moon And Back";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\moon.paa"};
	};
	class EZ_Magazine_71: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Playboy 1973";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\playboy1973.paa"};
	};
	class EZ_Magazine_72: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Playboy 1978";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\playboy1978.paa"};
	};
	class EZ_Magazine_73: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Playboy 1979";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\playboy1979.paa"};
	};
	class EZ_Magazine_74: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Playboy Baywatch 1998";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\playboybaywatch.paa"};
	};
	class EZ_Magazine_75: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Playboy Pamela Anderson 1992";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\playboypamela.paa"};
	};
	class EZ_Magazine_76: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Comic Book Spiderman";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\spiderman.paa"};
	};
	class EZ_Magazine_77: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine S.T.A.L.K.E.R. Back To Chernobyl 2008";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\stalker.paa"};
	};
	class EZ_Magazine_78: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "Comic Book Superman";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\superman.paa"};
	};
	class EZ_Magazine_79: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Theme Park 1994";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\thempark.paa"};
	};
	class EZ_Magazine_80: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Tomb Raider III";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\tombraiderIII.paa"};
	};
	class EZ_Magazine_81: EZ_Magazine_Base
	{
		scope = 2;
		displayName = "PC Magazine Word Cup 98 1998";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\player\Mags\wordcup98.paa"};
	};
};
