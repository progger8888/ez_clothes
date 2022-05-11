class CfgPatches
{
	class EZ_Military_Vests
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Vests","DZ_Data"};
	};
};
class cfgVehicles
{
	class PlateCarrierVest;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class EZ_PlateCarrier_mv11: PlateCarrierVest
	{
		displayName = "Plate Carrier - MV11";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class EZ_PlateCarrier_gozo: PlateCarrierVest
	{
		displayName = "Plate Carrier - Gozo";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class EZ_PlateCarrier_thorn: PlateCarrierVest
	{
		displayName = "Plate Carrier - Thorn";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class EZ_PlateCarrier_rooke: PlateCarrierVest
	{
		displayName = "Plate Carrier - Rooke";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class EZ_VestPouches_mv11: PlateCarrierPouches
	{
		displayName = "Vest Pouches - MV11";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class EZ_VestPouches_gozo: PlateCarrierPouches
	{
		displayName = "Vest Pouches - Gozo";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class EZ_VestPouches_thorn: PlateCarrierPouches
	{
		displayName = "Vest Pouches - Thorn";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class EZ_VestPouches_rooke: PlateCarrierPouches
	{
		displayName = "Vest Pouches - Rooke";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class EZ_Holster_mv11: PlateCarrierHolster
	{
		displayName = "Holster - MV11";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class EZ_Holster_gozo: PlateCarrierHolster
	{
		displayName = "Holster - Gozo";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class EZ_Holster_thorn: PlateCarrierHolster
	{
		displayName = "Holster - Thorn";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class EZ_Holster_rooke: PlateCarrierHolster
	{
		displayName = "Holster - Rooke";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class EZ_Holster_Tiger: PlateCarrierHolster
	{
		displayName = "Holster - Tiger";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa"};
	};
	class EZ_VestPouches_Tiger: PlateCarrierPouches
	{
		displayName = "Pouches - Pouches Tiger";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa"};
	};
	class EZ_PlateCarrier_Tiger: PlateCarrierVest
	{
		displayName = "Plate Carrier - Tiger";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger.paa"};
	};
	class EZ_Holster_ERDL: PlateCarrierHolster
	{
		displayName = "Holster - ERDL";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa"};
	};
	class EZ_VestPouches_ERDL: PlateCarrierPouches
	{
		displayName = "Pouches - Pouches ERDL";
		descriptionShort = "Pouches attachable to plate carrier vest.Further increase its carrying capacity.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa"};
	};
	class EZ_PlateCarrier_ERDL: PlateCarrierVest
	{
		displayName = "Plate Carrier - ERDL";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl.paa"};
	};
	class EZ_Holster_MulticamBlack: PlateCarrierHolster
	{
		displayName = "Holster - Multicam Black";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa"};
	};
	class EZ_VestPouches_MulticamBlack: PlateCarrierPouches
	{
		displayName = "Pouches - Multicam Black";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa"};
	};
	class EZ_PlateCarrier_MulticamBlack: PlateCarrierVest
	{
		displayName = "Plate Carrier - Multicam Black";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack.paa"};
	};
	class EZ_Holster_MulticamTropic: PlateCarrierHolster
	{
		displayName = "Holster - Multicam Tropic";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa"};
	};
	class EZ_VestPouches_MulticamTropic: PlateCarrierPouches
	{
		displayName = "Pouches - Multicam Tropic";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa"};
	};
	class EZ_PlateCarrier_MulticamTropic: PlateCarrierVest
	{
		displayName = "Plate Carrier - Multicam Tropic";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		scope = 2;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam.paa"};
	};
};
