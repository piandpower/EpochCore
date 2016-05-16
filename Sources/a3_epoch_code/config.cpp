/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Epoch Code Config

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/master/Sources/epoch_code/config.cpp
*/
class CfgPatches {
	class A3_epoch_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMods
{
	class Epoch
	{
		dir = "@epoch";
		name = "Epoch Mod";
		picture = "\x\addons\a3_epoch_assets\pictures\loadScreen_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.epochmod.com";
		version = "0.3.9.0";
		majorVersion = 0.3; //MUST BE A NUMBER!; Change this if we release a new major version, don't change if we push just push a hotfix
		ArmAVersion = 158;
		overview = "Open world survival mod set in the year 2035, Just two years after the mass extinction of billions of people. Those that remain are left with remnants of a once technological society. Try to survive, build, or explore your way through the harsh dynamic environment.";
	};
};
class Epoch
{
	class Version
	{
		//Version System, Check if PBO Version is compatible with Code
		A3_epoch_assets = "0.3.9.0";
		A3_epoch_assets_1 = "0.3.9.0";
		epoch_objects = "0.3.9.0";
		A3_epoch_assets_3 = "0.3.9.0";
		A3_epoch_config = "0.3.9.0";
		A3_epoch_language = "0.3.9.0";
		Underground_Epoch = "0.3.9.0";
		A3_epoch_vehicles = "0.3.9.0";
		a3_epoch_weapons = "0.3.9.0";
		a2_epoch_weapons = "0.3.9.0";
		a3_epoch_structures = "0.3.9.0";
		A3_epoch_functions = "0.3.9.0";
		A3_epoch_vehicles_1 = "0.3.9.0";
		Enhanced_Epoch_AiASupport = "0.3.9.0";
	};
};