/*
	Author: Aaron Clark - EpochMod.com

    Contributors: Paul Tomany (.rtm Animation)

	Description:
	Adds custom animation "epoch_unarmed_jump"

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgMovesMaleSdr.hpp
*/
class CfgMovesBasic {
	class DefaultDie;
	class ManActions
 	{
		GestureSwing0 = "";
		GestureSwing1 = "";
		GestureSwing2 = "";
		GestureFinger = "";
		SledgeSwing = "";
 	};
	class Actions
	{
		class NoActions: ManActions
		{
			GestureSwing0[] = {"GestureSwing0","Gesture"};
			GestureSwing1[] = {"GestureSwing1","Gesture"};
			GestureSwing2[] = {"GestureSwing2","Gesture"};
			GestureFinger[] = {"GestureFinger","Gesture"};
			SledgeSwing[] = {"SledgeSwing","Gesture"};
		};
	};
};

class CfgMovesMaleSdr : CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States {
		class AovrPercMstpSnonWnonDf;
		class epoch_unarmed_jump : AovrPercMstpSnonWnonDf
		{
			file = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\un_jump.rtm";
			speed = 1.23849;
			forceaim = 1;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 0;
			canblendstep = 1;
			minPlayTime = 1;
			actions = "CivilRunActionsFL";
			InterpolateTo[] = { "AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon", 0.02, "AmovPercMrunSnonWnonDf", 0.02, "AmovPercMstpSnonWnonDnon", 0.06, "AmovPercMwlkSnonWnonDfl", 0.025, "AmovPercMrunSnonWnonDl", 0.025, "AmovPercMrunSnonWnonDfr", 0.025, "AmovPknlMrunSnonWnonDfl", 0.03, "AmovPercMevaSnonWnonDfl", 0.02, "Unconscious", 0.1 };
		};
	};
};
