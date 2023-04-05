class CfgPatches
{
	class EZ_CamoPaint
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Consumables"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class EZ_CamoPaint_Base: Inventory_Base
	{
		scope = 0;
		displayName = "Magic Paint";
		descriptionShort = "......";
		model = "dz\gear\consumables\spraycan.p3d";
		weight = 100;
		stackedUnit = "ml";
		quantityBar = 1;
		varQuantityInit = 200;
		varQuantityMin= 0;
		varQuantityMax = 200;
		itemSize[] = {1,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\Paint\data\spraycan_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.7,{"DZ\gear\consumables\data\butane_canister.rvmat"}},{0.5,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\butane_canister_damage.rvmat"}},{0,{"DZ\gear\consumables\data\butane_canister_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPaper_SoundSet";
					id = 797;
				};
			};
		};
	};
	class EZ_Paint_Doos: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Tost: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Loha: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Glog: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Clio: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Oest: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Eamp: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Nayo: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Atwe: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Waos: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Ecte: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Ihna: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Staj: EZ_CamoPaint_Base
	{
		scope = 2;
	};	
	class EZ_Paint_Raas: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Iark: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Shah: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Alto: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Adei: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Gloe: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Thod: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Usab: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Moer: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Glen: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Oonk: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Uero: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Frao: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Stok: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Erae: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Spal: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Drut: EZ_CamoPaint_Base
	{
		scope = 2;
	};
	class EZ_Paint_Exeu: EZ_CamoPaint_Base
	{
		scope = 2;
	};
};