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
	class EZ_ForestCrow_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "ForestCrow - Banner";
		descriptionShort = "ForestCrow - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_bb.paa"};
	};
	class EZ_ForestCrow_Flag: Flag_Base
	{
		scope = 2;
		displayName = "ForestCrow - Flag";
		descriptionShort = "ForestCrow - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_ff.paa"};
	};
	class EZ_ForestCrow_Tacticalshirt: TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - Tactical Shirt";
		descriptionShort = "ForestCrow - PlatoonPackage Tactical Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_shirt.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_shirt.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_shirt.paa"};
	};
	class EZ_ForestCrow_Pants: CargoPants_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - Cargo Pants";
		descriptionShort = "ForestCrow - PlatoonPackage Cargo Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_pants.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_pants.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_pants.paa"};
	};
	class EZ_ForestCrow_Balaclava: BalaclavaMask_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - Balaclava";
		descriptionShort = "ForestCrow - PlatoonPackage Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_balaclava_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_balaclava_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_balaclava_co.paa"};
	};
	class EZ_ForestCrow_Vest: PlateCarrierVest
	{
		scope = 2;
		displayName = "ForestCrow - Vest";
		descriptionShort = "ForestCrow - PlatoonPackage Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_vest_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_vest_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_vest_co.paa"};
	};
	class EZ_ForestCrow_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Helmet";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_helmet.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_helmet.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_mvs_helmet.paa"};
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
		scope = 2;
		displayName = "ForestCrow - Jungle Boots";
		descriptionShort = "ForestCrow - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_jungleboots.paa"};
	};
	class EZ_ForestCrowTacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - Tactical Gloves";
		descriptionShort = "ForestCrow - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_tacticalgloves.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_tacticalgloves.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_tacticalgloves.paa"};
	};
	class MVS_Combat_Vest_Heavy_Crow: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "ForestCrow - MVS Heavy Plate Carrier";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		color = "Crow";
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
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_RaidPack.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_RaidPack.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_RaidPack.paa"};
	};
	class EZ_ForestCrow_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Warrior Helmet";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_Mandalorian_Helmet.paa",
									  "EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class MVS_Combat_Vest_Crow: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "ForestCrow - MVS Vest";
		descriptionShort = "ForestCrow - PlatoonPackage MVS Vest made by Kokaskale";
		color = "Crow";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_vest_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_vest_co.paa",
									  "EZ_Clothing\data\patreon_platoon\ForestCrow\ForestCrow_vest_co.paa"};
	};
	class EZ_AngryBeavers_BaseballCap: Msp_BaseballCap_Base
	{
		scope = 2;
		displayName = "Angry Beavers - Hat";
		descriptionShort = "Angry Beavers - PlatoonPackage Hat made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\staff\Cappie\AngryBeavers_baseballcapii.paa"};
	};
	class EZ_AngryBeavier_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		displayName = "AngryBeaver - Banner";
		descriptionShort = "AngryBeaver - PlatoonPackage Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_bb.paa"};
	};
	class EZ_AngryBeavier_Flag: Flag_Base
	{
		scope = 2;
		displayName = "AngryBeaver - Flag";
		descriptionShort = "AngryBeaver - PlatoonPackage Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_ff.paa"};
	};
	class EZ_AngryBeavier_Balaclava: MVS_Balaclava2_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Balaclava";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_balaclava.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_balaclava.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_balaclava.paa"};
	};
	class EZ_AngryBeavier_TacticalShirt: MVS_CombatShirt_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Shirt";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Shirt made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_combatshirt.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_combatshirt.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_combatshirt.paa"};
	};
	class EZ_AngryBeavier_Pants: MVS_CombatPants_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Pants";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_combatpants.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_combatpants.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_combatpants.paa"};
	};
	class EZ_AngryBeavier_Helmet: MVS_Helmet_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Helmet";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_helmet.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_helmet.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_helmet.paa"};
	};
	class MVS_Combat_Vest_AngryBeavier: ModularVestSystem_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Vest";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Vest made by Kokaskale";
		color = "AngryBeavier";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_vest.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_vest.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_mvs_vest.paa"};
	};
	class EZ_AngryBeavier_MVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Shroud";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_MVS_Shroud.paa"};
	};
	class EZ_AngryBeavier_JungleBoots: JungleBoots_ColorBase
	{
		scope = 2;
		displayName = "AngryBeaver - Jungle Boots";
		descriptionShort = "AngryBeaver - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_jungleboots.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_jungleboots.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_jungleboots.paa"};
	};
	class EZ_AngryBeavier_TacticalGloves: TacticalGloves_ColorBase
	{
		scope = 2;
		displayName = "AngryBeaver - Tactical Gloves";
		descriptionShort = "AngryBeaver - PlatoonPackage Tactical Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_tacticalgloves.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_tacticalgloves.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_tacticalgloves.paa"};
	};
	class MVS_Combat_Vest_Heavy_AngryBeavier: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Heavy Plate Carrier";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		color = "AngryBeavier";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_MVSHeavy_co.paa"};
	};
	class EZ_AngryBeavier_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "AngryBeaver - Assault Pack";
		descriptionShort = "Endzone NWA - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_RaidPack.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_RaidPack.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_RaidPack.paa"};
	};
	class EZ_AngryBeavier_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "AngryBeaver - MVS Warrior Helmet";
		descriptionShort = "AngryBeaver - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_WarriorHelmet.paa",
									  "EZ_Clothing\data\patreon_platoon\AngryBeavier\AngryBeavier_Mandalorian_Helmet.paa",
									  "EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"};
	};
	class EZ_NWA_Armband: EZ_DoubleArmband_ColorBase
	{
		displayName = "North Western Alliance - Double Armband";
		descriptionShort = "North Western Alliance -PlatoonPackage Double Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_armband.paa"};
	};
	class EZ_NWA_Banner: EZ_Banner_Colorbase
	{
		displayName = "North Western Alliance - Banner";
		descriptionShort = "North Western Alliance - PlatoonPackage Banner made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_bb.paa"};
	};
	class EZ_NWA_Flag: Flag_Base
	{
		displayName = "North Western Alliance - Flag";
		descriptionShort = "North Western Alliance - PlatoonPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_ff.paa"};
	};
	class EZ_NWAMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Shroud";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\NWA\NWA_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\NWA\NWA_MVS_Shroud.paa"};
	};
	class EZ_NWAJungleBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "North Western Alliance - Jungle Boots";
		descriptionShort = "North Western Alliance - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_jungleboots.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_NWA: ModularVestSystem_Heavy
	{
		displayName = "North Western Alliance - MVS Heavy Plate Carrier";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		color = "NWA";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\NWA\NWA_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\NWA\NWA_MVSHeavy_co.paa"};
	};
	class EZ_NWA_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "North Western Alliance - MVS Warrior Helmet";
		descriptionShort = "North Western Alliance - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\NWA\NWA_Mandalorian_Helmet.paa",
			"EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"
		};
	};
	class EZ__NWA_SOFJacket: EZ_SOF_Jacket_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Jacket";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_shirt.paa"};
	};
	class EZ_NWA_SOFPants: EZ_SOF_Pants_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Pants";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_pants.paa"};
	};
	class EZ_NWA_SOFHelmet: EZ_SOF_Helmet_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Helmet";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_helmet.paa"};
	};
	class EZ_NWA_SOFBalaclava: EZ_SOF_Balaclava_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Balaclava";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Balaclava made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_balaclava.paa"};
	};
	class EZ_NWA_SOFGloves: EZ_SOF_Gloves_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Gloves";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Gloves made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_gloves.paa"};
	};
	class EZ_NWA_SOFPlatecarrier: EZ_SOF_Platecarrier_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Platecarrier";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Platecarrier made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_vest.paa"};
	};
	class EZ_NWA_SOFBackpack: EZ_SOF_Backpack_ColorBase
	{
		scope = 2;
		displayName = "North Western Alliance - SOF Backpack";
		descriptionShort = "North Western Alliance - PlatoonPackage SOF Backpack made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\NWA\NWA_sof_backpack.paa"};
	};
	class EZ_Sharks_Armband: EZ_DoubleArmband_ColorBase
	{
		displayName = "Sharks - Double Armband";
		descriptionShort = "Sharks - PlatoonPackage Double Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_armband.paa"};
	};
	class EZ_Sharks_Banner: EZ_Banner_Colorbase
	{
		displayName = "Sharks - Banner";
		descriptionShort = "Sharks - PlatoonPackage Banner made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_bb.paa"};
	};
	class EZ_Sharks_Flag: Flag_Base
	{
		displayName = "Sharks - Flag";
		descriptionShort = "Sharks - PlatoonPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_ff.paa"};
	};
	class EZ_Sharks_HuntingJacket: HuntingJacket_ColorBase
	{
		scope = 2;
		visibilityModifier=0.89999998;
		displayName = "Sharks - Hunting Jacket";
		descriptionShort = "Sharks - PlatoonPackage Hunting Jacket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_huntingjacket.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_huntingjacket.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_huntingjacket.paa"};
	};
	class EZ_Sharks_HunterPants: HunterPants_ColorBase
	{
		scope = 2;
		visibilityModifier=0.89999998;
		displayName = "Sharks - Hunter Pants";
		descriptionShort = "Sharks - PlatoonPackage Hunter Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_hunterpants.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_hunterpants.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_hunterpants.paa"};
	};
	class EZ_Sharks_Balaclava: MVS_Balaclava2_Base
	{
		displayName = "Sharks - MVS Balaclava";
		descriptionShort = "Sharks - PlatoonPackage MVS Balaclava made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_balaclava.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_balaclava.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_balaclava.paa"
		};
	};
	class EZ_Sharks_Helmet: MVS_Helmet_Base
	{
		displayName = "Sharks - MVS Helmet";
		descriptionShort = "Sharks - PlatoonPackage MVS Helmet made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_helmet.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_helmet.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_helmet.paa"
		};
	};
	class MVS_Combat_Vest_Sharks: ModularVestSystem_Base
	{
		displayName = "Sharks - MVS Vest";
		descriptionShort = "Sharks - PlatoonPackage MVS Vest made by Kokaskale";
		scope = 2;
		color = "Sharks";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_vest.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_vest.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_mvs_vest.paa"};
	};
	class EZ_Sharks_Vest: PlateCarrierVest
	{
		scope = 2;
		isplayName = "Sharks - Vest";
		descriptionShort = "Sharks - PlatoonPackage Vest made by Kokaskale";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_vest_co.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_vest_co.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_vest_co.paa"};
	};
	class EZ_SharksMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Sharks - MVS Shroud";
		descriptionShort = "Sharks - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_MVS_Shroud.paa"};
	};
	class EZ_SharksJungleBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Sharks - Jungle Boots";
		descriptionShort = "Sharks - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_jungleboots.paa"
		};
	};
	class EZ_SharksTacticalGloves: TacticalGloves_ColorBase
	{
		displayName = "Sharks - Tactical Gloves";
		descriptionShort = "Sharks - PlatoonPackage Tactical Gloves made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_tacticalgloves.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_tacticalgloves.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_tacticalgloves.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Sharks: ModularVestSystem_Heavy
	{
		displayName = "Sharks - MVS Heavy Plate Carrier";
		descriptionShort = "Sharks - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		color = "Sharks";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\Sharks\Sharks_MVSHeavy_co.paa"};
	};
	class EZ_Sharks_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Sharks - Assault Pack";
		descriptionShort = "Endzone Sharks - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_RaidPack.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_RaidPack.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_RaidPack.paa"
			
		};
	};
	class EZ_Sharks_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Sharks - MVS Warrior Helmet";
		descriptionShort = "Sharks - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\Sharks\Sharks_Mandalorian_Helmet.paa",
			"EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"
		};
	};
	class EZ_Bricklayers_Armband: EZ_DoubleArmband_ColorBase
	{
		displayName = "Bricklayers - Double Armband";
		descriptionShort = "Bricklayers - PlatoonPackage Double Armband made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_armband.paa"};
	};
	class EZ_Bricklayers_Banner: EZ_Banner_Colorbase
	{
		displayName = "Bricklayers - Banner";
		descriptionShort = "Bricklayers - PlatoonPackage Banner made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_bb.paa"};
	};
	class EZ_Bricklayers_Flag: Flag_Base
	{
		displayName = "Bricklayers - Flag";
		descriptionShort = "Bricklayers - PlatoonPackage Flag made by Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_ff.paa"};
	};
	class EZ_Bricklayers_QuiltedJacket: QuiltedJacket_ColorBase
	{
		scope = 2;
		visibilityModifier=0.89999998;
		displayName = "Bricklayers - Quilted Jacket";
		descriptionShort = "Bricklayers - PlatoonPackage Quilted acket made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_quiltedJacket.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_quiltedJacket.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_quiltedJacket.paa"};
	};
	class EZ_Bricklayers_HunterPants: HunterPants_ColorBase
	{
		scope = 2;
		visibilityModifier=0.89999998;
		displayName = "Bricklayers - Hunter Pants";
		descriptionShort = "Bricklayers - PlatoonPackage Hunter Pants made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_hunterpants.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_hunterpants.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_hunterpants.paa"};
	};
	class EZ_Bricklayers_Balaclava: MVS_Balaclava2_Base
	{
		displayName = "Bricklayers - MVS Balaclava";
		descriptionShort = "Bricklayers - PlatoonPackage MVS Balaclava made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_mvs_balaclava.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_mvs_balaclava.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_mvs_balaclava.paa"
		};
	};
	class EZ_Bricklayers_Helmet: MVS_Helmet_Base
	{
		displayName = "Bricklayers - MVS Helmet";
		descriptionShort = "Bricklayers - PlatoonPackage MVS Helmet made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_mvs_helmet.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_mvs_helmet.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_mvs_helmet.paa"
		};
	};
	class EZ_BricklayersMVS_Shroud: MVS_Shroud_Base
	{
		scope = 2;
		displayName = "Bricklayers - MVS Shroud";
		descriptionShort = "Bricklayers - PlatoonPackage MVS Shroud made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_MVS_Shroud.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_MVS_Shroud.paa"};
	};
	class EZ_BricklayersJungleBoots: JungleBoots_ColorBase
	{
		scope=2;
		displayName = "Bricklayers - Jungle Boots";
		descriptionShort = "Bricklayers - PlatoonPackage Jungle Boots made by Kokaskale";
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_jungleboots.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_jungleboots.paa"
		};
	};
	class EZ_BricklayersTacticalGloves: TacticalGloves_ColorBase
	{
		displayName = "Bricklayers - Tactical Gloves";
		descriptionShort = "Bricklayers - PlatoonPackage Tactical Gloves made by Kokaskale";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_tacticalgloves.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_tacticalgloves.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_tacticalgloves.paa"
		};
	};
	class MVS_Combat_Vest_Heavy_Bricklayers: ModularVestSystem_Heavy
	{
		displayName = "Bricklayers - MVS Heavy Plate Carrier";
		descriptionShort = "Bricklayers - PlatoonPackage MVS Heavy Plate Carrier made by Kokaskale";
		scope = 2;
		color = "Bricklayers";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_MVSHeavy_co.paa",
									  "EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_MVSHeavy_co.paa"};
	};
	class EZ_Bricklayers_AssaultPack: MVS_Assault_Pack_Tan
	{
		scope = 2;
		displayName = "Bricklayers - Assault Pack";
		descriptionShort = "Endzone Bricklayers - PlatoonPackage Assault Pack made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_RaidPack.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_RaidPack.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_RaidPack.paa"
			
		};
	};
	class EZ_Bricklayers_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Bricklayers - MVS Warrior Helmet";
		descriptionShort = "Bricklayers - PlatoonPackage MVS Warrior Helmet made by Kokaskale";
		hiddenSelectionsTextures[] = 
		{
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_WarriorHelmet.paa",
			"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_Mandalorian_Helmet.paa",
			"EZ_Clothing\data\Mvs_Test\Mandalorian_Visor_co.paa"
		};
	};
	class EZ_Bricklayers_SOFPlatecarrier: EZ_SOF_Platecarrier_ColorBase
	{
		scope = 2;
		displayName = "Bricklayers - SOF Platecarrier";
		descriptionShort = "Bricklayers - PlatoonPackage SOF Platecarrier made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\patreon_platoon\Bricklayers\Bricklayers_sof_vest.paa"};
	};
};