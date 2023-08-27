class CfgPatches
{
	class EZ_Factions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Camping","EZ_BannerStand","EZ_Armbands"};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class EZ_Banner_Colorbase;
	class EZ_DoubleArmband_ColorBase;
	class Flag_TurkishDelights_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Turkish Delights Flag";
		descriptionShort = "ENDZONE Faction - Turkish Delights - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TurkishDelights\TurkishDelights_ff.paa"};
		color = "TurkishDelights_EZ";
	};
	class EZ_TurkishDelights_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Turkish Delights - Double Armband";
		descriptionShort = "ENDZONE Faction - Turkish Delights - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TurkishDelights\TurkishDelights_armband.paa"};
	};
	class EZ_TurkishDelights_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "Turkish Delights - Banner";
		descriptionShort = "ENDZONE Faction - Turkish Delights - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TurkishDelights\TurkishDelights_bb.paa"};
	};
	class Flag_PROMETHEUS_EZ: Flag_Base
	{
		scope = 2;
		displayName = "PROMETHEUS Flag";
		descriptionShort = "ENDZONE Faction - PROMETHEUS - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\PROMETHEUS\PROMETHEUS_ff.paa"};
		color = "PROMETHEUS_EZ";
	};
	class EZ_PROMETHEUS_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "PROMETHEUS - Double Armband";
		descriptionShort = "ENDZONE Faction - PROMETHEUS - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\PROMETHEUS\PROMETHEUS_armband.paa"};
	};
	class EZ_PROMETHEUS_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "PROMETHEUS - Banner";
		descriptionShort = "ENDZONE Faction - PROMETHEUS - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\PROMETHEUS\PROMETHEUS_bb.paa"};
	};
	class Flag_TSP_EZ: Flag_Base
	{
		scope = 2;
		displayName = "The Separatist Parliament Flag";
		descriptionShort = "ENDZONE Faction - The Separatist Parliament - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TSP\TSP_ff.paa"};
		color = "he Separatist Parliament_EZ";
	};
	class EZ_TSP_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "The Separatist Parliament - Double Armband";
		descriptionShort = "ENDZONE Faction - The Separatist Parliament - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TSP\TSP_armband.paa"};
	};
	class EZ_TSP_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "The Separatist Parliament - Banner";
		descriptionShort = "ENDZONE Faction - The Separatist Parliament - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TSP\TSP_bb.paa"};
	};
	class Flag_ForestCrow_EZ: Flag_Base
	{
		scope = 2;
		displayName = "ForestCrow Flag";
		descriptionShort = "ENDZONE Faction - ForestCrow - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\ForestCrow\ForestCrow_ff.paa"};
		color = "ForestCrow_EZ";
	};
	class EZ_ForestCrow_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "ForestCrow - Double Armband";
		descriptionShort = "ENDZONE Faction - ForestCrow - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\ForestCrow\ForestCrow_armband.paa"};
	};
	class EZ_ForestCrow_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "ForestCrow - Banner";
		descriptionShort = "ENDZONE Faction - ForestCrow - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\ForestCrow\ForestCrow_bb.paa"};
	};
	class Flag_FunCrew_EZ: Flag_Base
	{
		scope = 2;
		displayName = "FunCrew Flag";
		descriptionShort = "ENDZONE Faction - FunCrew - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\FunCrew\FunCrew_ff.paa"};
		color = "FunCrew_EZ";
	};
	class EZ_FunCrew_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "FunCrew - Double Armband";
		descriptionShort = "ENDZONE Faction - FunCrew - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\FunCrew\FunCrew_armband.paa"};
	};
	class EZ_FunCrew_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "FunCrew - Banner";
		descriptionShort = "ENDZONE Faction - FunCrew - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\FunCrew\FunCrew_bb.paa"};
	};
	class Flag_Bricks_EZ: Flag_Base
	{
		scope = 2;
		displayName = "Bricks Flag";
		descriptionShort = "ENDZONE Faction - Bricks - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\Bricks\Bricks_ff.paa"};
		color = "Bricks_EZ";
	};
	class EZ_Bricks_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "Bricks - Double Armband";
		descriptionShort = "ENDZONE Faction - Bricks - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\Bricks\Bricks_armband.paa"};
	};
	class EZ_Bricks_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "Bricks - Banner";
		descriptionShort = "ENDZONE Faction - Bricks - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\Bricks\Bricks_bb.paa"};
	};
	class Flag_TOG_EZ: Flag_Base
	{
		scope = 2;
		displayName = "The Old Guard Flag";
		descriptionShort = "ENDZONE Faction - The Old Guard - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TOG\TOG_ff.paa"};
		color = "The Old Guard: Legends of Survival_EZ";
	};
	class EZ_TOG_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "The Old Guard - Double Armband";
		descriptionShort = "ENDZONE Faction - The Old Guard - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TOG\TOG_armband.paa"};
	};
	class EZ_TOG_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "The Old Guard - Banner";
		descriptionShort = "ENDZONE Faction - The Old Guard - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\TOG\TOG_bb.paa"};
	};
	class Flag_DECAY_EZ: Flag_Base
	{
		scope = 2;
		displayName = "DECAY Flag";
		descriptionShort = "ENDZONE Faction - DECAY - Flag made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\DECAY\DECAY_ff.paa"};
		color = "DECAY_EZ";
	};
	class EZ_DECAY_DoubleArmband: EZ_DoubleArmband_ColorBase
	{
		scope = 2;
		displayName = "DECAY - Double Armband";
		descriptionShort = "ENDZONE Faction - DECAY - Armband made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\DECAY\DECAY_armband.paa"};
	};
	class EZ_DECAY_Banner: EZ_Banner_Colorbase
	{
		scope = 2;
		itemSize[] = {4,4};
		displayName = "DECAY - Banner";
		descriptionShort = "ENDZONE Faction - DECAY - Banner made by Kokaskale";
		hiddenSelectionsTextures[] = {"EZ_Clothing\data\factions\DECAY\DECAY_bb.paa"};
	};
};
