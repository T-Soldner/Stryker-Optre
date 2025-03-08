class CfgPatches
{
	class Stryker_Faces
	{
		// Meta information for editor
		name = "Stryker Aux Mod";
		author = "Soldner";
		url = "https://discord.gg/Y6AtjkfaEW";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = 1.60;
		// Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
		// When any of the addons are missing, a pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Data_F_Decade_Loadorder" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
	};
};

class CfgFaces
{
	class Default {
		class Custom;
	};
	class Man_A3 : Default
	{
		class Default;
		/*class WhiteHead_01;
		class Stryker_SoldnerHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Soldner";
			texture = "BasiliskFace\Data\soldner_co.paa";
			material = "BasiliskFace\Data\soldner.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "BasiliskFace\Data\soldner_tat_co.paa";
			textureHL2 = "BasiliskFace\Data\soldner_tat_co.paa";
		};*/
		class Stryker_Aturr : Default {
			head = "Stryker_AturrHead";
			author = "Soldner";
			identityTypes[] = { "Woman","Head_Enoch_W","Head_Russian_W" };
			displayname = "Aturr";
			texture = "\StrykerFaces\data\hhl_valentinafit_co.paa";
			material = "\StrykerFaces\data\hhl_valentinafit.rvmat";
			materialWounded1 = "\StrykerFaces\data\hhl_valentinafit_injury.rvmat";
			materialWounded2 = "\StrykerFaces\data\hhl_valentinafit_injury.rvmat";

			textureHL = "\StrykerFaces\data\skin_4_co.paa";
			materialHL = "\StrykerFaces\data\hhl_woman_skin_4.rvmat";
			textureHL2 = "\StrykerFaces\data\skin_4_co.paa";
			materialHL2 = "\StrykerFaces\data\hhl_woman_skin_4.rvmat";
			disabled = 0;
			woman = 1;
		};
	};
};
class CfgHeads {
	class DefaultHead_A3;

	class Stryker_AturrHead : DefaultHead_A3 {
		model = "\StrykerFaces\data\m_sportswoman_ToH.p3d";
		selectionHeadWound = "injury_head";
		selectionPersonality = "personality";
	};
};
