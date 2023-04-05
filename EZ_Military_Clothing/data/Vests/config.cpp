class CfgPatches
{
	class EZ_Military_Vests
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Vests","Mass_Textures"};
	};
};
class cfgVehicles
{
	class PlateCarrierVest;
	class PlateCarrierPouches;
	class PlateCarrierHolster;
	class MassHeavyPlateVest_ColorBase;
	class EZ_PlateCarrier_mv11: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - MV11";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "MV11";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class EZ_PlateCarrier_gozo: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - Gozo";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "Gozo";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class EZ_PlateCarrier_thorn: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - Thorn";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "Thorn";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class EZ_PlateCarrier_rooke: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - Rooke";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "Rooke";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class EZ_PlateCarrier_Tiger: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - Tiger";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "Tiger";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa"};
	};
	class EZ_PlateCarrier_ERDL: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - ERDL";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "ERDL";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa"};
	};
	class EZ_PlateCarrier_MulticamBlack: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - Multicam Black";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "MulticamBlack";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa"};
	};
	class EZ_PlateCarrier_MulticamTropic: PlateCarrierVest
	{
		scope = 2;
		displayName = "Plate Carrier - Multicam Tropic";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "MulticamTropic";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa"};
	};
	class MassHeavyPlateVest_mv11: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - MV11";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "MV11";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class MassHeavyPlateVest_gozo: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - Gozo";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "Gozo";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class MassHeavyPlateVest_thorn: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - Thorn";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "Thorn";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class MassHeavyPlateVest_rooke: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - Rooke";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Can be expandable with holster and additional pouches";
		color = "Rooke";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class MassHeavyPlateVest_Tiger: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - Tiger";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "Tiger";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa"};
	};
	class MassHeavyPlateVest_ERDL: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - ERDL";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "ERDL";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa"};
	};
	class MassHeavyPlateVest_MulticamBlack: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - Multicam Black";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "MulticamBlack";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa"};
	};
	class MassHeavyPlateVest_MulticamTropic: MassHeavyPlateVest_ColorBase
	{
		scope = 2;
		displayName = "Heavy Plate Carrier - Multicam Tropic";
		descriptionShort = "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage.By Kokaskale";
		color = "MulticamTropic";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa"};
	};
	class EZ_VestPouches_mv11: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Vest Pouches - MV11";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class EZ_VestPouches_gozo: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Vest Pouches - Gozo";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class EZ_VestPouches_thorn: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Vest Pouches - Thorn";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class EZ_VestPouches_rooke: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Vest Pouches - Rooke";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class EZ_Holster_mv11: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - MV11";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_mv11_co.paa"};
	};
	class EZ_Holster_gozo: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - Gozo";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_gozo_co.paa"};
	};
	class EZ_Holster_thorn: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - Thorn";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_thorn_co.paa"};
	};
	class EZ_Holster_rooke: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - Rooke";
		descriptionShort = "A pistol holster, attachable to plate carrier vest. Provides a convenient way to store your pistol";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_rooke_co.paa"};
	};
	class EZ_Holster_Tiger: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - Tiger";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa"};
	};
	class EZ_VestPouches_Tiger: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Pouches - Pouches Tiger";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tiger_co.paa"};
	};
	class EZ_Holster_ERDL: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - ERDL";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa"};
	};
	class EZ_VestPouches_ERDL: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Pouches - Pouches ERDL";
		descriptionShort = "Pouches attachable to plate carrier vest.Further increase its carrying capacity.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_erdl_co.paa"};
	};
	class EZ_Holster_MulticamBlack: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - Multicam Black";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa"};
	};
	class EZ_VestPouches_MulticamBlack: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Pouches - Multicam Black";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_multicamblack_co.paa"};
	};
	class EZ_Holster_MulticamTropic: PlateCarrierHolster
	{
		scope = 2;
		displayName = "Holster - Multicam Tropic";
		descriptionShort = "A pistol holster, attachable to plate carrier vest.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa"};
	};
	class EZ_VestPouches_MulticamTropic: PlateCarrierPouches
	{
		scope = 2;
		displayName = "Pouches - Multicam Tropic";
		descriptionShort = "Pouches attachable to plate carrier vest. Further increase its carrying capacity.By Kokaskale";
		hiddenSelections[] = {"camoGround","zbytek"};
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa","EZ_Military_Clothing\data\Vests\PlateCarrier\EZ_PlateCarrier_tropimulticam_co.paa"};
	};
};