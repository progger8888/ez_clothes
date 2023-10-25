class CfgPatches
{
	class EZ_OldRadio
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSlots
{
	class Slot_EZCassette
	{
		name = "EZCassette";
		displayName = "Cassette";
		ghostIcon = "set:dayz_inventory image:missing";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class EZ_Cassetteradio: Inventory_Base
	{
		scope = 2;
		displayName = "Wilga Radio";
		descriptionShort = "A battery powered radio. Seems to be in working condition. Just needs a tape and battery.";
		model = "\dz\gear\radio\unitra_wilga.p3d";
		weight = 1400;
		itemSize[] = {2,3};
		fragility = 0.1;
		absorbency = 0.5;
		attachments[] = {"BatteryD","EZCassette"};
		oldpower = 0;
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.08;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.7,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0.3,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0.0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class turnOnRadio
				{
					soundSet = "turnOnRadio_SoundSet";
					id = 1006;
				};
				class turnOffRadio
				{
					soundSet = "turnOffRadioNoise_SoundSet";
					id = 1007;
				};
			};
		};
	};
	class EZ_Cassette_ColorBase: Inventory_Base
	{
		scope = 0;
		displayName = "Cassette";
		descriptionShort = "This cassette tape is a blast from the past...";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		inventorySlot[] = {"EZCassette"};
		weight = 80;
		absorbency = 0.5;
		itemSize[] = {2,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\cassette.rvmat"}},{0.7,{"DZ\gear\tools\data\cassette.rvmat"}},{0.5,{"DZ\gear\tools\data\cassette_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\cassette_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\cassette_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class CfgEZCassette{};
	};
	class EZ_Cassette01: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Hound Dog.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape01_SoundSet";
		};
	};
	class EZ_Cassette02: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Moonlight Sonata.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape02_SoundSet";
		};
	};
	class EZ_Cassette03: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Never Gonna Give You Up.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape03_SoundSet";
		};
	};
	class EZ_Cassette04: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Nocturne in C Sharp Minor.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape04_SoundSet";
		};
	};
	class EZ_Cassette05: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Spring Waltz.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape05_SoundSet";
		};
	};
	class EZ_Cassette06: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "The Wanderer.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape06_SoundSet";
		};
	};
	class EZ_Cassette07: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "What a Wonderful World.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape07_SoundSet";
		};
	};
	class EZ_Cassette08: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Y M C A.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape08_SoundSet";
		};
	};
	class EZ_Cassette09: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "It's A Man's Man's Man's World.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape09_SoundSet";
		};
	};
	class EZ_Cassette10: EZ_Cassette_ColorBase
	{
		scope = 2;
		descriptionShort = "Smells Like Teen Spirit.";
		class CfgEZCassette
		{
			soundSet = "EZ_RadioTape10_SoundSet";
		};
	};
};


class CfgSoundShaders
{
	class EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 70;
		volume = 1.0;
	};
	class EZ_CasseteTape01_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Hound-Dog.ogg",1}};
	};
	class EZ_CasseteTape02_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Moonlight-Sonata.ogg",1}};
	};
	class EZ_CasseteTape03_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Never-Gonna-Give-You-Up.ogg",1}};
	};
	class EZ_CasseteTape04_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Nocturne-in-C-Sharp-Minor.ogg",1}};
	};
	class EZ_CasseteTape05_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Spring-Waltz.ogg",1}};
	};
	class EZ_CasseteTape06_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\The-Wanderer.ogg",1}};
	};
	class EZ_CasseteTape07_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\What-a-Wonderful-World.ogg",1}};
	};
	class EZ_CasseteTape08_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Y-M-C-A.ogg",1}};
	};
	class EZ_CasseteTape09_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Its-A-Mans-Man-Mans-World.ogg",1}};
	};
	class EZ_CasseteTape10_Shader: EZ_Cassetteradio_SoundShader_Base
	{
		samples[] = {{"EZ_Clothing\data\Radio\audio\Smells-Like-Teen-Spirit.ogg",1}};
	};
};

class CfgSoundSets
{
	class EZ_RadioTape01_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape01_Shader"};
	};
	class EZ_RadioTape02_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape02_Shader"};
	};
	class EZ_RadioTape03_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape03_Shader"};
	};
	class EZ_RadioTape04_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape04_Shader"};
	};
	class EZ_RadioTape05_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape05_Shader"};
	};
	class EZ_RadioTape06_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape06_Shader"};
	};
	class EZ_RadioTape07_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape07_Shader"};
	};
	class EZ_RadioTape08_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape08_Shader"};
	};
	class EZ_RadioTape09_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape09_Shader"};
	};
	class EZ_RadioTape10_SoundSet
	{
		soundShaders[] = {"EZ_CasseteTape10_Shader"};
	};
};