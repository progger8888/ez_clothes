class CfgPatches
{
	class EZ_Military_Pants
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Pants","DZ_Data"};
	};
};
class cfgVehicles
{
	class BDUPants;
	class TTSKOPants;
	class CargoPants_ColorBase;
	class EZ_BDUPants_gozo: BDUPants
	{
		displayName = "BDU Pants - Gozo";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern. It makes for a popular alternative to more expensive hunting gear";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_gozo_co.paa","EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_gozo_co.paa","EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_gozo_co.paa"};
	};
	class EZ_BDUPants_thorn: BDUPants
	{
		displayName = "BDU Pants - Thorn";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern. It makes for a popular alternative to more expensive hunting gear";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_thorn_co.paa","EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_thorn_co.paa","EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_thorn_co.paa"};
	};
	class EZ_BDUPants_rooke: BDUPants
	{
		displayName = "BDU Pants - Rooke";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern. It makes for a popular alternative to more expensive hunting gear";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_rooke_co.paa","EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_rooke_co.paa","EZ_Military_Clothing\data\Pants\BDUPants\EZ_BDUPants_rooke_co.paa"};
	};
	class EZ_USMCPants_mv11: TTSKOPants
	{
		displayName = "USMC Pants - MV11";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern. It makes for a popular alternative to more expensive hunting gear";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\USMCPants\EZ_USMCPants_mv11_co.paa","EZ_Military_Clothing\data\Pants\USMCPants\EZ_USMCPants_mv11_co.paa","EZ_Military_Clothing\data\Pants\USMCPants\EZ_USMCPants_mv11_co.paa"};
	};
	class EZ_CargoPants_Tiger: CargoPants_ColorBase
	{
		displayName = "Cargo Pants - Pants Tiger";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern.By Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_tiger.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_tiger.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_tiger.paa"};
	};
	class EZ_CargoPants_ERDL: CargoPants_ColorBase
	{
		displayName = "Cargo Pants - Pants ERDL";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern.By Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_erdl.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_erdl.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_erdl.paa"};
	};
	class EZ_CargoPants_MulticamBlack: CargoPants_ColorBase
	{
		displayName = "Cargo Pants - Pants Multicam Black";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern.By Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_multicamblack.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_multicamblack.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_multicamblack.paa"};
	};
	class EZ_CargoPants_MulticamTropic: CargoPants_ColorBase
	{
		displayName = "Cargo Pants - Multicam Tropic";
		descriptionShort = "Battle Dress Uniform pants with classic camouflage pattern.By Kokaskale";
		scope = 2;
		hiddenSelectionsTextures[] = {"EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_tropimulticam.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_tropimulticam.paa","EZ_Military_Clothing\data\Pants\CargoPants\EZ_pants_tropimulticam.paa"};
	};
};
