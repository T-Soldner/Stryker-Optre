////////////////////////////////////////////////////////////////////
//DeRap: C:\Users\Tom\Downloads\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Mon Nov 21 17:09:05 2022 : 'file' last modified on Tue Jan 04 23:48:35 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PHFace
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
		class PHRP_SoldnerHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Soldner";
			texture = "PHFace\Data\Soldner_co.paa";
			material = "PHFace\Data\Soldner.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "PHFace\Data\soldner_tat_co.paa";
			textureHL2 = "PHFace\Data\soldner_tat_co.paa";
		};
		class PHRP_KazHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Kaz";
			texture = "PHFace\Data\kaz_co.paa";
			head = "KerryHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			material = "\A3\Characters_F\Heads\Data\m_White_06.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_05_injury.rvmat";
			textureHL = "PHFace\Data\kaz_tat_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			textureHL2 = "PHFace\Data\kaz_tat_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
		};
		class PHRP_MoonHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Moon";
			texture = "A3\Characters_F_Enoch\Heads\Data\m_livonianHead_4_co.paa";
			material = "\A3\Characters_F_Enoch\Heads\Data\m_livonianHead_4.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F_Enoch\Heads\Data\m_livonianHead_4_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Enoch\Heads\Data\m_livonianHead_4_injury.rvmat";
			textureHL = "PHFace\Data\moon_tat_co.paa";
			textureHL2 = "PHFace\Data\moon_tat_co.paa";
		};
		class PHRP_ColesonHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Coleson";
			texture = "\A3\Characters_F_Enoch\Heads\Data\m_russianHead_3_co.paa";
			material = "\A3\Characters_F_Enoch\Heads\Data\m_russianHead_3.rvmat";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialWounded1 = "A3\Characters_F_Enoch\Heads\Data\m_russianHead_3_injury.rvmat";
			materialWounded2 = "A3\Characters_F_Enoch\Heads\Data\m_russianHead_3_injury.rvmat";
			textureHL = "PHFace\Data\Coleson_tat_co.paa";
			textureHL2 = "PHFace\Data\Coleson_tat_co.paa";
		};
		class PHRP_OwesselHead : WhiteHead_01
		{
			disabled = 0;
			displayname = "Owessel";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			texture = "a3\Characters_F_Enoch\Heads\data\m_stype_co.paa";
			material = "a3\Characters_F_Enoch\Heads\data\m_stype.rvmat";
			materialWounded1 = "a3\Characters_F_Enoch\Heads\data\m_stype_injury.rvmat";
			materialWounded2 = "a3\Characters_F_Enoch\Heads\data\m_stype_injury.rvmat";
			textureHL = "PHFace\Data\owessel_tat_co.paa";
			textureHL2 = "PHFace\Data\owessel_tat_co.paa";
		};
		class WhiteHead_10;
		class PHRP_BlackburnHead : WhiteHead_10
		{
			disabled = 0;
			displayname = "Blackburn";
			head = "DefaultHead_A3";
			identityTypes[] = {};
			author = "Soldner";
			texture = "A3\Characters_F\Heads\data\m_White_10.paa";
			material = "A3\Characters_F\Heads\data\m_White_10.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\data\m_White_10_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\data\m_White_10_injury.rvmat";
			textureHL = "PHFace\Data\blackburn_tat_co.paa";
			textureHL2 = "PHFace\Data\blackburn_tat_co.paa";
		};
	};
};
