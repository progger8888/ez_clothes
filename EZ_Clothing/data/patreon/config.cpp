class CfgPatches
{
	class EZ_Patreon
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Masks","DZ_Characters_Pants","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Gear_Camping","Mass_Textures","ModularVestSystem","EZ_Armbands","EZ_BannerStand","EZ_MGS_SOF","Windstride_thicc_leggings"};
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
	class MVS_Assault_Pack_Tan;
	class MVS_CombatPants_Base;
	class MVS_CombatShirt_Base;
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
	class BoonieHat_ColorBase;
	class Adidas_Leggings;
	class TShirt_ColorBase;
	class BalaclavaMask_ColorBase;
	class Flag_NWA_EZ: Flag_Base
	{
		scope = 2;
		displayName = "NWA Flag";
		descriptionShort = "NWA - ArmbandPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_ff.paa"};
		color = "NWA_EZ";
	};
	class EZ_NWA_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "NWA - Double Armband";
		descriptionShort = "NWA - ArmbandPackage Double Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_armband.paa"};
	};
	class EZ_NWA_Banner: EZ_Banner_Colorbase
	{
		displayName = "North Western Alliance - Banner";
		descriptionShort = "North Western Alliance - PlatoonPackage Banner made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_bb.paa"};
	};

	class EZ_NWAMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Shroud";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_MVS_Shroud.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_MVS_Shroud.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_MVS_Shroud.paa"};
	};
	class EZ_NWAJungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - Jungle Boots";
		descriptionShort = "North Western Alliance - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_jungleboots.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_jungleboots.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_jungleboots.paa"};
	};
	class EZ_NWA_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Balaclava";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_balaclava.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_balaclava.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_balaclava.paa"};
	};
	class EZ_NWA_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Shirt";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_combatshirt.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_combatshirt.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_combatshirt.paa"};
	};
	class EZ_NWA_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Pants";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_combatpants.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_combatpants.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_combatpants.paa"};
	};
	class EZ_NWA_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Helmet";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_helmet.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_helmet.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_helmet.paa"};
	};
	class MVS_Combat_Vest_NWA: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Vest";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Vest made by Kokaskale";
		color = "NWA";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_vest.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_vest.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_mvs_vest.paa"};
	};
	class EZ_NWA_TacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - Tactical Gloves";
		descriptionShort = "North Western Alliance - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_tacticalgloves.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_tacticalgloves.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_tacticalgloves.paa"};
	};
	class EZ_NWA_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "North Western Alliance - Assault Pack";
		descriptionShort = "North Western Alliance - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_RaidPack.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_RaidPack.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_RaidPack.paa"};
	};
	class MVS_Combat_Vest_Heavy_NWA: ModularVestSystem_Heavy
	{
		displayName = "North Western Alliance - MVS Heavy Plate Carrier";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		color = "NWA";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_MVSHeavy_co.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_MVSHeavy_co.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_MVSHeavy_co.paa"};
	};
	class EZ_NWA_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Warrior Helmet";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_WarriorHelmet.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_WarriorHelmet.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_WarriorHelmet.paa","EZ_Clothing\data\patreon\patreon_platoon\NWA\NWA_Mandalorian_Helmet.paa","EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_ForestCrow_Armband: EZ_DoubleArmband_ColorBase
	{
		displayName = "ForestCrow - Double Armband";
		descriptionShort = "ForestCrow -PlatoonPackage Double Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_armband.paa"};
	};
	class EZ_ForestCrow_Banner: EZ_Banner_Colorbase
	{
		displayName = "ForestCrow - Banner";
		descriptionShort = "ForestCrow - PlatoonPackage Banner made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_bb.paa"};
	};
	class EZ_ForestCrow_Flag: Flag_Base
	{
		displayName = "ForestCrow - Flag";
		descriptionShort = "ForestCrow - PlatoonPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_ff.paa"};
	};
	class EZ_ForestCrowMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Shroud";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_MVS_Shroud.paa"};
	};
	class EZ_ForestCrowJungleBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "ForestCrow - Jungle Boots";
		descriptionShort = "ForestCrow - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa",
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa",
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_ForestCrow: ModularVestSystem_Heavy
	{
		displayName = "ForestCrow - MVS Heavy Plate Carrier";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		color = "ForestCrow";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_MVSHeavy_co.paa"};
	};
	class EZ_ForestCrow_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Warrior Helmet";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_Mandalorian_Helmet.paa",
			"EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"
		};
	};
	class EZ__ForestCrow_SOFJacket: EZ_SOF_Jacket_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - SOF Jacket";
		descriptionShort = "ForestCrow - PlatoonPackage SOF Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_sof_shirt.paa"};
	};
	class EZ_ForestCrow_SOFPants: EZ_SOF_Pants_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - SOF Pants";
		descriptionShort = "ForestCrow - PlatoonPackage SOF Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_sof_pants.paa"};
	};
	class EZ_ForestCrow_SOFBalaclava: EZ_SOF_Balaclava_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - SOF Balaclava";
		descriptionShort = "ForestCrow - PlatoonPackage SOF Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_sof_balaclava.paa"};
	};
	class EZ_ForestCrow_SOFGloves: EZ_SOF_Gloves_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - SOF Gloves";
		descriptionShort = "ForestCrow - PlatoonPackage SOF Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_sof_gloves.paa"};
	};
	class EZ_ForestCrow_SOFPlatecarrier: EZ_SOF_Platecarrier_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - SOF Platecarrier";
		descriptionShort = "ForestCrow - PlatoonPackage SOF Platecarrier made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_sof_vest.paa"};
	};
	class EZ_ForestCrow_SOFBackpack: EZ_SOF_Backpack_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - SOF Backpack";
		descriptionShort = "ForestCrow - PlatoonPackage SOF Backpack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon\patreon_platoon\ForestCrow\ForestCrow_sof_backpack.paa"};
	};
};
