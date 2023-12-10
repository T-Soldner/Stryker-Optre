////////////////////////////////////////////////////////////////////
//DeRap: C:\Users\Tom\Downloads\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Mon Nov 21 17:09:05 2022 : 'file' last modified on Tue Jan 04 23:48:35 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class StrykerFace
	{
		author = "Soldner";
		hideName = 0;
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_beta","A3_Characters_F_epa","A3_Characters_F_epb","A3_Characters_F_epc","A3_Characters_F_exp","A3_Characters_F_enoch"};
	};
};
class CfgFaces
{
	class Man_A3
	{
		class WhiteHead_01;
		class Stryker_SoldnerHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Soldner";
			texture = "StrykerFace\Data\Soldner_co.paa";
			material = "StrykerFace\Data\Soldner.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "StrykerFace\Data\soldner_tat_co.paa";
			textureHL2 = "StrykerFace\Data\soldner_tat_co.paa";
		};
	};
};
