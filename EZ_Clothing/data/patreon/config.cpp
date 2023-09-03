class CfgPatches
{
	class EZ_Patreon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters_Pants","DZ_Characters_Shoes","DZ_Gear_Camping","DZ_Characters_Gloves","DZ_Characters_Tops","DZ_Characters_Vests","Mass_Textures","ModularVestSystem","EZ_Armbands","EZ_BannerStand","EZ_MGS_SOF"};
	};
};
class CfgVehicles
{
	class EZ_Banner_Colorbase;
	class Flag_Base;
	class MVS_Helmet_Base;
	class MVS_Shroud_Base;
	class MVS_Balaclava_Base;
	class JungleBoots_ColorBase;
	class ModularVestSystem_Heavy;
	class MVS_WarriorHelmet_Base;
	class EZ_SOF_Jacket_ColorBase;
	class EZ_SOF_Pants_ColorBase;
	class EZ_SOF_Balaclava_ColorBase;
	class EZ_SOF_Gloves_ColorBase;
	class EZ_SOF_Platecarrier_ColorBase;
	class EZ_SOF_Backpack_ColorBase;
	class EZ_DoubleArmband_ColorBase;
	class TacticalShirt_ColorBase;
	class Mich2001Helmet;
	class MassHeavyPlateVest_ColorBase;
	class PlateCarrierVest;
	class SurgicalGloves_ColorBase;
	class CargoPants_ColorBase;
	class MVS_Balaclava2_Base;
	class GorkaEJacket_ColorBase;
	class BDUPants;
	class MVS_Sling_Pack_Base;
	class ModularVestSystem_Base;
	class TacticalGloves_ColorBase;
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
	class EZ_Marran_Flag: Flag_Base
	{
		scope = 2;
		displayName = "Marran Flag";
		descriptionShort = "Marran - SquadPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_ff.paa"};
	};
	class EZ_Marran_Armband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Marran - Armband";
		descriptionShort = "Marran - SquadPackage armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_armband.paa"};
	};
	class EZ_Marran_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "Marran - Banner";
		descriptionShort = "Marran - SquadPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_bb.paa"};
	};
	class EZ_Marran_TacticalShirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "Marran - Tactical Shirt";
		descriptionShort = "Marran - SquadPackage Tactical Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_shirt.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_shirt.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_shirt.paa"};
	};
	class EZ_Marran_CargoPants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Marran - Cargo Pants";
		descriptionShort = "Marran - SquadPackage Cargo Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_pants.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_pants.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_pants.paa"};
	};
	class EZ_Marran_MVSBalaclavaWraith: MVS_Balaclava_Base
	{
		scope = 2;
		displayName = "Marran - Balaclava Wraith";
		descriptionShort = "Marran - SquadPackage Balaclava Wraith made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_MVS_Wraith.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_MVS_Wraith.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_MVS_Wraith.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_MVS_Balaclava_mask_co.paa"};
	};
	class EZ_Marran_SurgicalGloves: SurgicalGloves_ColorBase
	{
		scope = 2;
		displayName = "Marran - Surgical Gloves";
		descriptionShort = "Marran - SquadPackage Surgical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_gloves.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_gloves.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_gloves.paa"};
	};
	class EZ_PlateCarrier_Marran: PlateCarrierVest
	{
		scope = 2;
		displayName = "Marran - Vest";
		descriptionShort = "Marran - SquadPackage Vest made by Kokaskale";
		color = "Marran";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_vest_co.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_vest_co.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_vest_co.paa"};
	};
	class MassHeavyPlateVest_Marran: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Marran - Vest";
		descriptionShort = "Marran - SquadPackage Vest made by Kokaskale";
		color = "Marran";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_vest_co.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_vest_co.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_vest_co.paa"};
	};
	class EZ_Marran_TacticalHelmet: Mich2001Helmet
	{
		displayName = "Marran - TacticalHelmet";
		descriptionShort = "Marran - SquadPackage TacticalHelmet made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_helmet.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_helmet.paa",
									  "EZ_Clothing\data\patreon\patreon_squad\Marran\Marran_helmet.paa"};
	};
	class EZ_TSP_MVSShroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament - MVS Shroud";
		descriptionShort = "The Separatist Parliament - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_MVS_Shroud.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_MVS_Shroud.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_MVS_Shroud.paa"};
	};
	class EZ_TSP_JungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "The Separatist Parliament - Jungle Boots";
		descriptionShort = "The Separatist Parliament - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_jungleboots.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_jungleboots.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_jungleboots.paa"};
	};
	class EZ_TSP_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament - MVS Balaclava";
		descriptionShort = "The Separatist Parliament - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_balaclava.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_balaclava.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_balaclava.paa"};
	};
	class EZ_TSP_Jacket: GorkaEJacket_ColorBase
	{
		scope = 2;
		displayName = "The Separatist Parliament - Jacket";
		descriptionShort = "The Separatist Parliament - PlatoonPackage Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_jacket.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_jacket.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_jacket.paa"};
	};
	class EZ_TSP_Pants: BDUPants
	{
		scope = 2;
		displayName = "The Separatist Parliament - Pants";
		descriptionShort = "The Separatist Parliament - PlatoonPackage Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_pants.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_pants.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_pants.paa"};
	};
	class EZ_TSP_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament - MVS Helmet";
		descriptionShort = "The Separatist Parliament - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_helmet.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_helmet.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_helmet.paa"};
	};
	class MVS_Combat_Vest_TSP: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament - MVS Vest";
		descriptionShort = "The Separatist Parliament - PlatoonPackage MVS Vest made by Kokaskale";
		color = "TSP";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_vest.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_vest.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_mvs_vest.paa"};
	};
	class EZ_TSP_TacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "The Separatist Parliament - Tactical Gloves";
		descriptionShort = "The Separatist Parliament - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_tacticalgloves.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_tacticalgloves.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_tacticalgloves.paa"};
	};
	class EZ_TSP_SlingPack: MVS_Sling_Pack_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament - Sling Pack";
		descriptionShort = "The Separatist Parliament - PlatoonPackage Sling Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_Slingpack.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_Slingpack.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_Slingpack.paa"};
	};
	class MVS_Combat_Vest_Heavy_TSP: ModularVestSystem_Heavy
	{
		displayName = "The Separatist Parliament - MVS Heavy Plate Carrier";
		descriptionShort = "The Separatist Parliament - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		color = "TSP";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_MVSHeavy_co.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_MVSHeavy_co.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_MVSHeavy_co.paa"};
	};
	class EZ_TSP_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament - MVS Warrior Helmet";
		descriptionShort = "The Separatist Parliament - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_WarriorHelmet.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_WarriorHelmet.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_WarriorHelmet.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_Mandalorian_Helmet.paa","EZ_Clothing\data\patreon\patreon_platoon\TSP\TSP_Mandalorian_Visor_co.paa"};
	};
};
