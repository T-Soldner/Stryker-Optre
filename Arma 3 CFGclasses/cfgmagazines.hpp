class CfgMagazines
{
	class Default
	{
		scope=0;
		value=2;
		type=0;
		simulation="ProxyMagazines";
		model="";
		picture="";
		ammo="";
		count=1;
		displayName="";
		displayNameShort="";
		nameSound="";
		weight=0;
		maxLeadSpeed=50;
		initSpeed=100;
		reloadAction="";
		useAction=0;
		useActionTitle="";
		modelSpecial="";
		class InventoryPlacements
		{
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="";
		maxThrowHoldTime=2;
		minThrowIntensityCoef=0.30000001;
		maxThrowIntensityCoef=1.4;
		quickReload=0;
	};
	class FakeMagazine: Default
	{
		scope=1;
		ammo="FakeAmmo";
	};
	class FakeWeapon: FakeMagazine
	{
	};
	class CA_Magazine: Default
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		value=1;
		displayName="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="";
		modelSpecial="";
		useAction=0;
		useActionTitle="";
		reloadAction="";
		ammo="";
		count=30;
		type=256;
		initSpeed=900;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		maxLeadSpeed=25;
		weaponpoolavailable=1;
		mass=8;
	};
	class ACE_FakeMagazine: CA_Magazine
	{
		scopeCurator=1;
		descriptionShort="";
		displayName="";
		displayNameShort="";
		count=0;
	};
	class HandGrenade: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=10;
		scope=2;
		value=1;
		displayName="$STR_A3_CfgMagazines_HandGrenade0";
		picture="\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model="\A3\Weapons_f\ammo\Handgrenade";
		type=256;
		ammo="GrenadeHand";
		count=1;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=6.9444399;
		descriptionShort="$STR_A3_CfgMagazines_HandGrenade1";
		displayNameShort="$STR_A3_CfgMagazines_HandGrenade_dns";
	};
	class ACE_HandFlare_Base: HandGrenade
	{
		scope=1;
		value=2;
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		mass=4;
		initSpeed=22;
	};
	class ACE_HandFlare_White: ACE_HandFlare_Base
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		displayname="$STR_ace_grenades_M127A1_White_Name";
		descriptionShort="$STR_ace_grenades_M127A1_White_Description";
		displayNameShort="$STR_ace_grenades_M127A1_White_NameShort";
		model="\A3\weapons_f\ammo\flare_white";
		picture="\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		ammo="ACE_G_Handflare_White";
	};
	class ACE_HandFlare_Red: ACE_HandFlare_Base
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		displayname="$STR_ace_grenades_M127A1_Red_Name";
		descriptionShort="$STR_ace_grenades_M127A1_Red_Description";
		displayNameShort="$STR_ace_grenades_M127A1_Red_NameShort";
		model="\A3\weapons_f\ammo\flare_red";
		picture="\A3\Weapons_F\Data\UI\gear_flare_red_ca.paa";
		ammo="ACE_G_Handflare_Red";
	};
	class ACE_HandFlare_Green: ACE_HandFlare_Base
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		displayname="$STR_ace_grenades_M127A1_Green_Name";
		descriptionShort="$STR_ace_grenades_M127A1_Green_Description";
		displayNameShort="$STR_ace_grenades_M127A1_Green_NameShort";
		model="\A3\weapons_f\ammo\flare_green";
		picture="\A3\Weapons_F\Data\UI\gear_flare_green_ca.paa";
		ammo="ACE_G_Handflare_Green";
	};
	class ACE_HandFlare_Yellow: ACE_HandFlare_Base
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		displayname="$STR_ace_grenades_M127A1_Yellow_Name";
		descriptionShort="$STR_ace_grenades_M127A1_Yellow_Description";
		displayNameShort="$STR_ace_grenades_M127A1_Yellow_NameShort";
		model="\A3\weapons_f\ammo\flare_yellow";
		picture="\A3\Weapons_F\Data\UI\gear_flare_yellow_ca.paa";
		ammo="ACE_G_Handflare_Yellow";
	};
	class ACE_M84: HandGrenade
	{
		author="$STR_ace_common_ACETeam";
		displayname="$STR_ace_grenades_M84_Name";
		descriptionShort="$STR_ace_grenades_M84_Description";
		displayNameShort="$STR_ace_grenades_M84_NameShort";
		model="\z\ace\addons\grenades\models\ACE_m84.p3d";
		picture="\z\ace\addons\grenades\UI\ACE_m84_x_ca.paa";
		ammo="ACE_G_M84";
		mass=4;
	};
	class ACE_CTS9: HandGrenade
	{
		author="$STR_ace_common_ACETeam";
		displayname="$STR_ace_grenades_CTS9_Name";
		descriptionShort="$STR_ace_grenades_M84_Description";
		displayNameShort="$STR_ace_grenades_CTS9_NameShort";
		model="\z\ace\addons\grenades\models\ACE_CTS_9bang.p3d";
		picture="\z\ace\addons\grenades\UI\ace_cts9_x_ca.paa";
		ammo="ACE_G_CTS9";
		mass=4;
	};
	class SmokeShell: HandGrenade
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShell0";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_white";
		value=2;
		ammo="SmokeShell";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShell1";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
		mass=4;
		initSpeed=22;
	};
	class ACE_M14: SmokeShell
	{
		author="$STR_ace_common_ACETeam";
		displayname="$STR_ace_grenades_Incendiary_Name";
		descriptionShort="$STR_ace_grenades_Incendiary_Description";
		displayNameShort="$STR_ace_grenades_Incendiary_NameShort";
		model="\z\ace\addons\grenades\models\ace_anm14th3.p3d";
		picture="\z\ace\addons\grenades\UI\ace_anm14th3_x_ca.paa";
		ammo="ACE_G_M14";
		mass=4;
	};
	class 3Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flaregreen_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flaregreen_f1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass=12;
	};
	class 6Rnd_GreenSignal_F: 3Rnd_UGL_FlareGreen_F
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Sub_F_Signal_Green";
		count=6;
		displayName="$STR_A3_CfgMagazines_6Rnd_GreenSignal_F0";
		descriptionShort="$STR_A3_CfgMagazines_6Rnd_GreenSignal_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass=12;
		initSpeed=240;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
	};
	class 6Rnd_RedSignal_F: 6Rnd_GreenSignal_F
	{
		initSpeed=120;
		author="$STR_A3_Bohemia_Interactive";
		ammo="Sub_F_Signal_Red";
		displayName="$STR_A3_CfgMagazines_6Rnd_RedSignal_F0";
		descriptionShort="$STR_A3_CfgMagazines_6Rnd_RedSignal_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		picture="\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
	};
	class UGL_FlareWhite_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		type=16;
		displayName="$STR_A3_CfgMagazines_UGL_FlareWhite_F_test1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		ammo="F_40mm_White";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareWhite_F1";
		weaponPoolAvailable=1;
		mass=4;
	};
	class ACE_40mm_Flare_white: UGL_FlareWhite_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_40mm_Flare_white";
		displayName="$STR_ace_grenades_40mm_flare_white";
		descriptionShort="$STR_ace_grenades_parachute_flare_description";
	};
	class UGL_FlareRed_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareRed_F0";
		ammo="F_40mm_Red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareRed_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
	};
	class ACE_40mm_Flare_red: UGL_FlareRed_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_40mm_Flare_red";
		displayName="$STR_ace_grenades_40mm_flare_red";
		descriptionShort="$STR_ace_grenades_parachute_flare_description";
	};
	class UGL_FlareGreen_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo="F_40mm_Green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};
	class ACE_40mm_Flare_green: UGL_FlareGreen_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_40mm_Flare_green";
		displayName="$STR_ace_grenades_40mm_flare_green";
		descriptionShort="$STR_ace_grenades_parachute_flare_description";
	};
	class ACE_40mm_Flare_ir: UGL_FlareWhite_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_40mm_Flare_ir";
		displayName="$STR_ace_grenades_40mm_flare_ir";
		descriptionShort="$STR_ace_grenades_parachute_flare_ir_description";
	};
	class ACE_SatchelCharge_Remote_Mag_Throwable: CA_Magazine
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_SatchelCharge_Remote_Ammo_Thrown";
		scope=1;
		picture="\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model="\A3\Weapons_F\Explosives\satchel_i";
		displayNameShort="$STR_A3_cfgMagazines_PipeBomb0";
		descriptionShort="$STR_ace_grenades_SatchelCharge_Description";
		class Library
		{
			libTextDesc="$STR_ace_grenades_SatchelCharge_LibText";
		};
		type="2*      256";
		allowedSlots[]={901};
		value=5;
		mass=80;
		count=1;
		initSpeed=7.5;
		maxLeadSpeed=0;
		nameSound="satchelcharge";
		nameSoundWeapon="satchelcharge";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
		useAction=0;
		displayName="$STR_ace_realisticnames_SatchelChargeThrowable_Name";
	};
	class ACE_DemoCharge_Remote_Mag_Throwable: ACE_SatchelCharge_Remote_Mag_Throwable
	{
		ammo="ACE_DemoCharge_Remote_Ammo_Thrown";
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
		model="\A3\Weapons_F\explosives\c4_charge_small_d";
		displayNameShort="$STR_A3_cfgMagazines_DemoCharge0";
		descriptionShort="$STR_ace_grenades_SatchelCharge_Description";
		class Library
		{
			libTextDesc="$STR_ace_grenades_DemoCharge_LibText";
		};
		allowedSlots[]={901,701};
		mass=20;
		initSpeed=12.5;
		displayName="$STR_ace_realisticnames_DemoChargeThrowable_Name";
	};
	class 1Rnd_HE_Grenade_shell: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		type=16;
		displayName="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell0";
		displayNameShort="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture="\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo="G_40mm_HE";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
		mass=4;
		modelSpecial="\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
	};
	class ACE_HuntIR_M203: 1Rnd_HE_Grenade_shell
	{
		displayName="$STR_ace_huntir_magazine_displayName";
		displayNameShort="HuntIR";
		descriptionShort="";
		picture="\z\ace\addons\huntir\data\m_m1070_ca.paa";
		ammo="F_HuntIR";
	};
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		displayName="$STR_A3_CfgMagazines_12Rnd_PG_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_12Rnd_PG_missiles_dns";
		weight=72;
	};
	class 6Rnd_ACE_Hydra70_DAGR: 12Rnd_PG_missiles
	{
		ammo="ACE_Hydra70_DAGR";
		count=12;
		displayName="6 Round DAGR";
		displayNameShort="6 Round DAGR";
		descriptionShort="6 Round DAGR";
		weight=36;
	};
	class 12Rnd_ACE_Hydra70_DAGR: 6Rnd_ACE_Hydra70_DAGR
	{
		count=12;
		displayName="16 Round DAGR";
		displayNameShort="16 Round DAGR";
		descriptionShort="16 Round DAGR";
		weight=72;
	};
	class 24Rnd_ACE_Hydra70_DAGR: 6Rnd_ACE_Hydra70_DAGR
	{
		count=24;
		displayName="24 Round DAGR";
		displayNameShort="24 Round DAGR";
		descriptionShort="24 Round DAGR";
		weight=72;
	};
	class CA_LauncherMagazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		model="";
		value=5;
		type="2*		256";
		allowedSlots[]={901};
		count=1;
		initSpeed=5;
		picture="";
		nameSound="handgrenade";
	};
	class NLAW_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_NLAW0";
		descriptionShort="$STR_A3_CfgMagazines_NLAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="M_NLAW_AT_F";
		type="3 * 		256";
		picture="\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		modelSpecial="\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
		model="\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		initSpeed=40;
		maxLeadSpeed=27.7778;
		mass=80;
	};
	class ACE_SpareBarrel: CA_Magazine
	{
		displayName="$STR_ace_overheating_SpareBarrelName";
		author="$STR_ace_common_ACETeam";
		scope=2;
		descriptionshort="$STR_ace_overheating_SpareBarrelDescription";
		picture="\z\ace\addons\overheating\UI\spare_barrel_ca.paa";
		count=1;
		mass=60;
		ACE_isUnique=1;
	};
	class VehicleMagazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		type=0;
		reloadAction="";
		maxLeadSpeed=100;
		weaponPoolAvailable=0;
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		initSpeed=1120;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={-0.1,1};
		ammo="ACE_Gatling_30mm_Sub_CM51";
		displayName="$STR_ace_aircraft_GatlingDescriptionCM51";
		displayNameShort="$STR_ace_aircraft_GatlingDescriptionShortCM51";
		count=1170;
	};
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
	{
		displayName="$STR_ace_rearm_Mag_7Rnd_Rocket_04_HE_F";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGMAGAZINES_40RND_20MM_G_BELT_DNS";
		descriptionShort="$STR_A3_cfgMagazine_ShriekerHE_tooltip";
		ammo="Rocket_04_HE_F";
		count=7;
		initSpeed=44;
		maxLeadSpeed=41.666698;
		nameSound="rockets";
	};
	class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F
	{
		displayName="$STR_ace_rearm_Mag_7Rnd_Rocket_04_AP_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_TITAN_AP_DNS";
		descriptionShort="$STR_A3_cfgMagazine_ShriekerAP_tooltip";
		ammo="Rocket_04_AP_F";
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=24;
		ammo="M_PG_AT";
		displayName="$STR_A3_CfgMagazines_24Rnd_PG_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_24Rnd_PG_missiles_dns";
		descriptionShort="$STR_A3_cfgMagazine_DAGR_tooltip";
		initSpeed=0;
		maxLeadSpeed=41.666698;
		nameSound="missiles";
	};
	class 2000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2000;
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt1";
		displayNameMFDFormat="LMG";
	};
	class 5000Rnd_762x51_Belt: 2000Rnd_65x39_Belt
	{
		displayNameShort="7.62mm";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Minigun_Tracer_Red_splash";
		displayName="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt1";
		tracersEvery=1;
		count=5000;
		initSpeed=860;
		weight=128;
	};
	class 5000Rnd_762x51_Yellow_Belt: 5000Rnd_762x51_Belt
	{
		displayNameShort="7.62mm";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Minigun_Tracer_Yellow_splash";
	};
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		displayNameShort="12.7mm";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=500;
		ammo="B_127x99_Ball";
		initSpeed=910;
		maxLeadSpeed=36.111099;
		tracersEvery=4;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag1";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
	};
	class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Green";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		displayNameMFDFormat="П";
	};
	class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		displayNameMFDFormat="HMG";
	};
	class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Yellow";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
		displayNameMFDFormat="HMG";
	};
	class 200Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		displayNameShort="12.7mm";
		author="$STR_A3_Bohemia_Interactive";
		count=200;
		tracersEvery=3;
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag1";
	};
	class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Green";
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		displayNameMFDFormat="П";
	};
	class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		displayNameMFDFormat="HMG";
	};
	class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Yellow";
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
		displayNameMFDFormat="HMG";
	};
	class 100Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		displayNameShort="12.7mm";
		author="$STR_A3_Bohemia_Interactive";
		count=100;
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag1";
	};
	class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Green";
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Yellow";
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_40mm_G_belt: VehicleMagazine
	{
		displayNameShort="40mm HE";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="G_40mm_HEDP";
		initSpeed=241;
		maxLeadSpeed=25;
		nameSound="";
		count=200;
		displayName="$STR_A3_CfgMagazines_200Rnd_40mm_G_belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_40mm_G_belt1";
		muzzleImpulseFactor[]={0.1,0.1};
	};
	class 24Rnd_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=24;
		ammo="M_AT";
		displayName="$STR_A3_CfgMagazines_24Rnd_PuG_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_24Rnd_PuG_missiles_dns";
		descriptionShort="$STR_A3_cfgMagazine_DAR_tooltip";
		initSpeed=0;
		maxLeadSpeed=41.666698;
		nameSound="rockets";
		weight=144;
	};
	class 300Rnd_20mm_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="B_20mm";
		count=300;
		initSpeed=1030;
		maxLeadSpeed=83.333298;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 14Rnd_80mm_rockets: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_14Rnd_80mm_rockets0";
		displayNameShort="$STR_A3_CfgMagazines_14Rnd_80mm_rockets_dns";
		descriptionShort="$STR_A3_cfgMagazine_Skyfire_tooltip";
		ammo="R_80mm_HE";
		initSpeed=44;
		maxLeadSpeed=41.666698;
		count=14;
		nameSound="rockets";
	};
	class 250Rnd_30mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells0";
		displayNameShort="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_dns";
		ammo="B_30mm_HE";
		count=250;
		initSpeed=960;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		weight=126;
		muzzleImpulseFactor[]={1,4};
	};
	class 250Rnd_30mm_APDS_shells: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells0";
		displayNameShort="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns";
		ammo="B_30mm_AP";
		initSpeed=1120;
		muzzleImpulseFactor[]={0.5,2};
	};
	class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F
	{
		displayName="$STR_ace_rearm_Mag_20Rnd_Rocket_03_HE_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_40RND_20MM_G_BELT_DNS";
		descriptionShort="$STR_A3_cfgMagazine_TratnyrHE_tooltip";
		ammo="Rocket_03_HE_F";
		count=20;
	};
	class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F
	{
		displayName="$STR_ace_rearm_Mag_20Rnd_Rocket_03_AP_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_TITAN_AP_DNS";
		descriptionShort="$STR_A3_cfgMagazine_TratnyrAP_tooltip";
		ammo="Rocket_03_AP_F";
		count=20;
	};
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		displayName="$STR_ace_rearm_Mag_500Rnd_Cannon_30mm_Plane_CAS_02_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="";
		ammo="Cannon_30mm_HE_Plane_CAS_02_F";
		count=500;
		muzzleImpulseFactor[]={-0.025,0.25};
	};
	class 680Rnd_35mm_AA_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells0";
		displayNameShort="$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells_dns";
		ammo="B_35mm_AA";
		count=680;
		initSpeed=1440;
		maxLeadSpeed=416.66699;
		tracersEvery=3;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,4};
	};
	class 680Rnd_35mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells
	{
		displayNameShort="35mm HEI-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_35mm_AA_Tracer_Red";
		displayNameMFDFormat="AA SHELLS";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells
	{
		displayNameShort="35mm HEI-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_35mm_AA_Tracer_Green";
		displayNameMFDFormat="ОФЗТ";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells
	{
		displayNameShort="35mm HEI-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_35mm_AA_Tracer_Yellow";
	};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		initSpeed=810;
		displayNameShort="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		scope=2;
		displayName="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0";
		displayNameMFDFormat="HE";
		ammo="Sh_155mm_AMOS";
		count=32;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,30};
	};
	class 6Rnd_155mm_Mo_smoke: 32Rnd_155mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=6;
		ammo="Smoke_120mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
		displayNameMFDFormat="SMOKE";
	};
	class 6Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Mine_155mm_AMOS_range";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
		displayNameMFDFormat="MINE";
	};
	class 6Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="AT_Mine_155mm_AMOS_range";
		displayName="$STR_A3_at_mine_cluster_0";
		displayNameShort="$STR_A3_at_mine_cluster_0";
		displayNameMFDFormat="AT MINE";
	};
	class 2Rnd_155mm_Mo_Cluster: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		ammo="Cluster_155mm_AMOS";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
		displayNameMFDFormat="CLUSTER";
	};
	class 2Rnd_155mm_Mo_guided: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		ammo="Sh_155mm_AMOS_guided";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0";
		displayNameMFDFormat="GUIDED";
	};
	class 2Rnd_155mm_Mo_LG: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		ammo="Sh_155mm_AMOS_LG";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameMFDFormat="LASER GUID";
	};
	class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets
	{
		displayNameShort="227mm HE";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_230mm_rockets0";
		displayNameMFDFormat="AG";
		ammo="R_230mm_HE";
		initSpeed=850;
		count=12;
	};
	class 30Rnd_120mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		displayNameShort="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
		ammo="Sh_120mm_HE";
		count=30;
		initSpeed=1410;
		maxLeadSpeed=25;
		tracersEvery=0;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,6};
	};
	class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort="$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		displayNameMFDFormat="HE";
		ammo="Sh_120mm_HE_Tracer_Red";
		tracersEvery=1;
	};
	class 30Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort="$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		ammo="Sh_120mm_HE_Tracer_Green";
		tracersEvery=1;
	};
	class 30Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameShort="$STR_A3_CFGMAGAZINES_120MMHE_DNS";
		displayNameMFDFormat="HE";
		ammo="Sh_120mm_HE_Tracer_Yellow";
		tracersEvery=1;
	};
	class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDS";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD0";
		ammo="Sh_120mm_APFSDS";
		initSpeed=1680;
		muzzleImpulseFactor[]={0.5,3};
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat="APDS";
		ammo="Sh_120mm_APFSDS_Tracer_Red";
		tracersEvery=1;
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="Sh_120mm_APFSDS_Tracer_Green";
		tracersEvery=1;
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat="APDS";
		ammo="Sh_120mm_APFSDS_Tracer_Yellow";
		tracersEvery=1;
	};
	class 200Rnd_762x51_Belt: VehicleMagazine
	{
		displayNameShort="7.62mm";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=200;
		ammo="B_762x51_Ball";
		initSpeed=860;
		maxLeadSpeed=36.111099;
		tracersEvery=5;
		lastRoundsTracer=4;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt1";
		displayNameMFDFormat="COAX";
	};
	class 200Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Red";
	};
	class 200Rnd_762x51_Belt_Green: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Green";
		displayNameMFDFormat="П";
	};
	class 200Rnd_762x51_Belt_Yellow: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Yellow";
	};
	class 200Rnd_762x51_Belt_T_Red: 200Rnd_762x51_Belt_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_762x51_Belt_T_Green: 200Rnd_762x51_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_762x51_Belt_T_Yellow: 200Rnd_762x51_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_762x51_Belt_Red: 2000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Red";
	};
	class 2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_762x51_Belt_Green: 2000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Green";
		displayNameMFDFormat="П";
	};
	class 2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_762x51_Belt_Yellow: 2000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Yellow";
		displayNameMFDFormat="LMG";
	};
	class 2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_762x51_Belt_Red: 1000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Red";
	};
	class 1000Rnd_762x51_Belt_T_Red: 1000Rnd_762x51_Belt_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_762x51_Belt_Green: 1000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Green";
		displayNameMFDFormat="П";
	};
	class 1000Rnd_762x51_Belt_T_Green: 1000Rnd_762x51_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_762x51_Belt_Yellow: 1000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Yellow";
		displayNameMFDFormat="LMG";
	};
	class 1000Rnd_762x51_Belt_T_Yellow: 1000Rnd_762x51_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 16Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 12Rnd_125mm_HE: 16Rnd_120mm_HE_shells
	{
		displayNameShort="125mm HE";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE0";
		ammo="Sh_125mm_HE";
		count=12;
		initSpeed=850;
		muzzleImpulseFactor[]={1,8};
	};
	class 16Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 12Rnd_125mm_HE_T_Red: 16Rnd_120mm_HE_shells_Tracer_Red
	{
		displayNameShort="125mm HE-T";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo="Sh_125mm_HE_T_Red";
		count=12;
		initSpeed=850;
		muzzleImpulseFactor[]={1,8};
	};
	class 16Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 12Rnd_125mm_HE_T_Green: 16Rnd_120mm_HE_shells_Tracer_Green
	{
		displayNameShort="125mm HE-T";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo="Sh_125mm_HE_T_Green";
		count=12;
		initSpeed=850;
		displayNameMFDFormat="О";
		muzzleImpulseFactor[]={1,8};
	};
	class 16Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 12Rnd_125mm_HE_T_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow
	{
		displayNameShort="125mm HE-T";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo="Sh_125mm_HE_T_Yellow";
		count=12;
		initSpeed=850;
	};
	class 12Rnd_125mm_HEAT: 12Rnd_125mm_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT0";
		displayNameShort="$STR_A3_HEAT_0";
		ammo="Sh_125mm_HEAT";
		initSpeed=915;
		muzzleImpulseFactor[]={0.5,3};
	};
	class 12Rnd_125mm_HEAT_T_Red: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		displayNameShort="$STR_A3_HEAT_T0";
		ammo="Sh_125mm_HEAT_T_Red";
		tracersEvery=1;
	};
	class 12Rnd_125mm_HEAT_T_Green: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		displayNameShort="$STR_A3_HEAT_T0";
		ammo="Sh_125mm_HEAT_T_Green";
		tracersEvery=1;
		displayNameMFDFormat="К";
	};
	class 12Rnd_125mm_HEAT_T_Yellow: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		displayNameShort="$STR_A3_HEAT_T0";
		ammo="Sh_125mm_HEAT_T_Yellow";
		tracersEvery=1;
	};
	class 20Rnd_125mm_APFSDS: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		displayNameShort="$STR_A3_cfgmagazines_apfsd_t0";
		ammo="Sh_125mm_APFSDS";
		initSpeed=1700;
		count=20;
		maxLeadSpeed=25;
		tracersEvery=0;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,4};
	};
	class 24Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		displayNameShort="125mm AP";
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
	};
	class 20Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		ammo="Sh_125mm_APFSDS_T_Red";
		count=20;
		tracersEvery=1;
	};
	class 24Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		displayNameShort="125mm AP-T";
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
	};
	class 20Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		displayNameMFDFormat="БР";
		ammo="Sh_125mm_APFSDS_T_Green";
		count=20;
		tracersEvery=1;
	};
	class 24Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		displayNameShort="125mm AP-T";
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
	};
	class 20Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		ammo="Sh_125mm_APFSDS_T_Yellow";
		count=20;
		tracersEvery=1;
	};
	class 24Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		displayNameShort="125mm AP-T";
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
	};
	class 20Rnd_105mm_HEAT_MP: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_20RND_105MM_HEAT0";
		displayNameShort="$STR_A3_CFGMAGAZINES_HEAT_MP0";
		ammo="Sh_105mm_HEAT_MP";
		initSpeed=1330;
		count=20;
		muzzleImpulseFactor[]={0.5,3};
	};
	class 20Rnd_105mm_HEAT_MP_T_Red: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameShort="$STR_A3_CFGMAGAZINES_HEAT_MP_T0";
		displayNameMFDFormat="HEAT-MP-T";
		ammo="Sh_105mm_HEAT_MP_T_Red";
		tracersEvery=1;
	};
	class 20Rnd_105mm_HEAT_MP_T_Green: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameShort="$STR_A3_CFGMAGAZINES_HEAT_MP_T0";
		ammo="Sh_105mm_HEAT_MP_T_Green";
		tracersEvery=1;
	};
	class 20Rnd_105mm_HEAT_MP_T_Yellow: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameShort="$STR_A3_CFGMAGAZINES_HEAT_MP_T0";
		ammo="Sh_105mm_HEAT_MP_T_Yellow";
		tracersEvery=1;
	};
	class 40Rnd_105mm_APFSDS: 24Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS0";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="Sh_105mm_APFSDS";
		initSpeed=1505;
		count=40;
		muzzleImpulseFactor[]={0.5,3};
	};
	class 40Rnd_105mm_APFSDS_T_Red: 40Rnd_105mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat="APFSDS-T";
		ammo="Sh_105mm_APFSDS_T_Red";
		tracersEvery=1;
	};
	class 40Rnd_105mm_APFSDS_T_Green: 40Rnd_105mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="Sh_105mm_APFSDS_T_Green";
		tracersEvery=1;
	};
	class 40Rnd_105mm_APFSDS_T_Yellow: 40Rnd_105mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD0";
		ammo="Sh_105mm_APFSDS_T_Yellow";
		tracersEvery=1;
	};
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CFGMAGAZINES_40MMGPR";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPR";
		ammo="B_40mm_GPR";
		count=60;
		initSpeed=1035;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
	};
	class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPRT";
		ammo="B_40mm_GPR_Tracer_Red";
		displayNameMFDFormat="GPR-T";
	};
	class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPRT";
		ammo="B_40mm_GPR_Tracer_Green";
	};
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		displayNameShort="$STR_A3_CFGMAGAZINES_GPRT";
		ammo="B_40mm_GPR_Tracer_Yellow";
	};
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MM_APFSD";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD0";
		ammo="B_40mm_APFSDS";
		initSpeed=1600;
		count=40;
		muzzleImpulseFactor[]={0.5,2};
	};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_40mm_APFSDS_Tracer_Red_shells0";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="B_40mm_APFSDS_Tracer_Red";
		count=40;
		displayNameMFDFormat="APFSDS-T";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayNameShort="40mm AP-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_40mm_APFSDS_Tracer_Green";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		displayNameShort="40mm AP-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_40mm_APFSDS_Tracer_Yellow";
	};
	class 450Rnd_127x108_Ball: VehicleMagazine
	{
		displayNameShort="12.7mm";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=450;
		ammo="B_127x108_Ball";
		initSpeed=845;
		maxLeadSpeed=36.111099;
		tracersEvery=4;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_450Rnd_127x108_Ball0";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
	};
	class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_0";
		displayNameShort="$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_DNS";
		ammo="B_30mm_MP";
		initSpeed=1070;
		count=140;
	};
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_140Rnd_30mm_MP_shells_Tracer_Red0";
		ammo="B_30mm_MP_Tracer_Red";
		displaynameshort="$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_TRACER_RED_DNS";
		count=140;
		displayNameMFDFormat="ОФ";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayNameShort="30mm MP-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_30mm_MP_Tracer_Green";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayNameShort="30mm MP-T";
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_30mm_MP_Tracer_Yellow";
		displayNameMFDFormat="MP-T";
	};
	class 60Rnd_30mm_APFSDS_shells: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MM_APFSD";
		displayNameShort="$STR_A3_CFGMAGAZINES_APFSD0";
		ammo="B_30mm_APFSDS";
		initSpeed=1430;
		count=60;
		muzzleImpulseFactor[]={0.5,2};
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MMAPDSFT";
		displaynameshort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="B_30mm_APFSDS_Tracer_Red";
		tracersEvery=1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MM_APFSD";
		displaynameshort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		displayNameMFDFormat="БР";
		ammo="B_30mm_APFSDS_Tracer_Green";
		tracersEvery=1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MMAPDSFT";
		displaynameshort="$STR_A3_CFGMAGAZINES_APFSD_T0";
		ammo="B_30mm_APFSDS_Tracer_Yellow";
		tracersEvery=1;
		displayNameMFDFormat="APFSDS-T";
	};
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		displayNameShort="20mm HE";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="G_20mm_HE";
		initSpeed=400;
		maxLeadSpeed=25;
		nameSound="";
		count=200;
		displayName="$STR_A3_CfgMagazines_200Rnd_20mm_G_belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_20mm_G_belt1";
		muzzleImpulseFactor[]={0.1,0.1};
	};
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=40;
		displayName="$STR_A3_CfgMagazines_40Rnd_20mm_G_belt0";
		displayNameShort="$STR_A3_CfgMagazines_40Rnd_20mm_G_belt_dns";
		descriptionShort="$STR_A3_CfgMagazines_40Rnd_20mm_G_belt1";
	};
	class ATMine_Range_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=80;
		displayName="$STR_A3_CfgMagazines_Mine0";
		descriptionUse="$STR_A3_cfgMagazines_ATMine_Range_Mag0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		model="\A3\Weapons_f\Explosives\mine_at_i";
		useActionTitle="$STR_ACTION_PUTBOMB";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="ATMine_Range_Ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="$STR_A3_cfgMagazines_Mine1";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_ATMine";
		ace_explosives_DelayTime=2.5;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.059999999;
			};
		};
	};
	class APERSMine_Range_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=10;
		ammo="APERSMine_Range_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_CA.paa";
		displayName="$STR_A3_cfgMagazines_ClassicMineRangeMagazine0";
		model="\A3\Weapons_F\explosives\mine_ap_i";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.02;
			};
		};
	};
	class APERSBoundingMine_Range_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		ammo="APERSBoundingMine_Range_Ammo";
		displayName="$STR_A3_cfgMagazines_BouncingMineRangeMagazine0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_bouncing_i";
		descriptionShort="$STR_A3_cfgMagazines_BouncingMineRangeMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_BouncingMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSBoundingMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.079999998;
			};
		};
	};
	class APERSTripMine_Wire_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		ammo="APERSTripMine_Wire_Ammo";
		displayName="$STR_A3_cfgMagazines_ClassicMineWireMagazine0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_tripwire_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_tripwire_i";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSTripwireMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Tripwire"
			};
			class Tripwire
			{
			};
		};
	};
	class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		ammo="SLAMDirectionalMine_Wire_Ammo";
		displayName="$STR_A3_cfgMagazines_DirectionalMineRangeMagazine0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_SLAM_directional_CA.paa";
		model="\A3\Weapons_F\Explosives\mine_SLAM_directional_i";
		descriptionShort="$STR_A3_cfgMagazines_DirectionalMineRangeMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DirectionalMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_SLAM";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"IRSensor",
				"PressurePlate",
				"Timer",
				"Command",
				"MK16_Transmitter"
			};
			class PressurePlate
			{
				displayName="$STR_ace_explosives_SLAME_Magnetic";
				digDistance=0;
				ammo="ACE_SLAMDirectionalMine_Magnetic_Ammo";
				pitch=90;
			};
			class IRSensor
			{
				displayName="$STR_ace_explosives_SLAME_IRSensor";
			};
			class Timer
			{
				ammo="ACE_SLAMDirectionalMine_Timer_Ammo";
			};
			class Command
			{
				ammo="ACE_SLAMDirectionalMine_Command_Ammo";
				fuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
	};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=20;
		ammo="ClaymoreDirectionalMine_Remote_Ammo";
		displayName="$STR_A3_cfgMagazines_DirectionalMineRemoteMagazine0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_miniclaymore_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_miniclaymore_i";
		nameSoundWeapon="mine";
		type="2*		256";
		value=5;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSound="mine";
		useActionTitle="$STR_ACTION_PUTBOMB";
		descriptionShort="$STR_A3_cfgMagazines_DirectionalMineRemoteMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DirectionalMineRemoteMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_Claymore";
		ace_explosives_DelayTime=1.5;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"MK16_Transmitter"
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
	};
	class SatchelCharge_Remote_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_cfgMagazines_PipeBomb0";
		picture="\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model="\A3\Weapons_F\Explosives\satchel_i";
		descriptionShort="$STR_A3_cfgMagazines_PipeBomb1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_PipeBomb_Library0";
		};
		descriptionUse="$STR_A3_use_charge";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="SatchelCharge_Remote_Ammo";
		mass=80;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_SatchelCharge";
		ace_explosives_DelayTime=1;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter",
				"DeadmanSwitch"
			};
			class Timer
			{
				FuseTime=0.5;
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
			class DeadmanSwitch: Command
			{
			};
		};
	};
	class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=20;
		displayName="$STR_A3_cfgMagazines_DemoCharge0";
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
		ammo="DemoCharge_Remote_Ammo";
		descriptionShort="$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_DemoCharge";
		model="\A3\Weapons_F\explosives\c4_charge_small_d";
	};
	class MiniGrenade: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=6;
		scope=2;
		value=1;
		displayName="$STR_A3_CfgMagazines_MiniGrenade0";
		model="\A3\Weapons_f\ammo\mini_frag";
		picture="\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		type=256;
		ammo="mini_Grenade";
		count=1;
		initSpeed=26;
		nameSound="handgrenade";
		maxLeadSpeed=6.9444399;
		descriptionShort="$STR_A3_CfgMagazines_MiniGrenade1";
		displayNameShort="$STR_A3_CfgMagazines_MiniGrenade_dns";
	};
	class SmokeShellBlue: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShellBlue0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellBlue_dns";
		ammo="SmokeShellBlue";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_blue";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellBlue1";
	};
	class SmokeShellGreen: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShellGreen0";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLGREEN_DNS";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_green";
		ammo="SmokeShellGreen";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellGreen1";
	};
	class SmokeShellOrange: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShellOrange0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellOrange_dns";
		ammo="SmokeShellOrange";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_orange";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellOrange1";
	};
	class SmokeShellPurple: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShellPurple0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellPurple_dns";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_purple";
		ammo="SmokeShellPurple";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellPurple1";
	};
	class SmokeShellRed: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShellRed0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellRed_dns";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_red";
		ammo="SmokeShellRed";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellRed1";
	};
	class SmokeShellYellow: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SmokeShellYellow0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellYellow_dns";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_yellow";
		ammo="SmokeShellYellow";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellYellow1";
	};
	class 50Rnd_570x28_SMG_03: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_50Rnd_570x28_SMG_031";
		ammo="B_570x28_Ball";
		count=50;
		initSpeed=715;
		picture="\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
		tracersEvery=0;
		descriptionShort="$STR_A3_CfgMagazines_50Rnd_570x28_SMG_032";
		mass=12;
	};
	class 2Rnd_Missile_AA_04_F: VehicleMagazine
	{
		displayName="$STR_ace_rearm_Mag_2Rnd_Missile_AA_04_F";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGMAGAZINES_4RND_AAA_MISSILES_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Falchion22_tooltip";
		ammo="Missile_AA_04_F";
		count=2;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class PylonRack_1Rnd_Missile_AA_04_F: 2Rnd_Missile_AA_04_F
	{
		displayName="$STR_A3_Missile_AA_04_Plane_CAS_01_F0";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AA_04_Plane_CAS_01_F";
		mass=125;
	};
	class 4Rnd_AAA_missiles: 2Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_AAA_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_4Rnd_AAA_missiles_dns";
		count=4;
		weight=360;
	};
	class PylonRack_1Rnd_AAA_missiles: 4Rnd_AAA_missiles
	{
		displayName="$STR_A3_missiles_ASRAAM0";
		count=1;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_ASRRAM_EJECTOR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="missiles_ASRAAM";
		mass=128;
	};
	class 4Rnd_GAA_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_GAA_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_4Rnd_GAA_missiles_dns";
		descriptionShort="$STR_A3_cfgMagazine_Zephyr_tooltip";
		count=4;
		ammo="M_Zephyr";
		initSpeed=25;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class PylonRack_1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		displayName="$STR_A3_missiles_Zephyr0";
		count=1;
		hardpoints[]=
		{
			"B_ZEPHYR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="missiles_Zephyr";
		mass=192;
	};
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine
	{
		displayName="$STR_ace_rearm_Mag_6Rnd_Missile_AGM_02_F";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGMAGAZINES_38RND_80MM_ROCKETS_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Macer_tooltip";
		ammo="Missile_AGM_02_F";
		count=6;
		initSpeed=0;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class PylonRack_1Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F
	{
		displayName="$STR_A3_PylonRack_1Rnd_Missile_AGM_02_F0";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		count=1;
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AGM_02_Plane_CAS_01_F";
		mass=361;
	};
	class PylonRack_3Rnd_Missile_AGM_02_F: PylonRack_1Rnd_Missile_AGM_02_F
	{
		displayName="$STR_A3_PylonRack_3Rnd_Missile_AGM_02_F0";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
		count=3;
		mirrorMissilesIndexes[]={2,1,3};
		mass=1020;
	};
	class magazine_Missile_AGM_02_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AGM_65_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AGM_65_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_Macer_tooltip";
		ammo="Missile_AGM_02_F";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_65_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		hardpoints[]=
		{
			"B_AGM65",
			"I_AGM65"
		};
		pylonWeapon="weapon_AGM_65Launcher";
	};
	class PylonMissile_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AGM_65_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x2_F";
		hardpoints[]=
		{
			"B_AGM65_DUAL",
			"I_AGM65_DUAL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_65_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		hardpoints[]=
		{
			"B_AGM65_RAIL",
			"I_AGM65_RAIL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
	};
	class PylonRack_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AGM_65_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AGM65_DUAL_RAIL",
			"I_AGM65_DUAL_RAIL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class 2Rnd_LG_scalpel: 8Rnd_LG_scalpel
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
	};
	class PylonRack_1Rnd_LG_scalpel: 2Rnd_LG_scalpel
	{
		displayName="$STR_A3_PylonRack_1Rnd_LG_scalpel0";
		count=1;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="missiles_SCALPEL";
		mass=110;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_3Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL"
		};
		count=3;
		displayName="$STR_A3_PylonRack_3Rnd_LG_scalpel0";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mass=300;
		mirrorMissilesIndexes[]={2,1,3};
		class mfdElements: mfdElements
		{
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={-0,0.029999999};
					};
					class R2: Center
					{
						pos[]={-0.0125,-0.0099999998};
					};
					class R3: Center
					{
						pos[]={0.0125,-0.0099999998};
					};
					class R4: Center
					{
						pos[]={0.0125,-0.0099999998};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=3";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									
									{
										"R1",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0089999996,0},
										1
									},
									
									{
										"R1",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{0,0.01125},
										1
									},
									
									{
										"R1",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0089999996,0},
										1
									},
									
									{
										"R1",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									
									{
										"R2",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0089999996,0},
										1
									},
									
									{
										"R2",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{0,0.01125},
										1
									},
									
									{
										"R2",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0089999996,0},
										1
									},
									
									{
										"R2",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile3
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									
									{
										"R3",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0089999996,0},
										1
									},
									
									{
										"R3",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{0,0.01125},
										1
									},
									
									{
										"R3",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0089999996,0},
										1
									},
									
									{
										"R3",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class PylonText1: PylonText1
						{
						};
						class Missile1: Missile1
						{
							condition="PylonAmmo>=3";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							condition="(PylonAmmo>=2)-(PylonAmmo>=3)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile3: Missile3
						{
							condition="(PylonAmmo>=1)-(PylonAmmo>=2)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=2";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile3: Missile3
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_4Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		count=4;
		displayName="$STR_A3_PylonRack_4Rnd_LG_scalpel0";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mass=370;
		mirrorMissilesIndexes[]={2,1,4,3};
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"SCALPEL_4RND"
		};
		class mfdElements: mfdElements
		{
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={-0.0125,0.029999999};
					};
					class R2: Center
					{
						pos[]={0.0125,0.029999999};
					};
					class R3: Center
					{
						pos[]={-0.0125,-0.0099999998};
					};
					class R4: Center
					{
						pos[]={0.0125,-0.0099999998};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=4";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									
									{
										"R1",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0089999996,0},
										1
									},
									
									{
										"R1",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{0,0.01125},
										1
									},
									
									{
										"R1",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0089999996,0},
										1
									},
									
									{
										"R1",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=3";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									
									{
										"R2",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0089999996,0},
										1
									},
									
									{
										"R2",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{0,0.01125},
										1
									},
									
									{
										"R2",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0089999996,0},
										1
									},
									
									{
										"R2",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile3
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									
									{
										"R3",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0089999996,0},
										1
									},
									
									{
										"R3",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{0,0.01125},
										1
									},
									
									{
										"R3",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0089999996,0},
										1
									},
									
									{
										"R3",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile4
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R4",
										{0,-0.01125},
										1
									},
									
									{
										"R4",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R4",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R4",
										{0.0089999996,0},
										1
									},
									
									{
										"R4",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R4",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R4",
										{0,0.01125},
										1
									},
									
									{
										"R4",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R4",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R4",
										{-0.0089999996,0},
										1
									},
									
									{
										"R4",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R4",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R4",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R4",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R4",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R4",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R4",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R4",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R4",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R4",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R4",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class PylonText1: PylonText1
						{
						};
						class Missile1: Missile1
						{
							condition="PylonAmmo>=4";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							condition="(PylonAmmo>=3)-(PylonAmmo>=4)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile3: Missile3
						{
							condition="(PylonAmmo>=2)-(PylonAmmo>=3)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile4: Missile4
						{
							condition="(PylonAmmo>=1)-(PylonAmmo>=2)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R4",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R4",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R4",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R4",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R4",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R4",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R4",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R4",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=3";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=2";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile3: Missile3
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile4: Missile4
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_7Rnd_Rocket_04_HE_F: 7Rnd_Rocket_04_HE_F
	{
		displayName="$STR_A3_PylonRack_7Rnd_Rocket_04_HE_F0";
		count=7;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_SHIEKER"
		};
		pylonWeapon="Rocket_04_HE_Plane_CAS_01_F";
		mass=88.300003;
	};
	class PylonRack_7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F
	{
		displayName="$STR_A3_PylonRack_7Rnd_Rocket_04_AP_F0";
		count=7;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_SHIEKER"
		};
		pylonWeapon="Rocket_04_AP_Plane_CAS_01_F";
		mass=88.300003;
	};
	class 12Rnd_missiles: 24Rnd_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
	};
	class PylonRack_12Rnd_missiles: 12Rnd_missiles
	{
		displayName="$STR_A3_missiles_dar0";
		count=12;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_12x_Rocket_DAR_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"DAR"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="missiles_DAR";
		mass=140;
	};
	class PylonRack_20Rnd_Rocket_03_HE_F: 20Rnd_Rocket_03_HE_F
	{
		displayName="$STR_A3_PylonRack_20Rnd_Rocket_03_HE_F0";
		count=20;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Rocket_03_HE_Plane_CAS_02_F";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								
								{
									"R1",
									{0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{0.024,0},
									1
								},
								
								{
									"R1",
									{0.020784,0.015},
									1
								},
								
								{
									"R1",
									{0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{0,0.029999999},
									1
								},
								
								{
									"R1",
									{-0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{-0.020784,0.015},
									1
								},
								
								{
									"R1",
									{-0.024,0},
									1
								},
								
								{
									"R1",
									{-0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{-0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
	};
	class PylonRack_20Rnd_Rocket_03_AP_F: 20Rnd_Rocket_03_AP_F
	{
		displayName="$STR_A3_PylonRack_20Rnd_Rocket_03_AP_F0";
		count=20;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Rocket_03_AP_Plane_CAS_02_F";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								
								{
									"R1",
									{0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{0.024,0},
									1
								},
								
								{
									"R1",
									{0.020784,0.015},
									1
								},
								
								{
									"R1",
									{0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{0,0.029999999},
									1
								},
								
								{
									"R1",
									{-0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{-0.020784,0.015},
									1
								},
								
								{
									"R1",
									{-0.024,0},
									1
								},
								
								{
									"R1",
									{-0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{-0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
	};
	class 2Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_04_F
	{
		displayName="$STR_ace_rearm_Mag_2Rnd_Missile_AA_03_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_4RND_AAA_MISSILES_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Sahr3_tooltip";
		ammo="Missile_AA_03_F";
		count=2;
	};
	class PylonRack_1Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_03_F
	{
		displayName="$STR_A3_MISSILE_AA_03_F0";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_03_F.p3d";
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AA_03_Plane_CAS_02_F";
		mass=125;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.13},
										1
									},
									
									{
										{0.17,0.13},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								
								{
									"R1",
									{0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{0.011,0},
									1
								},
								
								{
									"R1",
									{0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{0,0.01375},
									1
								},
								
								{
									"R1",
									{-0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{-0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{-0.011,0},
									1
								},
								
								{
									"R1",
									{-0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{-0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,-0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,-0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781798,-0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,-0.0203293},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AA";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,-0.0097227199},
										1
									},
									
									{
										"R1",
										{0.011,6.01032e-010},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-9.6165098e-010,0.01375},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-0.011,-1.6396701e-010},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									},
									
									{
										"R1",
										{1.9233e-009,-0.01375},
										1
									},
									
									{
										"R1",
										{0.0077781798,-0.0097227097},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class 4Rnd_Missile_AGM_01_F: 6Rnd_Missile_AGM_02_F
	{
		displayName="$STR_ace_rearm_Mag_4Rnd_Missile_AGM_01_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_38RND_80MM_ROCKETS_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Sharur_tooltip";
		ammo="Missile_AGM_01_F";
		count=4;
	};
	class PylonRack_1Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F
	{
		displayName="$STR_A3_MISSILE_AGM_01_F0";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_01_F.p3d";
		count=1;
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AGM_01_Plane_CAS_02_F";
		mass=361;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_agm_01_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								
								{
									"R1",
									{0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{0.015,0},
									1
								},
								
								{
									"R1",
									{0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{0,0.018750001},
									1
								},
								
								{
									"R1",
									{-0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{-0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.015,0},
									1
								},
								
								{
									"R1",
									{-0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,-0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,-0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{-0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,-0.0132582},
									1
								},
								
								{
									"R1",
									{-0.0176777,-0.0220971},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									
									{
										"R1",
										{0.015,8.1958901e-010},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-1.31134e-009,0.018750001},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-0.015,-2.2359201e-010},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									
									{
										"R1",
										{2.6226801e-009,-0.018750001},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132582},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class 2Rnd_Bomb_03_F: 4Rnd_Bomb_04_F
	{
		displayName="$STR_ace_rearm_Mag_2Rnd_Bomb_03_F";
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGVEHICLES_BOMB0";
		descriptionShort="$STR_A3_cfgMagazine_LOM250_tooltip";
		ammo="Bomb_03_F";
		count=2;
	};
	class PylonMissile_1Rnd_Bomb_03_F: 2Rnd_Bomb_03_F
	{
		displayName="$STR_A3_Bomb_03_F0";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_03_F.p3d";
		hardpoints[]=
		{
			"O_BOMB_PYLON",
			"O_BOMB_PYLON_HELI"
		};
		pylonWeapon="Bomb_03_Plane_CAS_02_F";
		mass=250;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.17,0.1},
										1
									},
									
									{
										{0.17,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_bomb_03_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								
								{
									"R1",
									{0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{0.015,0},
									1
								},
								
								{
									"R1",
									{0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{0,0.018750001},
									1
								},
								
								{
									"R1",
									{-0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{-0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.015,0},
									1
								},
								
								{
									"R1",
									{-0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,-0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,-0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{-0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,-0.0132582},
									1
								},
								
								{
									"R1",
									{-0.0176777,-0.0220971},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									
									{
										"R1",
										{0.015,8.1958901e-010},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-1.31134e-009,0.018750001},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-0.015,-2.2359201e-010},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									
									{
										"R1",
										{2.6226801e-009,-0.018750001},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132582},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class 60Rnd_CMFlareMagazine: CA_Magazine
	{
		displayName="$STR_ace_rearm_Mag_60Rnd_CMFlareMagazine";
		author="$STR_A3_Bohemia_Interactive";
		count=60;
		ammo="CMflareAmmo";
		initSpeed=30;
	};
	class SmokeLauncherMag: VehicleMagazine
	{
		displayName="$STR_ace_rearm_Mag_SmokeLauncherMag";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="SmokeLauncherAmmo";
		count=2;
		nameSound="smokeshell";
		initSpeed=14;
	};
	class SmokeLauncherMag_boat: VehicleMagazine
	{
		displayName="$STR_ace_rearm_Mag_SmokeLauncherMag";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="SmokeLauncherAmmo_boat";
		count=2;
		nameSound="smokeshell";
		initSpeed=14;
	};
	class 4Rnd_Bomb_04_F: VehicleMagazine
	{
		displayName="$STR_ace_rearm_Mag_4Rnd_Bomb_04_F";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGVEHICLES_BOMB0";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		ammo="Bomb_04_F";
		count=4;
		initSpeed=0;
		maxLeadSpeed=25;
		nameSound="cannon";
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		ACE_isBelt=1;
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_762x51_Box0";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box1";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
		count=150;
		type="2*		256";
		ammo="B_762x51_Tracer_Green";
		tracersEvery=5;
		lastRoundsTracer=4;
		nameSound="mgun";
		mass=50;
		initSpeed=833;
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_mag0";
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		count=100;
		type="2*		256";
		ammo="B_65x39_Caseless";
		tracersEvery=4;
		lastRoundsTracer=4;
		nameSound="mgun";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_65x39_Belt1";
		mass=25;
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		initSpeed=774;
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		ACE_isBelt=1;
		tracersEvery=5;
		lastRoundsTracer=3;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Box0";
		picture="\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count=200;
		ammo="B_65x39_Caseless_yellow";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Box1";
		mass=50;
		initSpeed=743;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		ACE_isBelt=1;
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_93x64_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		count=150;
		ammo="B_93x64_Ball";
		initSpeed=785;
		tracersEvery=3;
		lastRoundsTracer=6;
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_93x64_Mag1";
		mass=70;
	};
	class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
	{
		ACE_isBelt=0;
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_DMR_05_CA.paa";
		count=10;
		displayName="$STR_A3_CfgMagazines_10Rnd_93x64_DMR_05_Mag0";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_93x64_DMR_05_Mag1";
		initSpeed=870;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=16;
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		ACE_isBelt=1;
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_130Rnd_338_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count=130;
		ammo="B_338_NM_Ball";
		initSpeed=807;
		tracersEvery=5;
		lastRoundsTracer=5;
		descriptionShort="$STR_A3_CfgMagazines_130Rnd_338_Mag1";
		mass=60;
	};
	class 200Rnd_556x45_Box_F: CA_Magazine
	{
		ACE_isBelt=1;
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_F0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_556x45_Box_F1";
		ammo="B_556x45_Ball_Tracer_Yellow";
		count=200;
		initSpeed=915;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
		tracersEvery=4;
		lastRoundsTracer=4;
		mass=40;
	};
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_mag0";
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_Caseless";
		count=30;
		mass=10;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_mag1";
		initSpeed=774;
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		tracersEvery=0;
		lastRoundsTracer=0;
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Caseless_green";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green0";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green1";
		initSpeed=788;
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		lastRoundsTracer=0;
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Mag0";
		picture="\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		ammo="B_9x21_Ball";
		count=30;
		mass=10;
		tracersEvery=0;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag1";
		initSpeed=430;
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_Mag0";
		picture="\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		type=16;
		count=16;
		descriptionShort="$STR_A3_CfgMagazines_16Rnd_9x21_Mag1";
		mass=6;
		initSpeed=430;
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		displaynameshort=".45";
		count=25;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_010";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_011";
		picture="\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		mass=10;
		tracersEvery=0;
		lastRoundsTracer=4;
		ammo="B_45ACP_Ball";
		initSpeed=254;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_01_Tracer_Green0";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_01_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		ammo="B_45ACP_Ball_Green";
		initSpeed=254;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_RED0";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_RED1";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_YELLOW0";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_YELLOW1";
		ammo="B_45ACP_Ball_Yellow";
	};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		displaynameshort=".45";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Weapons_F_Beta_CfgMagazines_9Rnd_45ACP_Mag0";
		descriptionShort="$STR_A3_Weapons_F_Beta_CfgMagazines_9Rnd_45ACP_Mag1";
		count=9;
		mass=6;
		lastRoundsTracer=0;
		ammo="B_45ACP_Ball_Green";
		initSpeed=254;
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_11Rnd_45ACP_Mag0";
		picture="\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
		count=11;
		ammo="B_45ACP_Ball";
		descriptionShort="$STR_A3_CfgMagazines_11Rnd_45ACP_Mag1";
		mass=7;
		initSpeed=254;
	};
	class ACE_key_customKeyMagazine: CA_Magazine
	{
		picture="\z\ace\addons\vehiclelock\ui\keyBlack.paa";
		displayName="ACE Vehicle Key";
		descriptionShort="$STR_ace_vehiclelock_Item_Custom_Description";
		count=1;
		mass=0;
		ACE_isUnique=1;
	};
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag0";
		ammo="B_556x45_Ball";
		count=30;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
		initSpeed=909;
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		modelSpecialIsProxy=1;
	};
	class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_green0";
		ammo="B_556x45_Ball_Tracer_Green";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_red0";
		ammo="B_556x45_Ball_Tracer_Red";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red0";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green0";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Yellow_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow0";
		ammo="B_556x45_Ball_Tracer_Yellow";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
		initSpeed=889;
	};
	class 30Rnd_556x45_Stanag_Sand: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"
		};
	};
	class 30Rnd_556x45_Stanag_Sand_green: 30Rnd_556x45_Stanag_Sand
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_green0";
		ammo="B_556x45_Ball_Tracer_Green";
	};
	class 30Rnd_556x45_Stanag_Sand_red: 30Rnd_556x45_Stanag_Sand
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_red0";
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Red: 30Rnd_556x45_Stanag_Sand
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Red0";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Green: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Green0";
		ammo="B_556x45_Ball_Tracer_Green";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green1";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Yellow_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Yellow0";
		ammo="B_556x45_Ball_Tracer_Yellow";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow1";
	};
	class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag0";
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag1";
		displaynameshort="$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag_dns";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		ammo="B_556x45_dual";
		count=20;
		mass=6;
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=267;
	};
	class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_khaki_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_black_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_red_CA.paa";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_mag_Tracer0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_mag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_khaki_mag_Tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_black_mag_Tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		picture="\A3\weapons_f\data\ui\m_20stanag_green_ca.paa";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_20Rnd_762x45_Mag0";
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_20Rnd_762x51_Mag_ca.paa";
		count=20;
		ammo="B_762x51_Ball";
		mass=12;
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_762x45_Mag1";
		modelSpecial="a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
		modelSpecialIsProxy=1;
		initSpeed=827;
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CFGMAGAZINES_7RND_408_MAG0";
		picture="\A3\weapons_f\data\UI\m_M24_CA.paa";
		count=7;
		ammo="B_408_Ball";
		descriptionShort="$STR_A3_CFGMAGAZINES_7RND_408_MAG1";
		mass=14;
		initSpeed=867;
	};
	class 5Rnd_127x108_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_5Rnd_127x108_Mag0";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		count=5;
		ammo="B_127x108_Ball";
		initSpeed=820;
		descriptionShort="$STR_A3_CfgMagazines_5Rnd_127x108_Mag1";
		mass=16;
	};
	class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_khaki_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_black_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_mag_Tracer0";
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_red_CA.paa";
		tracersEvery=1;
		lastRoundsTracer=100;
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_khaki_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_khaki_mag_tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_black_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_black_mag_tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
	};
	class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_YELLOW0";
		picture="\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
		descriptionShort="$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_YELLOW1";
		displaynameshort="$STR_A3_tracer_dns";
		lastRoundsTracer=200;
		tracersEvery=1;
	};
	class 200Rnd_65x39_cased_Box_Red: 100Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_cased_Box_Red0";
		picture="\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count=200;
		initSpeed=920;
		ammo="B_65x39_Caseless";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Box1";
		mass=50;
	};
	class 200Rnd_65x39_cased_Box_Tracer_Red: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_cased_Box_Tracer_Red0";
		picture="\A3\Weapons_F\Data\UI\m_200rnd_65x39_red_ca.paa";
		descriptionShort="$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_RED1";
		displaynameshort="$STR_A3_tracer_dns";
		ammo="B_65x39_Caseless";
		lastRoundsTracer=200;
		tracersEvery=1;
	};
	class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
		initSpeed=402;
	};
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionShort="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG2";
		initSpeed=430;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
		initSpeed=402;
	};
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_red_Mag0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_green_Mag0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
	};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_yellow_Mag0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class RPG32_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_LAW0";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed=140;
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="R_PG32V_F";
		type="2*		256";
		mass=60;
	};
	class RPG32_HE_F: RPG32_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_RPG32_AA_F0";
		displayNameShort="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_LAW2";
		model="\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
		ammo="R_TBG32V_F";
		mass=40;
	};
	class 3Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo="G_40mm_Smoke";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell1";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class 3Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeRed_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo="G_40mm_SmokeRed";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLRED_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeRed_Grenade_shell1";
	};
	class 3Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeRed_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeRed_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeGreen_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo="G_40mm_SmokeGreen";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLGREEN_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeGreen_Grenade_shell1";
	};
	class 3Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeGreen_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeGreen_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeYellow_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo="G_40mm_SmokeYellow";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLYELLOW_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeYellow_Grenade_shell1";
	};
	class 3Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeYellow_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeYellow_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokePurple_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokePurple_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
		ammo="G_40mm_SmokePurple";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLPURPLE_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokePurple_Grenade_shell1";
	};
	class 3Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokePurple_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokePurple_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeBlue_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeBlue_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
		ammo="G_40mm_SmokeBlue";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLBLUE_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeBlue_Grenade_shell1";
	};
	class 3Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeBlue_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeBlue_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeOrange_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeOrange_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
		ammo="G_40mm_SmokeOrange";
		displayNameShort="$STR_A3_CFGMAGAZINES_1RND_SMOKEORANGE_GRENADE_SHELL_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeOrange_Grenade_shell1";
	};
	class 3Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeOrange_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeOrange_Grenade_shell1";
		mass=12;
	};
	class HandGrenade_Stone: HandGrenade
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayName="$STR_A3_CfgMagazines_HandGrenade_Stone0";
		value=0.1;
		ammo="GrenadeHand_stone";
		descriptionShort="$STR_A3_CfgMagazines_HandGrenade_Stone1";
		displayNameShort="$STR_A3_CfgMagazines_HandGrenade_Stone_dns";
	};
	class Chemlight_green: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT0";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_green_CA.paa";
		model="\A3\Weapons_f\chemlight\chemlight_green";
		value=2;
		initSpeed=14;
		ammo="Chemlight_green";
		nameSoundWeapon="Chemlight";
		nameSound="Chemlight";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight1";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHT_DNS";
		mass=2;
		ACE_Attachable="Chemlight_green";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Green";
	};
	class Chemlight_red: Chemlight_green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT_RED0";
		ammo="Chemlight_red";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight_red1";
		model="\A3\Weapons_f\chemlight\chemlight_red";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHTT_RED_DNS";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_red_CA.paa";
		ACE_Attachable="Chemlight_red";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Red";
	};
	class Chemlight_yellow: Chemlight_green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT_YELLOW0";
		ammo="Chemlight_yellow";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight_yellow1";
		model="\A3\Weapons_f\chemlight\chemlight_yellow";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHTT_YELLOW_DNS";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_yellow_CA.paa";
		ACE_Attachable="Chemlight_yellow";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Yellow";
	};
	class Chemlight_blue: Chemlight_green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT_BLUE0";
		ammo="Chemlight_blue";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight_blue1";
		model="\A3\Weapons_f\chemlight\chemlight_blue";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHTT_BLUE_DNS";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_blue_CA.paa";
		ACE_Attachable="Chemlight_blue";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Blue";
	};
	class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count=120;
	};
	class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count=240;
	};
	class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine
	{
		ammo="CMflare_Chaff_Ammo";
	};
	class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=120;
	};
	class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=240;
	};
	class 192Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=192;
	};
	class 168Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=168;
	};
	class 300Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=300;
	};
	class SmokeLauncherMag_Single: SmokeLauncherMag
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1;
	};
	class 200Rnd_65x39_Belt: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=200;
		ammo="B_65x39_Caseless";
		maxLeadSpeed=36.111099;
		tracersEvery=5;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt1";
		initSpeed=806;
	};
	class 200Rnd_65x39_Belt_Tracer_Red: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Caseless";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_Belt_Tracer_Green: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_green";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_Belt_Tracer_Yellow: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_yellow";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1000;
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt1";
	};
	class 1000Rnd_65x39_Belt_Tracer_Red: 1000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		ammo="B_65x39_Caseless";
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt_Green: 1000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_green";
		displayNameMFDFormat="П";
	};
	class 1000Rnd_65x39_Belt_Tracer_Green: 1000Rnd_65x39_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt_Yellow: 1000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_Yellow";
		displayNameMFDFormat="LMG";
	};
	class 1000Rnd_65x39_Belt_Tracer_Yellow: 1000Rnd_65x39_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		ammo="B_65x39_Minigun_Caseless_Red_splash";
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		weight=30;
	};
	class 2000Rnd_65x39_Belt_Green: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_Green";
	};
	class 2000Rnd_65x39_Belt_Tracer_Green: 2000Rnd_65x39_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		weight=30;
	};
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash: 2000Rnd_65x39_Belt_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Green_splash";
	};
	class 2000Rnd_65x39_Belt_Yellow: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_Yellow";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow: 2000Rnd_65x39_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow_Splash: 2000Rnd_65x39_Belt_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Yellow_splash";
	};
	class 150Rnd_127x108_Ball: 450Rnd_127x108_Ball
	{
		author="$STR_A3_Bohemia_Interactive";
		count=150;
	};
	class 50Rnd_127x108_Ball: 450Rnd_127x108_Ball
	{
		author="$STR_A3_Bohemia_Interactive";
		count=50;
	};
	class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=96;
		displayNameMFDFormat="GMG";
	};
	class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=64;
	};
	class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
	};
	class 32Rnd_155mm_Mo_shells_O: 32Rnd_155mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="ОФ";
	};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells0";
		displayNameShort="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
		count=8;
		ammo="Sh_82mm_AMOS";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
	class 8Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Flare_82mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white_dns";
	};
	class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Smoke_82mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Smoke_white0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Sh_82mm_AMOS_guided";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_guided0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_guided_dns";
	};
	class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Sh_82mm_AMOS_LG";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG_dns";
	};
	class 6Rnd_155mm_Mo_smoke_O: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="ДЫМ";
	};
	class 2Rnd_155mm_Mo_guided_O: 2Rnd_155mm_Mo_guided
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="КОФ";
	};
	class 4Rnd_155mm_Mo_guided: 2Rnd_155mm_Mo_guided
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
	};
	class 4Rnd_155mm_Mo_guided_O: 2Rnd_155mm_Mo_guided
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="КОФ";
		count=4;
	};
	class 4Rnd_155mm_Mo_LG: 2Rnd_155mm_Mo_LG
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
	};
	class 4Rnd_155mm_Mo_LG_O: 2Rnd_155mm_Mo_LG
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameMFDFormat="ЛАЗ.НАВЕД.";
	};
	class 6Rnd_155mm_Mo_mine_O: 6Rnd_155mm_Mo_mine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="МИНЫ";
	};
	class 6Rnd_155mm_Mo_AT_mine_O: 6Rnd_155mm_Mo_AT_mine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="ПТ МИНЫ";
	};
	class 2Rnd_155mm_Mo_Cluster_O: 2Rnd_155mm_Mo_Cluster
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="КАССЕТНЫЙ";
	};
	class 3Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_cfgmagazines_3rnd_ugl_flarewhite_f_test";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarewhite_f1";
		mass=12;
	};
	class 3Rnd_UGL_FlareRed_F: UGL_FlareRed_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flarered_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarered_f1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		mass=12;
	};
	class UGL_FlareYellow_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareYellow_F0";
		ammo="F_40mm_Yellow";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareYellow_F1";
		displayNameShort="$STR_a3_cfgmagazines_ugl_flareyellow_f_dns";
	};
	class 3Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flareyellow_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flareyellow_f1";
		displayNameShort="$STR_a3_cfgmagazines_ugl_flareyellow_f_dns";
		mass=12;
	};
	class UGL_FlareCIR_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareCIR_F0";
		ammo="F_40mm_CIR";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareCIR_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareCIR_F_dns";
	};
	class 3Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f1";
		displayNameShort="$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f_dns";
		mass=12;
	};
	class FlareWhite_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		type=16;
		displayName="$STR_A3_CfgMagazines_FlareWhite_F0";
		picture="\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		model="\A3\weapons_f\ammo\flare_white";
		ammo="F_20mm_White";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_A3_CfgMagazines_FlareWhite_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareWhite_F_dns";
		weaponPoolAvailable=1;
		mass=4;
	};
	class FlareGreen_F: FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_FlareGreen_F0";
		ammo="F_20mm_Green";
		picture="\A3\Weapons_F\Data\UI\gear_flare_green_ca.paa";
		model="\A3\weapons_f\ammo\flare_green";
		descriptionShort="$STR_A3_CfgMagazines_FlareGreen_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareGreen_F_dns";
	};
	class FlareRed_F: FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_FlareRed_F0";
		ammo="F_20mm_Red";
		picture="\A3\Weapons_F\Data\UI\gear_flare_red_ca.paa";
		model="\A3\weapons_f\ammo\flare_red";
		descriptionShort="$STR_A3_CfgMagazines_FlareRed_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareRed_F_dns";
	};
	class FlareYellow_F: FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_FlareYellow_F0";
		ammo="F_20mm_Yellow";
		picture="\A3\Weapons_F\Data\UI\gear_flare_yellow_ca.paa";
		model="\A3\weapons_f\ammo\flare_yellow";
		descriptionShort="$STR_A3_CfgMagazines_FlareYellow_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareYellow_F_dns";
	};
	class Laserbatteries: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Laserbatteries0";
		picture="\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		ammo="Laserbeam";
		count=1;
		initSpeed=30;
		nameSound="laserdesignator";
		descriptionShort="$STR_A3_CfgMagazines_Laserbatteries1";
		mass=6;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer0";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery=1;
		initSpeed=833;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x54_Tracer_Green";
		initSpeed=778;
	};
	class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer0";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery=1;
	};
	class Titan_AA: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Titan_AA0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AA_dns";
		ammo="M_Titan_AA";
		type="6 * 		256";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		descriptionShort="$STR_A3_CfgMagazines_Titan_AA1";
		mass=100;
	};
	class Titan_AP: Titan_AA
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Titan_AP";
		displayName="$STR_A3_CfgMagazines_Titan_AP0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AP_dns";
		descriptionShort="$STR_A3_CfgMagazines_Titan_AP1";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_ap_CA.paa";
		maxLeadSpeed=27.7778;
		mass=60;
	};
	class Titan_AT: Titan_AA
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_Titan_AT0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AT_dns";
		descriptionShort="$STR_A3_CfgMagazines_Titan_AT1";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
		maxLeadSpeed=27.7778;
		mass=100;
		ammo="ACE_Javelin_FGM148";
	};
	class 1000Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count=1000;
		ammo="B_20mm_Tracer_Red";
		weight=126;
	};
	class 2000Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count=2000;
	};
	class 300Rnd_25mm_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_300Rnd_25mm_shells0";
		ammo="B_25mm";
		count=300;
		initSpeed=1030;
		maxLeadSpeed=83.333298;
		tracersEvery=4;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 1000Rnd_25mm_shells: 300Rnd_25mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1000Rnd_25mm_shells0";
		count=1000;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_Tracer_Red0";
		ammo="B_30mm_HE_Tracer_Red";
		tracersEvery=1;
		displayNameShort="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
	};
	class 250Rnd_30mm_HE_shells_Tracer_Green: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CFGMAGAZINES_250RND_30MM_HE_SHELLS_TRACER_GREEN0";
		ammo="B_30mm_HE_Tracer_Green";
		tracersEvery=1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red: 250Rnd_30mm_APDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_Tracer_Red0";
		ammo="B_30mm_AP_Tracer_Red";
		tracersEvery=1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Green: 250Rnd_30mm_APDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_250RND_30MM_APDS_SHELLS_TRACER_GREEN0";
		ammo="B_30mm_AP_Tracer_Green";
		tracersEvery=1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Yellow: 250Rnd_30mm_APDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_Tracer_Yellow0";
		ammo="B_30mm_AP_Tracer_Yellow";
		tracersEvery=1;
	};
	class 8Rnd_LG_scalpel: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_8Rnd_LG_scalpel0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_LG_scalpel_dns";
		descriptionShort="$STR_A3_cfgMagazine_Scalpel_tooltip";
		ammo="M_Scalpel_AT";
		initSpeed=0;
		count=8;
		nameSound="missiles";
		weight=400;
	};
	class 6Rnd_LG_scalpel: 8Rnd_LG_scalpel
	{
		author="$STR_A3_Bohemia_Interactive";
		count=6;
	};
	class 2Rnd_LG_scalpel_hidden: 2Rnd_LG_scalpel
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Scalpel_AT_hidden";
	};
	class 38Rnd_80mm_rockets: 14Rnd_80mm_rockets
	{
		author="$STR_A3_Bohemia_Interactive";
		count=38;
		weight=460;
	};
	class 12Rnd_230mm_rockets_cluster: 12Rnd_230mm_rockets
	{
		displayName="$STR_A3_CfgMagazines_12Rnd_230mm_rockets_cluster0";
		displayNameShort="Cluster";
		displayNameMFDFormat="CLUSTER";
		ammo="R_230mm_Cluster";
	};
	class 2Rnd_AAA_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_2Rnd_AAA_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_2Rnd_AAA_missiles_dns";
		descriptionShort="$STR_A3_cfgMagazine_ASRAAM_tooltip";
		ammo="M_Air_AA";
		count=2;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class 2Rnd_AAA_missiles_MI02: 2Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Air_AA_MI02";
	};
	class 2Rnd_AAA_missiles_MI06: 2Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Air_AA_MI06";
	};
	class 4Rnd_AAA_missiles_MI02: 4Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Air_AA_MI02";
	};
	class 4Rnd_Titan_long_missiles: 4Rnd_GAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Titan_AA_long";
		displayName="$STR_A3_MISSILES_TITAN0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AA_dns";
		displayNameMFDFormat="MISSILE";
	};
	class 4Rnd_Titan_long_missiles_O: 4Rnd_Titan_long_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="З-В РАКЕТА";
	};
	class 5Rnd_GAT_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_MISSILES_TITAN0";
		displayNameShort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		count=5;
		ammo="M_Titan_AT_long";
		initSpeed=36;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class 2Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		displayNameMFDFormat="MISSILE";
	};
	class 2Rnd_GAT_missiles_O: 2Rnd_GAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="Р";
	};
	class 14Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 12Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 32Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 28Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 24Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 20Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 12Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 20Rnd_120mm_HEAT_MP: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP";
		initSpeed=1330;
		count=20;
		maxLeadSpeed=25;
		tracersEvery=0;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,3};
	};
	class 20Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP_T_Red";
		tracersEvery=1;
		displayNameMFDFormat="HEAT";
	};
	class 20Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP_T_Green";
		tracersEvery=1;
	};
	class 20Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP_T_Yellow";
		tracersEvery=1;
		displayNameMFDFormat="HEAT";
	};
	class 12Rnd_120mm_HEAT_MP: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE: 12Rnd_125mm_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE_T_Red: 12Rnd_125mm_HE_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE_T_Green: 12Rnd_125mm_HE_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE_T_Yellow: 12Rnd_125mm_HE_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 16Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 16Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 16Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 16Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 6Rnd_AAT_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_6Rnd_AAT_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_6Rnd_AAT_missiles_dns";
		count=6;
		ammo="M_Air_AT";
		initSpeed=0;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class 4Rnd_AAT_missiles: 6Rnd_AAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
	};
	class 1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Titan_AA_static";
		count=1;
	};
	class 1Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1;
		ammo="ACE_Javelin_FGM148_static";
	};
	class 2Rnd_GBU12_LGB: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_cfgmagazines_gbu120";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		displayNameShort="$STR_A3_cfgmagazines_gbu12_dns";
		ammo="Bo_GBU12_LGB";
		initSpeed=0;
		maxLeadSpeed=25;
		count=2;
		nameSound="cannon";
	};
	class 2Rnd_GBU12_LGB_MI10: 2Rnd_GBU12_LGB
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Bo_GBU12_LGB_MI10";
	};
	class 2Rnd_Mk82: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="Bo_Mk82";
		displayName="$STR_A3_cfgmagazines_mk820";
		descriptionShort="$STR_A3_cfgMagazine_Mk82_tooltip";
		displayNameShort="$STR_A3_cfgmagazines_mk82_dns";
		initSpeed=0;
		maxLeadSpeed=25;
		count=2;
		nameSound="missiles";
	};
	class 2Rnd_Mk82_MI08: 2Rnd_Mk82
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Bo_Mk82_MI08";
	};
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
		displayName="$STR_A3_CfgMagazines_6Rnd_45ACP_Cylinder0";
		descriptionShort="$STR_A3_CfgMagazines_6Rnd_45ACP_Cylinder1";
		count=6;
		mass=4;
		initSpeed=254;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_EPA\Data\ui\M_10Rnd_762x51_CA.paa";
		displayName="$STR_A3_CfgMagazines_10Rnd_762x51_Mag0";
		count=10;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_762x51_Mag1";
		mass=8;
		initSpeed=833;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x54_Ball";
		initSpeed=836;
	};
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\weapons_f\data\UI\M_5rnd_127x108_CA.paa";
		displayName="$STR_A3_CfgMagazines_5Rnd_127x108_APDS_Mag0";
		displayNameShort="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns";
		ammo="B_127x108_APDS";
		descriptionShort="$STR_A3_CfgMagazines_5Rnd_127x108_APDS_Mag1";
		initSpeed=820;
	};
	class B_IR_Grenade: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		value=1;
		displayName="$STR_A3_CfgMagazines_B_IR_Grenade0";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_B_IRstrobe_CA.paa";
		ammo="B_IRStrobe";
		count=1;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=6.9444399;
		descriptionShort="$STR_A3_CfgMagazines_B_IR_Grenade1";
		displayNameShort="$STR_A3_CFGMAGAZINES_IR_GRENADE_DNS";
		ACE_Attachable="B_IRStrobe";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class O_IR_Grenade: B_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="O_IRStrobe";
		displayName="$STR_A3_CfgMagazines_O_IR_Grenade0";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_O_IRstrobe_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_O_IR_Grenade1";
		ACE_Attachable="O_IRStrobe";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class I_IR_Grenade: B_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="I_IRStrobe";
		displayName="$STR_A3_CfgMagazines_I_IR_Grenade0";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_I_IRstrobe_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_I_IR_Grenade1";
		ACE_Attachable="I_IRStrobe";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class 1000Rnd_762x51_Belt: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1000;
	};
	class 2000Rnd_762x51_Belt: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2000;
	};
	class PylonMissile_1Rnd_Missile_AA_04_F: PylonRack_1Rnd_Missile_AA_04_F
	{
		hardpoints[]=
		{
			"B_AIM9"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=85;
	};
	class PylonMissile_1Rnd_AAA_missiles: PylonRack_1Rnd_AAA_missiles
	{
		hardpoints[]=
		{
			"B_ASRAAM"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=88;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.031333301,0.0174929},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								{},
								
								{
									{0.055333301,0.135442},
									1
								},
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.055333301,-0.0060968702},
									1
								},
								
								{
									{0.052666701,-0.0126496},
									1
								},
								
								{
									{0.050000001,-0.017891699},
									1
								},
								
								{
									{0.0446667,-0.020512801},
									1
								},
								
								{
									{0.039333299,-0.0231339},
									1
								},
								
								{
									{0.035333298,-0.0244445},
									1
								},
								
								{
									{0.031333301,-0.025754999},
									1
								},
								
								{
									{0.029999999,-0.025754999},
									1
								},
								
								{
									{0.026000001,-0.0244445},
									1
								},
								
								{
									{0.022,-0.0231339},
									1
								},
								
								{
									{0.016666699,-0.020512801},
									1
								},
								
								{
									{0.0126667,-0.017891699},
									1
								},
								
								{
									{0.0086666597,-0.0126496},
									1
								},
								
								{
									{0.0073333401,-0.0060968702},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								
								{
									{0.0060000098,0.135442},
									1
								},
								
								{
									{0.055333301,0.135442},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AA";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_GAA_missiles: PylonRack_1Rnd_GAA_missiles
	{
		hardpoints[]=
		{
			"B_AMRAAM"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=152;
	};
	class PylonMissile_1Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		hardpoints[]=
		{
			"SCALPEL_1RND",
			"UNI_SCALPEL"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=49;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.031333301,0.0174929},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								{},
								
								{
									{0.055333301,0.135442},
									1
								},
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.055333301,-0.0060968702},
									1
								},
								
								{
									{0.052666701,-0.0126496},
									1
								},
								
								{
									{0.050000001,-0.017891699},
									1
								},
								
								{
									{0.0446667,-0.020512801},
									1
								},
								
								{
									{0.039333299,-0.0231339},
									1
								},
								
								{
									{0.035333298,-0.0244445},
									1
								},
								
								{
									{0.031333301,-0.025754999},
									1
								},
								
								{
									{0.029999999,-0.025754999},
									1
								},
								
								{
									{0.026000001,-0.0244445},
									1
								},
								
								{
									{0.022,-0.0231339},
									1
								},
								
								{
									{0.016666699,-0.020512801},
									1
								},
								
								{
									{0.0126667,-0.017891699},
									1
								},
								
								{
									{0.0086666597,-0.0126496},
									1
								},
								
								{
									{0.0073333401,-0.0060968702},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								
								{
									{0.0060000098,0.135442},
									1
								},
								
								{
									{0.055333301,0.135442},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.01125},
									1
								},
								
								{
									"R1",
									{0.0044999998,-0.0097425003},
									1
								},
								
								{
									"R1",
									{0.0077940002,-0.0056250002},
									1
								},
								
								{
									"R1",
									{0.0089999996,0},
									1
								},
								
								{
									"R1",
									{0.0077940002,0.0056250002},
									1
								},
								
								{
									"R1",
									{0.0044999998,0.0097425003},
									1
								},
								
								{
									"R1",
									{0,0.01125},
									1
								},
								
								{
									"R1",
									{-0.0044999998,0.0097425003},
									1
								},
								
								{
									"R1",
									{-0.0077940002,0.0056250002},
									1
								},
								
								{
									"R1",
									{-0.0089999996,0},
									1
								},
								
								{
									"R1",
									{-0.0077940002,-0.0056250002},
									1
								},
								
								{
									"R1",
									{-0.0044999998,-0.0097425003},
									1
								},
								
								{
									"R1",
									{0,-0.01125},
									1
								},
								{},
								
								{
									"R1",
									{0.00636396,-0.0079549504},
									1
								},
								
								{
									"R1",
									{0.0106066,-0.0132583},
									1
								},
								{},
								
								{
									"R1",
									{0.00636396,0.0079549504},
									1
								},
								
								{
									"R1",
									{0.0106066,0.0132583},
									1
								},
								{},
								
								{
									"R1",
									{-0.00636396,0.0079549504},
									1
								},
								
								{
									"R1",
									{-0.0106066,0.0132583},
									1
								},
								{},
								
								{
									"R1",
									{-0.00636396,-0.0079549504},
									1
								},
								
								{
									"R1",
									{-0.0106066,-0.0132582},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0089999996,4.9175303e-010},
										1
									},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-7.8680501e-010,0.01125},
										1
									},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0089999996,-1.3415501e-010},
										1
									},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{1.57361e-009,-0.01125},
										1
									},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		displayName="$STR_A3_missiles_DAGR0";
		count=12;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"DAGR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="missiles_DAGR";
		mass=140;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{-0.0049999999,-0.029999999},
									1
								},
								
								{
									{0.064999998,-0.029999999},
									1
								},
								
								{
									{0.064999998,0.15000001},
									1
								},
								
								{
									{-0.0049999999,0.15000001},
									1
								},
								
								{
									{-0.0049999999,-0.029999999},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_Bomb_04_F: 4Rnd_Bomb_04_F
	{
		displayName="$STR_A3_CFGMAGAZINES_GBU120";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		hardpoints[]=
		{
			"B_BOMB_PYLON"
		};
		pylonWeapon="Bomb_04_Plane_CAS_01_F";
		mass=230;
		class mfdElements
		{
		};
	};
	class PylonMissile_1Rnd_Mk82_F: 2Rnd_Mk82
	{
		displayName="$STR_DN_MK82LAUNCHER";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		hardpoints[]=
		{
			"B_BOMB_PYLON"
		};
		pylonWeapon="Mk82BombLauncher";
		mass=227;
	};
	class PylonWeapon_300Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		displayName="$STR_A3_twin_cannon_20mm";
		descriptionShort="$STR_A3_cfgMagazine_PL20_tooltip";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"B_A143_BUZZARD_CENTER_PYLON",
			"20MM_TWIN_CANNON"
		};
		pylonWeapon="Twin_Cannon_20mm";
		mass=230;
	};
	class PylonWeapon_2000Rnd_65x39_belt: 2000Rnd_65x39_Belt_Tracer_Green_Splash
	{
		displayName="$STR_A3_LMG_Minigun0";
		descriptionShort="$STR_A3_cfgMagazine_65Minigun_tooltip";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
		muzzlePos="machinegun_beg";
		muzzleEnd="machinegun_end";
		hardpoints[]=
		{
			"I_ORCA_RIGHT_PYLON"
		};
		pylonWeapon="LMG_Minigun_heli";
		mass=200;
	};
	class PylonRack_19Rnd_Rocket_Skyfire: 38Rnd_80mm_rockets
	{
		displayName="$STR_A3_PylonRack_19Rnd_Rocket_Skyfire0";
		count=19;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_Skyfire_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON",
			"O_SKYFIRE"
		};
		pylonWeapon="rockets_Skyfire";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_01_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{-0.013,-0.025},
									1
								},
								
								{
									"R1",
									{0.013,-0.025},
									1
								},
								
								{
									"R1",
									{0.024,-0},
									1
								},
								
								{
									"R1",
									{0.013,0.025},
									1
								},
								
								{
									"R1",
									{-0.013,0.025},
									1
								},
								
								{
									"R1",
									{-0.024,-0},
									1
								},
								
								{
									"R1",
									{-0.013,-0.025},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_Missile_AA_03_F: PylonRack_1Rnd_Missile_AA_03_F
	{
		hardpoints[]=
		{
			"O_SAHR3"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=85;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.13},
										1
									},
									
									{
										{0.17,0.13},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								
								{
									"R1",
									{0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{0.011,0},
									1
								},
								
								{
									"R1",
									{0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{0,0.01375},
									1
								},
								
								{
									"R1",
									{-0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{-0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{-0.011,0},
									1
								},
								
								{
									"R1",
									{-0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{-0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,-0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,-0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781798,-0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,-0.0203293},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AA";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,-0.0097227199},
										1
									},
									
									{
										"R1",
										{0.011,6.01032e-010},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-9.6165098e-010,0.01375},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-0.011,-1.6396701e-010},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									},
									
									{
										"R1",
										{1.9233e-009,-0.01375},
										1
									},
									
									{
										"R1",
										{0.0077781798,-0.0097227097},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=80;
		displayName="$STR_A3_CfgVehicles_IEDUrbanBig_F";
		picture="\A3\Weapons_F\Data\UI\gear_IED_large_urban_CA.paa";
		model="\A3\Weapons_F\Explosives\IED_urban_big";
		ammo="IEDUrbanBig_Remote_Ammo";
		allowedSlots[]={901};
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDUrbanBig";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"DeadmanSwitch",
				"Cellphone",
				"PressurePlate"
			};
			class Command
			{
				FuseTime=0.5;
				ammo="ACE_IEDUrbanBig_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate
			{
				displayName="$STR_ace_explosives_PressurePlate";
				digDistance=0;
				ammo="ACE_IEDUrbanBig_Range_Ammo";
				pitch=0;
			};
		};
	};
	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgVehicles_IEDLandBig_F";
		model="\A3\Weapons_F\Explosives\IED_land_big";
		ammo="IEDLandBig_Remote_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDLandBig";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo="ACE_IEDLandBig_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate: PressurePlate
			{
				ammo="ACE_IEDLandBig_Range_Ammo";
			};
		};
	};
	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=40;
		displayName="$STR_A3_CfgVehicles_IEDUrbanSmall_F";
		model="\A3\Weapons_F\Explosives\IED_urban_small";
		ammo="IEDUrbanSmall_Remote_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDUrbanSmall";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"DeadmanSwitch",
				"Cellphone",
				"PressurePlate"
			};
			class Command
			{
				FuseTime=0.5;
				ammo="ACE_IEDUrbanSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate
			{
				displayName="$STR_ace_explosives_PressurePlate";
				digDistance=0;
				ammo="ACE_IEDUrbanSmall_Range_Ammo";
				pitch=0;
			};
		};
	};
	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgVehicles_IEDLandSmall_F";
		picture="\A3\Weapons_F\Data\UI\gear_IED_small_dugin_CA.paa";
		model="\A3\Weapons_F\Explosives\IED_land_small";
		ammo="IEDLandSmall_Remote_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo="ACE_IEDLandSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate: PressurePlate
			{
				ammo="ACE_IEDLandSmall_Range_Ammo";
			};
		};
	};
	class ACE_1000Rnd_Gatling_30mm_Plane_CAS_HEI: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="ACE_Gatling_30mm_Sub_HEI";
		displayName="$STR_ace_aircraft_GatlingDescriptionHEI";
		displayNameShort="$STR_ace_aircraft_GatlingDescriptionShortHEI";
	};
	class ACE_1000Rnd_Gatling_30mm_Plane_CAS_AP: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="ACE_Gatling_30mm_Sub_AP";
		displayName="$STR_ace_aircraft_GatlingDescriptionAP";
		displayNameShort="$STR_ace_aircraft_GatlingDescriptionShortAP";
	};
	class ACE_1000Rnd_Gatling_30mm_Plane_CAS_CM41: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="ACE_Gatling_30mm_Sub_CM41";
		displayName="$STR_ace_aircraft_GatlingDescriptionCM41";
		displayNameShort="$STR_ace_aircraft_GatlingDescriptionShortCM41";
	};
	class ACE_1000Rnd_Gatling_30mm_Plane_CAS_CM51: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="ACE_Gatling_30mm_Sub_CM51";
		displayName="$STR_ace_aircraft_GatlingDescriptionCM51";
		displayNameShort="$STR_ace_aircraft_GatlingDescriptionShortCM51";
	};
	class ACE_500Rnd_20mm_shells_Comanche: 300Rnd_20mm_shells
	{
		ammo="ACE_20mm_HE";
		count=500;
	};
	class 2Rnd_12Gauge_Pellets: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		scope=2;
		displayName="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_CA.paa";
		ammo="B_12Gauge_Pellets_Submunition";
		initSpeed=380;
		count=2;
		mass=6;
		modelSpecialIsProxy=1;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
		hiddenSelections[]=
		{
			"camo",
			"cap1"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Pellets_CO.paa"
		};
	};
	class ACE_2Rnd_12Gauge_Pellets_No0_Buck: 2Rnd_12Gauge_Pellets
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No0_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No0_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No0_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No0_Buck";
	};
	class ACE_2Rnd_12Gauge_Pellets_No1_Buck: ACE_2Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No1_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No1_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No1_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No1_Buck";
	};
	class ACE_2Rnd_12Gauge_Pellets_No2_Buck: ACE_2Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No2_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No2_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No2_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No2_Buck";
	};
	class ACE_2Rnd_12Gauge_Pellets_No3_Buck: ACE_2Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No3_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No3_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No3_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No3_Buck";
	};
	class ACE_2Rnd_12Gauge_Pellets_No4_Buck: ACE_2Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No4_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No4_Buck";
	};
	class ACE_2Rnd_12Gauge_Pellets_No4_Bird: ACE_2Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No4_Bird_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Bird_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Bird_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No4_Bird";
	};
	class 6Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_Description";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_6Rnd_12Gauge_Pellets0";
		count=6;
		mass=12;
		initSpeed=380;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Pellets_ca.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class ACE_6Rnd_12Gauge_Pellets_No0_Buck: 6Rnd_12Gauge_Pellets
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No0_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No0_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No0_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No0_Buck";
	};
	class ACE_6Rnd_12Gauge_Pellets_No1_Buck: ACE_6Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No1_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No1_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No1_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No1_Buck";
	};
	class ACE_6Rnd_12Gauge_Pellets_No2_Buck: ACE_6Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No2_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No2_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No2_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No2_Buck";
	};
	class ACE_6Rnd_12Gauge_Pellets_No3_Buck: ACE_6Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No3_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No3_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No3_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No3_Buck";
	};
	class ACE_6Rnd_12Gauge_Pellets_No4_Buck: ACE_6Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No4_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Buck_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No4_Buck";
	};
	class ACE_6Rnd_12Gauge_Pellets_No4_Bird: ACE_6Rnd_12Gauge_Pellets_No0_Buck
	{
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No4_Bird_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Bird_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No4_Bird_Description";
		ammo="ACE_12Gauge_Pellets_Submunition_No4_Bird";
	};
	class 15Rnd_12Gauge_Pellets: 6Rnd_12Gauge_Pellets
	{
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_Description";
		scope=1;
		displayName="$STR_A3_C_CfgMagazines_15Rnd_12Gauge_Pellets0";
		count=15;
		initSpeed=380;
		ammo="B_12Gauge_HD_Pellets_Submunition";
		muzzleImpulseFactor[]={0.30000001,1};
	};
	class 30Rnd_580x42_Mag_F: CA_Magazine
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_580x42_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_580x42_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_580x42_Mag_F1";
		ammo="B_580x42_Ball_F";
		count=30;
		initSpeed=930;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=8;
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_30rnd";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"
		};
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_20Rnd_650x39_Cased_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_650x39_Cased_Mag_F1";
		ammo="B_65x39_Case_green";
		count=20;
		initSpeed=820;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=7;
	};
	class ACE_10Rnd_580x42_DBP88_Mag: 20Rnd_650x39_Cased_Mag_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_580x42_DBP88_Ball";
		count=10;
		initSpeed=895;
		mass=6;
		displayName="$STR_ace_ballistics_10Rnd_580x42_DBP88_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_580x42_DBP88_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_580x42_DBP88_Mag_Description";
	};
	class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_30Rnd_65x39_caseless_msbs_mag0";
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
		hiddenSelections[]={};
	};
	class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim: 100Rnd_65x39_caseless_mag_Tracer
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x39_Caseless_Tracer_Dim";
		displayName="$STR_ace_ballistics_100Rnd_65x39_caseless_mag_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_100Rnd_65x39_caseless_mag_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_100Rnd_65x39_caseless_mag_Tracer_DimDescription";
		picture="\A3\weapons_f\data\ui\m_100rnd_65x39_yellow_ca.paa";
	};
	class ACE_200Rnd_65x39_cased_Box_Tracer_Dim: 200Rnd_65x39_cased_Box
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x39_Caseless_Tracer_Dim";
		displayName="$STR_ace_ballistics_200Rnd_65x39_cased_Box_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_200Rnd_65x39_cased_Box_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_200Rnd_65x39_cased_Box_Tracer_DimDescription";
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_yellow_ca.paa";
		initSpeed=774;
	};
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim: 30Rnd_65x39_caseless_mag_Tracer
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x39_Caseless_Tracer_Dim";
		displayName="$STR_ace_ballistics_30Rnd_65x39_caseless_mag_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_30Rnd_65x39_caseless_mag_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65x39_caseless_mag_Tracer_DimDescription";
	};
	class ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x39_Caseless_green_Tracer_Dim";
		displayName="$STR_ace_ballistics_30Rnd_65x39_caseless_green_mag_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_30Rnd_65x39_caseless_green_mag_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65x39_caseless_green_mag_Tracer_DimDescription";
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_F1";
		ammo="B_545x39_Ball_F";
		count=30;
		initSpeed=735;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=8;
	};
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag: 30Rnd_556x45_Stanag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_556x45_Ball_M995_AP";
		displayName="$STR_ace_ballistics_30Rnd_556x45_Stanag_M995_AP_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_556x45_Stanag_M995_AP_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_556x45_Stanag_M995_AP_mag_Description";
		initSpeed=875;
	};
	class ACE_30Rnd_556x45_Stanag_Mk262_mag: 30Rnd_556x45_Stanag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_556x45_Ball_Mk262";
		displayName="$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk262_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk262_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk262_mag_Description";
		initSpeed=832;
	};
	class ACE_30Rnd_556x45_Stanag_Mk318_mag: 30Rnd_556x45_Stanag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_556x45_Ball_Mk318";
		displayName="$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk318_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk318_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_556x45_Stanag_Mk318_mag_Description";
		initSpeed=923;
	};
	class ACE_30Rnd_556x45_Stanag_Tracer_Dim: 30Rnd_556x45_Stanag_Tracer_Red
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_B_556x45_Ball_Tracer_Dim";
		displayName="$STR_ace_ballistics_30Rnd_556x45_mag_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_30Rnd_556x45_mag_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_556x45_mag_Tracer_DimDescription";
	};
	class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
	{
		initSpeed=869;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_Red_F0";
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F1";
		ammo="B_762x39_Ball_F";
		count=30;
		initSpeed=715;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=10;
	};
	class 10Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_10Rnd_Mk14_762x51_Mag0";
		descriptionShort="$STR_A3_C_CfgMagazines_10Rnd_Mk14_762x51_Mag1";
		count=10;
		mass=6;
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_10Rnd_Mk14_762x51_Mag_ca.paa";
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_762x51_mk14_10rnd";
	};
	class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="B_762x51_Tracer_Red";
		displayName="$STR_ace_ballistics_20Rnd_762x51_mag_TracerName";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_mag_TracerNameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_mag_TracerDescription";
		tracersEvery=1;
	};
	class ACE_20Rnd_762x51_Mag_Tracer_Dim: ACE_20Rnd_762x51_Mag_Tracer
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_B_762x51_Tracer_Dim";
		displayName="$STR_ace_ballistics_20Rnd_762x51_mag_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_mag_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_mag_Tracer_DimDescription";
	};
	class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_Subsonic";
		displayName="$STR_ace_ballistics_20Rnd_762x51_mag_SDName";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_mag_SDNameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_mag_SDDescription";
		initSpeed=330;
	};
	class ACE_10Rnd_762x51_Mag_Tracer: 10Rnd_Mk14_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="B_762x51_Tracer_Red";
		displayName="$STR_ace_ballistics_10Rnd_762x51_mag_TracerName";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_mag_TracerNameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_mag_TracerDescription";
		tracersEvery=1;
	};
	class ACE_10Rnd_762x51_Mag_Tracer_Dim: ACE_10Rnd_762x51_Mag_Tracer
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_B_762x51_Tracer_Dim";
		displayName="$STR_ace_ballistics_10Rnd_762x51_mag_Tracer_DimName";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_mag_Tracer_DimNameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_mag_Tracer_DimDescription";
	};
	class ACE_10Rnd_762x51_Mag_SD: 10Rnd_Mk14_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_Subsonic";
		displayName="$STR_ace_ballistics_10Rnd_762x51_mag_SDName";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_mag_SDNameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_mag_SDDescription";
		initSpeed=330;
	};
	class ACE_10Rnd_762x51_M118LR_Mag: 10Rnd_Mk14_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_M118LR";
		count=10;
		displayName="$STR_ace_ballistics_10Rnd_762x51_M118LR_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_M118LR_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_M118LR_Mag_Description";
		initSpeed=780;
	};
	class ACE_10Rnd_762x51_Mk316_Mod_0_Mag: 10Rnd_Mk14_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_Mk316_Mod_0";
		count=10;
		displayName="$STR_ace_ballistics_10Rnd_762x51_Mk316_Mod_0_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_Mk316_Mod_0_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_Mk316_Mod_0_Mag_Description";
		initSpeed=790;
	};
	class ACE_10Rnd_762x51_Mk319_Mod_0_Mag: 10Rnd_Mk14_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_Mk319_Mod_0";
		count=10;
		displayName="$STR_ace_ballistics_10Rnd_762x51_Mk319_Mod_0_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_Mk319_Mod_0_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_Mk319_Mod_0_Mag_Description";
		initSpeed=900;
	};
	class ACE_10Rnd_762x51_M993_AP_Mag: 10Rnd_Mk14_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_M993_AP";
		count=10;
		displayName="$STR_ace_ballistics_10Rnd_762x51_M993_AP_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x51_M993_AP_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x51_M993_AP_Mag_Description";
		initSpeed=920;
	};
	class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_M118LR";
		displayName="$STR_ace_ballistics_20Rnd_762x51_M118LR_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_M118LR_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_M118LR_Mag_Description";
		initSpeed=785;
	};
	class ACE_20Rnd_762x51_Mk316_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_Mk316_Mod_0";
		count=20;
		displayName="$STR_ace_ballistics_20Rnd_762x51_Mk316_Mod_0_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_Mk316_Mod_0_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_Mk316_Mod_0_Mag_Description";
		initSpeed=798;
	};
	class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_Mk319_Mod_0";
		displayName="$STR_ace_ballistics_20Rnd_762x51_Mk319_Mod_0_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_Mk319_Mod_0_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_Mk319_Mod_0_Mag_Description";
		initSpeed=910;
	};
	class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x51_Ball_M993_AP";
		count=20;
		displayName="$STR_ace_ballistics_20Rnd_762x51_M993_AP_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x51_M993_AP_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x51_M993_AP_Mag_Description";
		initSpeed=930;
	};
	class ACE_30Rnd_65x47_Scenar_mag: 30Rnd_65x39_caseless_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x47_Ball_Scenar";
		initSpeed=826;
		displayName="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_Description";
	};
	class ACE_30Rnd_65x47_Scenar_black_mag: 30Rnd_65x39_caseless_black_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x47_Ball_Scenar";
		initSpeed=826;
		displayName="$STR_ace_ballistics_30Rnd_65x47_Scenar_black_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_Description";
	};
	class ACE_30Rnd_65x47_Scenar_khaki_mag: 30Rnd_65x39_caseless_khaki_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x47_Ball_Scenar";
		initSpeed=826;
		displayName="$STR_ace_ballistics_30Rnd_65x47_Scenar_khaki_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_Description";
	};
	class ACE_20Rnd_65x47_Scenar_mag: 20Rnd_650x39_Cased_Mag_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x47_Ball_Scenar";
		initSpeed=826;
		displayName="$STR_ace_ballistics_20Rnd_65x47_Scenar_mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_65x47_Scenar_mag_Description";
	};
	class ACE_30Rnd_65x47_Scenar_msbs_mag: 30Rnd_65x39_caseless_msbs_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65x47_Ball_Scenar";
		initSpeed=826;
		displayName="$STR_ace_ballistics_30Rnd_65x47_Scenar_msbs_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65x47_Scenar_msbs_mag_Description";
	};
	class ACE_30Rnd_65_Creedmor_mag: 30Rnd_65x39_caseless_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65_Creedmor_Ball";
		initSpeed=857;
		displayName="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_Description";
	};
	class ACE_30Rnd_65_Creedmor_black_mag: 30Rnd_65x39_caseless_black_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65_Creedmor_Ball";
		initSpeed=857;
		displayName="$STR_ace_ballistics_30Rnd_65_Creedmor_black_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_Description";
	};
	class ACE_30Rnd_65_Creedmor_khaki_mag: 30Rnd_65x39_caseless_khaki_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65_Creedmor_Ball";
		initSpeed=857;
		displayName="$STR_ace_ballistics_30Rnd_65_Creedmor_khaki_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_Description";
	};
	class ACE_20Rnd_65_Creedmor_mag: 20Rnd_650x39_Cased_Mag_F
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65_Creedmor_Ball";
		initSpeed=857;
		displayName="$STR_ace_ballistics_20Rnd_65_Creedmor_mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_65_Creedmor_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_65_Creedmor_mag_Description";
	};
	class ACE_30Rnd_65_Creedmor_msbs_mag: 30Rnd_65x39_caseless_msbs_mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_65_Creedmor_Ball";
		initSpeed=857;
		displayName="$STR_ace_ballistics_30Rnd_65_Creedmor_msbs_mag_Name";
		displayNameShort="$STR_ace_ballistics_30Rnd_65_Creedmor_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_30Rnd_65_Creedmor_msbs_mag_Description";
	};
	class 10Rnd_338_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_338_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
		count=10;
		ammo="B_338_Ball";
		initSpeed=915;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_338_Mag1";
		mass=14;
	};
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_338_Ball";
		displayName="$STR_ace_ballistics_10Rnd_338_300gr_HPBT_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_338_300gr_HPBT_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_338_300gr_HPBT_Mag_Description";
		initSpeed=800;
	};
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_338_Ball_API526";
		displayName="$STR_ace_ballistics_10Rnd_338_API526_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_338_API526_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_338_API526_Mag_Description";
		initSpeed=880;
	};
	class ACE_20Rnd_762x67_Mk248_Mod_0_Mag: 10Rnd_338_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x67_Ball_Mk248_Mod_0";
		count=20;
		scope=1;
		mass=28;
		displayName="$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_0_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_0_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_0_Mag_Description";
		initSpeed=865;
	};
	class ACE_20Rnd_762x67_Mk248_Mod_1_Mag: 10Rnd_338_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x67_Ball_Mk248_Mod_1";
		count=20;
		scope=1;
		mass=28;
		displayName="$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_1_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_1_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x67_Mk248_Mod_1_Mag_Description";
		initSpeed=847;
	};
	class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag: 10Rnd_338_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x67_Ball_Berger_Hybrid_OTM";
		count=20;
		scope=1;
		mass=28;
		displayName="$STR_ace_ballistics_20Rnd_762x67_Berger_Hybrid_OTM_Mag_Name";
		displayNameShort="$STR_ace_ballistics_20Rnd_762x67_Berger_Hybrid_OTM_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_20Rnd_762x67_Berger_Hybrid_OTM_Mag_Description";
		initSpeed=800;
	};
	class ACE_10Rnd_762x67_Mk248_Mod_0_Mag: ACE_20Rnd_762x67_Mk248_Mod_0_Mag
	{
		scope=2;
		count=10;
		mass=14;
		displayName="$STR_ace_ballistics_10Rnd_762x67_Mk248_Mod_0_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x67_Mk248_Mod_0_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x67_Mk248_Mod_0_Mag_Description";
	};
	class ACE_10Rnd_762x67_Mk248_Mod_1_Mag: ACE_20Rnd_762x67_Mk248_Mod_1_Mag
	{
		scope=2;
		count=10;
		mass=14;
		displayName="$STR_ace_ballistics_10Rnd_762x67_Mk248_Mod_1_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x67_Mk248_Mod_1_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x67_Mk248_Mod_1_Mag_Description";
	};
	class ACE_10Rnd_762x67_Berger_Hybrid_OTM_Mag: ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag
	{
		scope=2;
		count=10;
		mass=14;
		displayName="$STR_ace_ballistics_10Rnd_762x67_Berger_Hybrid_OTM_Mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x67_Berger_Hybrid_OTM_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x67_Berger_Hybrid_OTM_Mag_Description";
	};
	class ACE_7Rnd_408_305gr_Mag: 7Rnd_408_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_408_Ball";
		displayName="$STR_ace_ballistics_7Rnd_408_305gr_Mag_Name";
		displayNameShort="$STR_ace_ballistics_7Rnd_408_305gr_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_7Rnd_408_305gr_Mag_Description";
		initSpeed=1067;
	};
	class ACE_5Rnd_127x99_Mag: 5Rnd_127x108_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="B_127x99_Ball";
		displayName="$STR_ace_ballistics_5Rnd_127x99_Mag_Name";
		displayNameShort="$STR_ace_ballistics_127x99_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_5Rnd_127x99_Mag_Description";
		initSpeed=900;
	};
	class ACE_5Rnd_127x99_API_Mag: 5Rnd_127x108_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_127x99_API";
		displayName="$STR_ace_ballistics_5Rnd_127x99_API_Mag_Name";
		displayNameShort="$STR_ace_ballistics_127x99_API_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_5Rnd_127x99_API_Mag_Description";
		initSpeed=900;
	};
	class ACE_5Rnd_127x99_AMAX_Mag: 5Rnd_127x108_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_127x99_Ball_AMAX";
		displayName="$STR_ace_ballistics_5Rnd_127x99_AMAX_Mag_Name";
		displayNameShort="$STR_ace_ballistics_127x99_AMAX_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_5Rnd_127x99_AMAX_Mag_Description";
		initSpeed=860;
	};
	class ACE_10Rnd_127x99_Mag: ACE_5Rnd_127x99_Mag
	{
		count=10;
		mass=32;
		displayName="$STR_ace_ballistics_10Rnd_127x99_Mag_Name";
		displayNameShort="$STR_ace_ballistics_127x99_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_127x99_Mag_Description";
	};
	class ACE_10Rnd_127x99_API_Mag: ACE_5Rnd_127x99_API_Mag
	{
		count=10;
		mass=32;
		displayName="$STR_ace_ballistics_10Rnd_127x99_API_Mag_Name";
		displayNameShort="$STR_ace_ballistics_127x99_API_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_127x99_API_Mag_Description";
	};
	class ACE_10Rnd_127x99_AMAX_Mag: ACE_5Rnd_127x99_AMAX_Mag
	{
		count=10;
		mass=32;
		displayName="$STR_ace_ballistics_10Rnd_127x99_AMAX_Mag_Name";
		displayNameShort="$STR_ace_ballistics_127x99_AMAX_Mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_127x99_AMAX_Mag_Description";
	};
	class 10Rnd_50BW_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_50BW_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_50BW_Mag_F1";
		ammo="B_50BW_Ball_F";
		count=10;
		initSpeed=580;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_10Rnd_50BW_Mag_F_ca.paa";
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=12;
	};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_10Rnd_9x21_Mag0";
		count=10;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_9x21_Mag1";
		mass=4;
		initSpeed=410;
	};
	class ACE_16Rnd_9x19_mag: 16Rnd_9x21_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_9x19_Ball";
		displayName="$STR_ace_ballistics_16Rnd_9x19_mag_Name";
		displayNameShort="$STR_ace_ballistics_16Rnd_9x19_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_16Rnd_9x19_mag_Description";
		initSpeed=370;
	};
	class ACE_10Rnd_762x54_Tracer_mag: 10Rnd_762x54_Mag
	{
		author="$STR_ace_common_ACETeam";
		ammo="ACE_762x54_Ball_7T2";
		displayName="$STR_ace_ballistics_10Rnd_762x54_Tracer_mag_Name";
		displayNameShort="$STR_ace_ballistics_10Rnd_762x54_Tracer_mag_NameShort";
		descriptionShort="$STR_ace_ballistics_10Rnd_762x54_Tracer_mag_Description";
		initSpeed=810;
		tracersEvery=1;
	};
	class 10Rnd_127x54_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_127x54_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_127x54_CA.paa";
		count=10;
		ammo="B_127x54_Ball";
		initSpeed=290;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_127x54_Mag1";
		mass=12;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_F1";
		ammo="B_556x45_Ball_Tracer_Red";
		count=150;
		initSpeed=930;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_150rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=30;
		reloadAction="GestureReloadSPAR_02";
	};
	class ACE_Chemlight_Orange: Chemlight_green
	{
		ACE_Attachable="ACE_G_Chemlight_Orange";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Orange";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_Orange";
		displayName="$STR_ace_chemlights_Orange_DisplayName";
		displayNameShort="$STR_ace_chemlights_Orange_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_Orange_DescriptionShort";
		model="\A3\Weapons_f\chemlight\chemlight_yellow";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_orange_x_ca.paa";
	};
	class ACE_Chemlight_White: Chemlight_green
	{
		ACE_Attachable="ACE_G_Chemlight_White";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_White";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_White";
		displayName="$STR_ace_chemlights_White_DisplayName";
		displayNameShort="$STR_ace_chemlights_White_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_White_DescriptionShort";
		model="\A3\Weapons_f\chemlight\chemlight_yellow";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_white_x_ca.paa";
	};
	class ACE_Chemlight_HiRed: Chemlight_red
	{
		ACE_Attachable="ACE_G_Chemlight_HiRed";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_HiRed";
		displayName="$STR_ace_chemlights_HiRed_DisplayName";
		displayNameShort="$STR_ace_chemlights_HiRed_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_HiRed_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_hired_x_ca.paa";
	};
	class ACE_Chemlight_HiYellow: Chemlight_yellow
	{
		ACE_Attachable="ACE_G_Chemlight_HiYellow";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_HiYellow";
		displayName="$STR_ace_chemlights_HiYellow_DisplayName";
		displayNameShort="$STR_ace_chemlights_HiYellow_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_HiYellow_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_hiyellow_x_ca.paa";
	};
	class ACE_Chemlight_HiWhite: ACE_Chemlight_White
	{
		ACE_Attachable="ACE_G_Chemlight_HiWhite";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_HiWhite";
		displayName="$STR_ace_chemlights_HiWhite_DisplayName";
		displayNameShort="$STR_ace_chemlights_HiWhite_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_HiWhite_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_hiwhite_x_ca.paa";
	};
	class ACE_Chemlight_HiBlue: Chemlight_blue
	{
		ACE_Attachable="ACE_G_Chemlight_HiBlue";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_HiBlue";
		displayName="$STR_ace_chemlights_HiBlue_DisplayName";
		displayNameShort="$STR_ace_chemlights_HiBlue_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_HiBlue_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_hiblue_x_ca.paa";
	};
	class ACE_Chemlight_HiGreen: Chemlight_green
	{
		ACE_Attachable="ACE_G_Chemlight_HiGreen";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_HiGreen";
		displayName="$STR_ace_chemlights_HiGreen_DisplayName";
		displayNameShort="$STR_ace_chemlights_HiGreen_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_HiGreen_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_higreen_x_ca.paa";
	};
	class ACE_Chemlight_UltraHiOrange: ACE_Chemlight_Orange
	{
		ACE_Attachable="ACE_G_Chemlight_UltraHiOrange";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_UltraHiOrange";
		displayName="$STR_ace_chemlights_UltraHiOrange_DisplayName";
		displayNameShort="$STR_ace_chemlights_UltraHiOrange_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_UltraHiOrange_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_ultrahiorange_x_ca.paa";
	};
	class ACE_Chemlight_HiOrange: ACE_Chemlight_UltraHiOrange
	{
		author="$STR_ace_common_ACETeam";
		scope=1;
		scopeArsenal=1;
	};
	class ACE_Chemlight_IR: Chemlight_green
	{
		ACE_Attachable="ACE_Chemlight_IR_Dummy";
		ACE_Chemlight_Shield="";
		author="$STR_ace_common_ACETeam";
		ammo="ACE_G_Chemlight_IR";
		displayName="$STR_ace_chemlights_IR_DisplayName";
		displayNameShort="$STR_ace_chemlights_IR_DisplayNameShort";
		descriptionShort="$STR_ace_chemlights_IR_DescriptionShort";
		picture="\z\ace\addons\chemlights\UI\ace_chemlight_ir_x_ca.paa";
	};
	class ace_csw_100Rnd_127x99_mag: 100Rnd_127x99_mag
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_csw_127x99_displayName";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		type=256;
		mass=96;
		ACE_isBelt=1;
	};
	class ace_csw_100Rnd_127x99_mag_red: 100Rnd_127x99_mag_Tracer_Red
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_csw_127x99_red_displayName";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		type=256;
		mass=96;
		ACE_isBelt=1;
	};
	class ace_csw_100Rnd_127x99_mag_green: 100Rnd_127x99_mag_Tracer_Green
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_csw_127x99_green_displayName";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		type=256;
		mass=96;
		ACE_isBelt=1;
	};
	class ace_csw_100Rnd_127x99_mag_yellow: 100Rnd_127x99_mag_Tracer_Yellow
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_csw_127x99_yellow_displayName";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		type=256;
		mass=96;
		ACE_isBelt=1;
	};
	class ace_csw_50Rnd_127x108_mag: 50Rnd_127x108_Ball
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_csw_127x108_displayName";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		type=256;
		mass=50;
		ACE_isBelt=1;
	};
	class ace_csw_20Rnd_20mm_G_belt: 40Rnd_20mm_G_belt
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_csw_GMGBelt_displayName";
		model="\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture="\z\ace\addons\csw\UI\ammoBox_50bmg_ca.paa";
		type=256;
		count=20;
		mass=96;
		ACE_isBelt=1;
	};
	class ACE_FlareTripMine_Mag: APERSTripMine_Wire_Mag
	{
		author="$STR_ace_common_aceteam";
		ammo="ACE_FlareTripMine_Wire_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSTripwireMine";
		displayName="$STR_ace_explosives_TripFlare_Name";
		descriptionShort="$STR_ace_explosives_TripFlare_Description";
		class Library
		{
			libTextDesc="$STR_ace_explosives_TripFlare_Description";
		};
	};
	class APERSMineDispenser_Mag: SatchelCharge_Remote_Mag
	{
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSMineDispenser";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter"
			};
			class Timer
			{
				FuseTime=0.5;
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=60;
		ammo="APERSMineDispenser_Ammo";
		picture="\A3\Weapons_F_Orange\Explosives\Data\UI\gear_APERSmineDispenser_CA.paa";
		model="\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_i";
		displayName="$STR_A3_CfgMagazines_APERSMineDispenser_Mag0";
		displayNameShort="Mine Dispenser descr. short";
		class Library
		{
			libTextDesc="$STR_A3_CfgMagazines_APERSMineDispenser_Mag_Library0";
		};
	};
	class TrainingMine_Mag: APERSMine_Range_Mag
	{
		ace_explosives_SetupObject="ACE_Explosives_Place_TrainingMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.02;
			};
		};
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=15;
		ammo="TrainingMine_Ammo";
		picture="\A3\Weapons_F_Orange\Explosives\Data\UI\gear_TrainingMine_CA.paa";
		model="\A3\Weapons_F_Orange\Explosives\TrainingMine_F";
		displayName="$STR_A3_CfgMagazines_TrainingMine_Mag0";
		displayNameShort="Dummy Mine descr. short";
		class Library
		{
			libTextDesc="$STR_A3_CfgMagazines_TrainingMine_Mag_Library0";
		};
	};
	class ACE_120Rnd_35mm_ABM_shells: 680Rnd_35mm_AA_shells
	{
		ammo="ACE_B_35mm_ABM";
		count=120;
		displayName="35mm ABM Shells";
		displayNameShort="35mm ABM";
	};
	class ACE_120Rnd_35mm_ABM_shells_Tracer_Red: 680Rnd_35mm_AA_shells_Tracer_Red
	{
		ammo="ACE_B_35mm_ABM_Tracer_Red";
		count=120;
		displayName="35mm ABM Shells";
		displayNameShort="35mm ABM-T";
	};
	class ACE_120Rnd_35mm_ABM_shells_Tracer_Green: 680Rnd_35mm_AA_shells_Tracer_Green
	{
		ammo="ACE_B_35mm_ABM_Tracer_Green";
		count=120;
		displayName="35mm ABM Shells";
		displayNameShort="35mm ABM-T";
	};
	class ACE_120Rnd_35mm_ABM_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells_Tracer_Yellow
	{
		ammo="ACE_B_35mm_ABM_Tracer_Yellow";
		count=120;
		displayName="35mm ABM Shells";
		displayNameShort="35mm ABM-T";
	};
	class 6Rnd_ACE_Hellfire_AGM114K: 12Rnd_PG_missiles
	{
		count=6;
		ammo="ACE_Hellfire_AGM114K";
		displayName="AGM-114K [ACE]";
		displayNameShort="AGM-114K";
		descriptionShort="$STR_ace_hellfire_KDescriptionShort";
	};
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName="1x AGM-114K [ACE]";
		count=1;
		mass=70;
		pylonWeapon="ace_hellfire_launcher";
		hardpoints[]=
		{
			"SCALPEL_1RND"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class PylonRack_1Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName="1x AGM-114K [ACE]";
		count=1;
		mass=85;
		pylonWeapon="ace_hellfire_launcher";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR",
			"B_ASRRAM_EJECTOR",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_MELB"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName="3x AGM-114K [ACE]";
		count=3;
		mass=250;
		pylonWeapon="ace_hellfire_launcher";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,3};
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114K: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName="4x AGM-114K [ACE]";
		count=4;
		mass=340;
		pylonWeapon="ace_hellfire_launcher";
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class 6Rnd_ACE_Hellfire_AGM114N: 6Rnd_ACE_Hellfire_AGM114K
	{
		count=6;
		ammo="ACE_Hellfire_AGM114N";
		displayName="AGM-114N [ACE]";
		displayNameShort="AGM-114N";
		descriptionShort="$STR_ace_hellfire_NDescriptionShort";
	};
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114N: PylonMissile_1Rnd_ACE_Hellfire_AGM114K
	{
		displayName="1x AGM-114N [ACE]";
		displayNameShort="AGM-114N";
		descriptionShort="$STR_ace_hellfire_NDescriptionShort";
		ammo="ACE_Hellfire_AGM114N";
		pylonWeapon="ace_hellfire_launcher_N";
	};
	class PylonRack_1Rnd_ACE_Hellfire_AGM114N: PylonRack_1Rnd_ACE_Hellfire_AGM114K
	{
		displayName="1x AGM-114N [ACE]";
		displayNameShort="AGM-114N";
		descriptionShort="$STR_ace_hellfire_NDescriptionShort";
		ammo="ACE_Hellfire_AGM114N";
		pylonWeapon="ace_hellfire_launcher_N";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114N: PylonRack_3Rnd_ACE_Hellfire_AGM114K
	{
		displayName="3x AGM-114N [ACE]";
		displayNameShort="AGM-114N";
		descriptionShort="$STR_ace_hellfire_NDescriptionShort";
		ammo="ACE_Hellfire_AGM114N";
		pylonWeapon="ace_hellfire_launcher_N";
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114N: PylonRack_4Rnd_ACE_Hellfire_AGM114K
	{
		displayName="4x AGM-114N [ACE]";
		displayNameShort="AGM-114N";
		descriptionShort="$STR_ace_hellfire_NDescriptionShort";
		ammo="ACE_Hellfire_AGM114N";
		pylonWeapon="ace_hellfire_launcher_N";
	};
	class 6Rnd_ACE_Hellfire_AGM114L: 6Rnd_ACE_Hellfire_AGM114K
	{
		count=6;
		ammo="ACE_Hellfire_AGM114L";
		displayName="AGM-114L [ACE]";
		displayNameShort="AGM-114L";
		descriptionShort="$STR_ace_hellfire_LDescriptionShort";
	};
	class PylonMissile_1Rnd_ACE_Hellfire_AGM114L: PylonMissile_1Rnd_ACE_Hellfire_AGM114K
	{
		displayName="1x AGM-114L [ACE]";
		displayNameShort="AGM-114L";
		descriptionShort="$STR_ace_hellfire_LDescriptionShort";
		ammo="ACE_Hellfire_AGM114L";
		pylonWeapon="ace_hellfire_launcher_L";
	};
	class PylonRack_1Rnd_ACE_Hellfire_AGM114L: PylonRack_1Rnd_ACE_Hellfire_AGM114K
	{
		displayName="1x AGM-114L [ACE]";
		displayNameShort="AGM-114L";
		descriptionShort="$STR_ace_hellfire_LDescriptionShort";
		ammo="ACE_Hellfire_AGM114L";
		pylonWeapon="ace_hellfire_launcher_L";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114L: PylonRack_3Rnd_ACE_Hellfire_AGM114K
	{
		displayName="3x AGM-114L [ACE]";
		displayNameShort="AGM-114L";
		descriptionShort="$STR_ace_hellfire_LDescriptionShort";
		ammo="ACE_Hellfire_AGM114L";
		pylonWeapon="ace_hellfire_launcher_L";
	};
	class PylonRack_4Rnd_ACE_Hellfire_AGM114L: PylonRack_4Rnd_ACE_Hellfire_AGM114K
	{
		displayName="4x AGM-114L [ACE]";
		displayNameShort="AGM-114L";
		descriptionShort="$STR_ace_hellfire_LDescriptionShort";
		ammo="ACE_Hellfire_AGM114L";
		pylonWeapon="ace_hellfire_launcher_L";
	};
	class ace_hot_1_6Rnd: 12Rnd_PG_missiles
	{
		count=6;
		initSpeed=100;
		ammo="ace_hot_HOT1";
		displayName="$STR_ace_hot_hot1";
		displayNameShort="$STR_ace_hot_hot1";
		descriptionShort="$STR_ace_hot_missileType";
	};
	class ace_hot_1_2Rnd: ace_hot_1_6Rnd
	{
		count=2;
	};
	class ace_hot_1_PylonMissile_1Rnd: ace_hot_1_6Rnd
	{
		displayName="$STR_ace_hot_hot1_1";
		count=1;
		mass=70;
		pylonWeapon="ace_hot_1_launcher";
		hardpoints[]=
		{
			"SCALPEL_1RND"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class ace_hot_1_PylonRack_1Rnd: ace_hot_1_6Rnd
	{
		displayName="$STR_ace_hot_hot1_1";
		count=1;
		mass=85;
		pylonWeapon="ace_hot_1_launcher";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR",
			"B_ASRRAM_EJECTOR",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_MELB"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};
	class ace_hot_1_PylonRack_3Rnd: ace_hot_1_6Rnd
	{
		displayName="$STR_ace_hot_hot1_3";
		count=3;
		mass=250;
		pylonWeapon="ace_hot_1_launcher";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,3};
	};
	class ace_hot_1_PylonRack_4Rnd: ace_hot_1_6Rnd
	{
		displayName="$STR_ace_hot_hot1_4";
		count=4;
		mass=340;
		pylonWeapon="ace_hot_1_launcher";
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class ace_hot_2_6Rnd: 12Rnd_PG_missiles
	{
		count=6;
		initSpeed=100;
		ammo="ace_hot_HOT2";
		displayName="$STR_ace_hot_hot2";
		displayNameShort="$STR_ace_hot_hot2";
		descriptionShort="$STR_ace_hot_missileType";
	};
	class ace_hot_2_2Rnd: ace_hot_2_6Rnd
	{
		count=2;
	};
	class ace_hot_2_PylonMissile_1Rnd: ace_hot_2_6Rnd
	{
		displayName="$STR_ace_hot_hot2_1";
		pylonWeapon="ace_hot_2_launcher";
		count=1;
		mass=70;
		hardpoints[]=
		{
			"SCALPEL_1RND"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class ace_hot_2_PylonRack_1Rnd: ace_hot_2_6Rnd
	{
		displayName="$STR_ace_hot_hot2_1";
		pylonWeapon="ace_hot_2_launcher";
		count=1;
		mass=85;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR",
			"B_ASRRAM_EJECTOR",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_MELB"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};
	class ace_hot_2_PylonRack_3Rnd: ace_hot_2_6Rnd
	{
		displayName="$STR_ace_hot_hot2_3";
		pylonWeapon="ace_hot_2_launcher";
		count=3;
		mass=250;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,3};
	};
	class ace_hot_2_PylonRack_4Rnd: ace_hot_2_6Rnd
	{
		displayName="$STR_ace_hot_hot2_4";
		pylonWeapon="ace_hot_2_launcher";
		count=4;
		mass=340;
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class ace_hot_2MP_6Rnd: 12Rnd_PG_missiles
	{
		count=6;
		initSpeed=100;
		ammo="ace_hot_HOT2MP";
		displayName="$STR_ace_hot_hot2mp";
		displayNameShort="$STR_ace_hot_hot2mp";
		descriptionShort="$STR_ace_hot_missileType";
	};
	class ace_hot_2MP_2Rnd: ace_hot_2MP_6Rnd
	{
		count=2;
	};
	class ace_hot_2MP_PylonMissile_1Rnd: ace_hot_2MP_6Rnd
	{
		displayName="$STR_ace_hot_hot2mp_1";
		pylonWeapon="ace_hot_2mp_launcher";
		count=1;
		mass=70;
		hardpoints[]=
		{
			"SCALPEL_1RND"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class ace_hot_2MP_PylonRack_1Rnd: ace_hot_2MP_6Rnd
	{
		displayName="$STR_ace_hot_hot2mp_1";
		pylonWeapon="ace_hot_2mp_launcher";
		count=1;
		mass=85;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR",
			"B_ASRRAM_EJECTOR",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_MELB"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};
	class ace_hot_2MP_PylonRack_3Rnd: ace_hot_2MP_6Rnd
	{
		displayName="$STR_ace_hot_hot2mp_3";
		pylonWeapon="ace_hot_2mp_launcher";
		count=3;
		mass=250;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,3};
	};
	class ace_hot_2MP_PylonRack_4Rnd: ace_hot_2MP_6Rnd
	{
		displayName="$STR_ace_hot_hot2mp_4";
		pylonWeapon="ace_hot_2mp_launcher";
		count=4;
		mass=340;
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class ace_hot_3_6Rnd: 12Rnd_PG_missiles
	{
		count=6;
		initSpeed=100;
		ammo="ace_hot_HOT3";
		displayName="$STR_ace_hot_hot3";
		displayNameShort="$STR_ace_hot_hot3";
		descriptionShort="$STR_ace_hot_missileType";
	};
	class ace_hot_3_2Rnd: ace_hot_3_6Rnd
	{
		count=2;
	};
	class ace_hot_3_PylonMissile_1Rnd: ace_hot_3_6Rnd
	{
		displayName="$STR_ace_hot_hot3_1";
		pylonWeapon="ace_hot_3_launcher";
		count=1;
		mass=70;
		hardpoints[]=
		{
			"SCALPEL_1RND"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class ace_hot_3_PylonRack_1Rnd: ace_hot_3_6Rnd
	{
		displayName="$STR_ace_hot_hot3_1";
		pylonWeapon="ace_hot_3_launcher";
		count=1;
		mass=85;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR",
			"B_ASRRAM_EJECTOR",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_SMALL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_MELB"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};
	class ace_hot_3_PylonRack_3Rnd: ace_hot_3_6Rnd
	{
		displayName="$STR_ace_hot_hot3_3";
		pylonWeapon="ace_hot_3_launcher";
		count=3;
		mass=250;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,3};
	};
	class ace_hot_3_PylonRack_4Rnd: ace_hot_3_6Rnd
	{
		displayName="$STR_ace_hot_hot3_4";
		pylonWeapon="ace_hot_3_launcher";
		count=4;
		mass=340;
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"CUP_NATO_HELO_LARGE",
			"RHS_HP_HELLFIRE_RACK",
			"RHS_HP_LONGBOW_RACK"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mirrorMissilesIndexes[]={2,1,4,3};
	};
	class ace_maverick_L_magazine_x1: magazine_Missile_AGM_02_x1
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
	};
	class ace_maverick_L_pylonmissile_x1: PylonMissile_Missile_AGM_02_x1
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_maverick_L_Launcher";
	};
	class ace_maverick_L_pylonmissile_x2: PylonMissile_Missile_AGM_02_x2
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_maverick_L_Launcher";
	};
	class ace_maverick_L_pylonRack_1Rnd: PylonRack_1Rnd_Missile_AGM_02_F
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_maverick_L_Launcher_Plane";
	};
	class ace_maverick_L_PylonRack_3Rnd: PylonRack_3Rnd_Missile_AGM_02_F
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x3";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_maverick_L_Launcher_Plane";
	};
	class ace_maverick_L_PylonRack_x1: PylonRack_Missile_AGM_02_x1
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_maverick_L_Launcher";
	};
	class ace_maverick_L_PylonRack_x2: PylonRack_Missile_AGM_02_x2
	{
		ammo="ace_maverick_L";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_L_MAG_DESCR";
		displayName="$STR_ace_maverick_L_MAG_x2";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_maverick_L_Launcher";
	};
	class magazine_Missile_AGM_KH25_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AGM_KH25_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AGM_KH25_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_Sharur_tooltip";
		ammo="Missile_AGM_01_F";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.160769,0.106213},
									1
								},
								
								{
									{0.15615401,0.086331397},
									1
								},
								
								{
									{0.15615401,0.0243195},
									1
								},
								
								{
									{0.15923101,0.0243195},
									1
								},
								
								{
									{0.15923101,0.019112401},
									1
								},
								
								{
									{0.15653799,0.0153254},
									1
								},
								
								{
									{0.15346199,-0.0097633097},
									1
								},
								
								{
									{0.152308,-0.0121302},
									1
								},
								
								{
									{0.150769,-0.0135503},
									1
								},
								
								{
									{0.148846,-0.014497},
									1
								},
								
								{
									{0.14692301,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0121302},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14115401,0.0153254},
									1
								},
								
								{
									{0.13846201,0.019112401},
									1
								},
								
								{
									{0.13846201,0.0243195},
									1
								},
								
								{
									{0.14153799,0.0243195},
									1
								},
								
								{
									{0.14153799,0.086331397},
									1
								},
								
								{
									{0.136923,0.106213},
									1
								},
								
								{
									{0.136923,0.119941},
									1
								},
								
								{
									{0.143462,0.118047},
									1
								},
								
								{
									{0.143462,0.144556},
									1
								},
								
								{
									{0.143462,0.14787},
									1
								},
								
								{
									{0.14423101,0.149763},
									1
								},
								
								{
									{0.145769,0.151657},
									1
								},
								
								{
									{0.14730801,0.152604},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.15038501,0.152604},
									1
								},
								
								{
									{0.151923,0.151657},
									1
								},
								
								{
									{0.15307701,0.149763},
									1
								},
								
								{
									{0.154231,0.14787},
									1
								},
								
								{
									{0.154231,0.144556},
									1
								},
								
								{
									{0.154231,0.118047},
									1
								},
								
								{
									{0.160769,0.119941},
									1
								},
								
								{
									{0.160769,0.106213},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="I";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.168,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.055
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.168,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.075000003
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AGM_KH25_x1: magazine_Missile_AGM_KH25_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_KH25_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
		hardpoints[]=
		{
			"O_KH25"
		};
		pylonWeapon="weapon_AGM_KH25Launcher";
	};
	class PylonMissile_Missile_AGM_KH25_INT_x1: PylonMissile_Missile_AGM_KH25_x1
	{
		hardpoints[]=
		{
			"O_KH25_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class ace_kh25ml_pylonrack_x1: PylonRack_1Rnd_Missile_AGM_01_F
	{
		ammo="ace_kh25ml";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName="$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_kh25ml_launcher";
	};
	class ace_kh25ml_magazine_x1: magazine_Missile_AGM_KH25_x1
	{
		ammo="ace_kh25ml";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName="$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
	};
	class ace_kh25ml_pylonmissile_x1: PylonMissile_Missile_AGM_KH25_x1
	{
		ammo="ace_kh25ml";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName="$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_kh25ml_launcher";
	};
	class ace_kh25ml_pylonmissile_int_x1: PylonMissile_Missile_AGM_KH25_INT_x1
	{
		ammo="ace_kh25ml";
		author="xrufix";
		descriptionShort="$STR_ace_maverick_KH25ML_MAG_DESCR";
		displayName="$STR_ace_maverick_KH25ML_MAG_x1";
		displayNameShort="$STR_ace_maverick_L_MAG_short";
		pylonWeapon="ace_kh25ml_launcher";
	};
	class Vorona_HEAT: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Vorona_HEAT0";
		displayNameShort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_Vorona_HEAT_descriptionshort0";
		ammo="M_Vorona_HEAT";
		type="6 * 		256";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_heat.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		mass=100;
		count=1;
		initSpeed=150;
		maxLeadSpeed=27.7778;
	};
	class Vorona_HE: Vorona_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Vorona_HE0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_Vorona_HE_descriptionshort0";
		ammo="M_Vorona_HE";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_he.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HE_F_ca.paa";
		mass=100;
		initSpeed=150;
		maxLeadSpeed=27.7778;
	};
	class ACE_1Rnd_82mm_Mo_HE: 8Rnd_82mm_Mo_shells
	{
		count=1;
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_mk6mortar_magazine_HE_displayName";
		displayNameShort="";
		descriptionShort="$STR_ace_mk6mortar_magazine_descriptionShort";
		model="\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass=50;
	};
	class ACE_1Rnd_82mm_Mo_Smoke: 8Rnd_82mm_Mo_Smoke_white
	{
		count=1;
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_mk6mortar_magazine_Smoke_displayName";
		displayNameShort="";
		descriptionShort="$STR_ace_mk6mortar_magazine_descriptionShort";
		model="\z\ace\addons\mk6mortar\data\l16_ammo_smk_white.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_smk_white_ca.paa";
		mass=50;
	};
	class ACE_1Rnd_82mm_Mo_Illum: 8Rnd_82mm_Mo_Flare_white
	{
		count=1;
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_mk6mortar_magazine_Illum_displayName";
		displayNameShort="";
		descriptionShort="$STR_ace_mk6mortar_magazine_descriptionShort";
		model="\z\ace\addons\mk6mortar\data\l16_ammo_illum.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_illum_ca.paa";
		mass=50;
	};
	class ACE_1Rnd_82mm_Mo_HE_Guided: 8Rnd_82mm_Mo_guided
	{
		count=1;
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_mk6mortar_magazine_HE_Guided_displayName";
		displayNameShort="";
		descriptionShort="$STR_ace_mk6mortar_magazine_descriptionShort";
		model="\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass=50;
	};
	class ACE_1Rnd_82mm_Mo_HE_LaserGuided: 8Rnd_82mm_Mo_LG
	{
		count=1;
		scope=2;
		scopeCurator=2;
		ace_arsenal_hide=-1;
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_mk6mortar_magazine_HE_LaserGuided_displayName";
		displayNameShort="";
		descriptionShort="$STR_ace_mk6mortar_magazine_descriptionShort";
		model="\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
		picture="\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass=50;
	};
	class ace_dragon_super: 1Rnd_GAA_missiles
	{
		sound[]={};
		soundFly[]={};
		soundHit[]={};
		model="\z\ace\addons\dragon\models\dragon.p3d";
		ammo="ace_dragon_super";
		initSpeed=120;
		scope=1;
		displayName="$STR_ace_dragon_dragonName";
		displayNameShort="$STR_ace_dragon_dragonName";
		descriptionShort="$STR_ace_dragon_dragonDescription";
	};
	class ace_intelitems_base: CA_Magazine
	{
		count=1;
		mass=1;
		ACE_isUnique=1;
		ace_intelitems_intel=1;
		ace_intelitems_control="";
	};
	class acex_intelitems_notepad: ace_intelitems_base
	{
		author="$STR_ace_common_ACETeam";
		scope=2;
		displayName="$STR_ace_intelitems_Notepad_DisplayName";
		descriptionShort="$STR_ace_intelitems_Notepad_Description";
		picture="\z\ace\addons\intelitems\ui\notepad_ca.paa";
		model="\a3\structures_f\items\documents\notepad_f.p3d";
		ace_intelitems_control="ace_intelitems_RscNotepad";
	};
	class acex_intelitems_document: ace_intelitems_base
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_intelitems_Document_DisplayName";
		descriptionShort="$STR_ace_intelitems_Document_Description";
		picture="\z\ace\addons\intelitems\ui\document_ca.paa";
		model="\a3\structures_f\items\documents\file2_f.p3d";
		ace_intelitems_control="ace_intelitems_RscDocument";
	};
	class acex_intelitems_photo: ace_intelitems_base
	{
		author="$STR_ace_common_ACETeam";
		displayName="$STR_ace_intelitems_Photo_DisplayName";
		descriptionShort="$STR_ace_intelitems_Photo_Description";
		picture="\z\ace\addons\intelitems\ui\photo_ca.paa";
		model="\a3\structures_f\items\documents\filephotos_f.p3d";
		ace_intelitems_control="ace_intelitems_RscPhoto";
	};
	class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_580x42_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_580x42_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_580x42_Mag_F1";
		count=100;
		mass=20;
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_100rnd";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_co.paa"
		};
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class 100Rnd_580x42_hex_Mag_F: 100Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_hex_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_hex_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"
		};
	};
	class 100Rnd_580x42_hex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_hex_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_hex_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"
		};
	};
	class 100Rnd_580x42_ghex_Mag_F: 100Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_ghex_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_ghex_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"
		};
	};
	class 100Rnd_580x42_ghex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_ghex_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_ghex_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"
		};
	};
	class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Sand_Mag_F0";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"
		};
	};
	class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Sand_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Green_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Green_Mag_F0";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"
		};
	};
	class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Green_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Green_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Green_F0";
		ammo="B_762x39_Ball_Green_F";
	};
	class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Tracer_Green_F0";
		ammo="B_762x39_Ball_Green_F";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_Green_F_ca.paa";
	};
	class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_762x39_AK12_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_AK12_Mag_F0";
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_762x39_ak12_30rnd";
		ammo="B_762x39_Ball_Green_F";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\rifles\ak12\data\ak12_ak12_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"
		};
	};
	class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_AK12_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Green_F0";
		ammo="B_545x39_Ball_Green_F";
	};
	class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Tracer_Green_F0";
		ammo="B_545x39_Ball_Green_F";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_ca.paa";
	};
	class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=200;
	};
	class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_Tracer_Red_F0";
		ammo="B_556x45_Ball_Tracer_Red";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
	};
	class 500Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=500;
		ammo="B_65x39_Caseless";
		tracersEvery=5;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_65x39_Belt1";
	};
	class 500Rnd_65x39_Belt_Tracer_Red_Splash: 500Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Red_splash";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Red0";
		displaynameShort="$STR_A3_TRACER_DNS";
	};
	class 500Rnd_65x39_Belt_Tracer_Green_Splash: 500Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Green_splash";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Green0";
		displaynameShort="$STR_A3_TRACER_DNS";
	};
	class 500Rnd_65x39_Belt_Tracer_Yellow_Splash: 500Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Yellow_splash";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Yellow0";
		displaynameShort="$STR_A3_TRACER_DNS";
	};
	class RPG7_F: RPG32_F
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_RPG7_F0";
		displaynameShort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		descriptionShort="$STR_A3_CfgMagazines_RPG7_F1";
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_RPG7_PG7V_1rnd.p3d";
		modelSpecialIsProxy=1;
		picture="\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed=134;
		ammo="R_PG7_F";
		type="2*		256";
		mass=40;
	};
	class 4Rnd_LG_Jian: 4Rnd_Missile_AGM_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_LG_Jian0";
		displayNameShort="$STR_A3_CFGMAGAZINES_8RND_LG_SCALPEL_DNS";
		ammo="M_Jian_AT";
		count=4;
		initSpeed=0;
	};
	class 4000Rnd_20mm_Tracer_Red_shells: 1000Rnd_20mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4000;
		tracersEvery=1;
	};
	class 160Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=160;
	};
	class 240Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_Tracer_Red_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=240;
	};
	class 100Rnd_105mm_HEAT_MP: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		count=100;
	};
	class magazine_Missile_rim116_x21: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Rim116_x21_magazine_name";
		displayNameShort="$STR_A3_Rim116_x21_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_BIM9_tooltip";
		ammo="ammo_Missile_rim116";
		count=21;
		initSpeed=40;
		maxLeadSpeed=750;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class magazine_Missile_rim162_x8: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Rim162_x8_magazine_name";
		displayNameShort="$STR_A3_Rim162_x8_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=8;
		ammo="ammo_Missile_rim162";
		initSpeed=60;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class magazine_Cannon_Phalanx_x1550: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Phalanx_x1550_magazine_name";
		descriptionShort="$STR_A3_Phalanx_x1550_magazine_description";
		ammo="ammo_AAA_Gun35mm_AA";
		count=1550;
		initSpeed=1440;
		maxLeadSpeed=600;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter01_Gun20mm_AA_x450: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x450_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x450_magazine_description";
		ammo="ammo_Fighter01_Gun20mm_AA";
		count=450;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter04_Gun20mm_AA_x150: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=150;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter04_Gun20mm_AA_x250: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=250;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Missile_AMRAAM_C_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AMRAAM_C_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=1;
		ammo="ammo_Missile_AMRAAM_C";
		initSpeed=0;
		maxLeadSpeed=800;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AMRAAM_D_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AMRAAM_D_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=1;
		ammo="ammo_Missile_AMRAAM_D";
		initSpeed=0;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_BIM9X_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_9x_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_BIM9_tooltip";
		ammo="ammo_Missile_BIM9X";
		count=1;
		initSpeed=0;
		maxLeadSpeed=700;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_GBU12_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_GBU_12_x1_magazine_name";
		displayNameShort="$STR_A3_Bomb_GBU_12_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		ammo="Bomb_04_F";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_C",
			"I_AMRAAM_C"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonRack_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_C_RAIL",
			"I_AMRAAM_C_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonRack_Missile_AMRAAM_C_x2: magazine_Missile_AMRAAM_C_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AMRAAM_C_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AMRAAM_C_DUAL_RAIL",
			"I_AMRAAM_C_DUAL_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonMissile_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonMissile_Missile_AMRAAM_D_INT_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_INT"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonRack_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_RAIL",
			"I_AMRAAM_D_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_AMRAAM_D_x2: magazine_Missile_AMRAAM_D_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AMRAAM_D_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_DUAL_RAIL",
			"I_AMRAAM_D_DUAL_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0099999998,0},
										1
									},
									
									{
										"Center",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{0,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
		hardpoints[]=
		{
			"B_BIM9X",
			"I_BIM9X"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		hardpoints[]=
		{
			"B_BIM9X_RAIL",
			"I_BIM9X_RAIL"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_BIM9X_x2: magazine_Missile_BIM9X_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AA_9x_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
		hardpoints[]=
		{
			"B_BIM9X_DUAL_RAIL",
			"I_BIM9X_DUAL_RAIL"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0099999998,0},
										1
									},
									
									{
										"Center",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{0,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Bomb_GBU12_x1: magazine_Bomb_GBU12_x1
	{
		count=1;
		displayName="$STR_A3_Bomb_GBU_12_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		hardpoints[]=
		{
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="weapon_GBU12Launcher";
	};
	class PylonRack_Bomb_GBU12_x2: magazine_Bomb_GBU12_x1
	{
		count=2;
		displayName="$STR_A3_Bomb_GBU_12_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		pylonWeapon="weapon_GBU12Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class magazine_Fighter02_Gun30mm_AA_x180: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_30mm_x180_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_30mm_x180_magazine_description";
		ammo="ammo_Fighter02_Gun30mm_AA";
		count=180;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=2;
		nameSound="cannon";
	};
	class magazine_Missile_AA_R73_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_R73_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_R73_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_R73_tooltip";
		ammo="ammo_Missile_AA_R73";
		count=1;
		initSpeed=0;
		maxLeadSpeed=700;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.15307701,0.14503001},
									1
								},
								
								{
									{0.15653799,0.141716},
									1
								},
								
								{
									{0.15923101,0.141716},
									1
								},
								
								{
									{0.15923101,0.113314},
									1
								},
								
								{
									{0.155385,0.110473},
									1
								},
								
								{
									{0.155385,0.0560355},
									1
								},
								
								{
									{0.16,0.0560355},
									1
								},
								
								{
									{0.16,0.052721899},
									1
								},
								
								{
									{0.15653799,0.044674601},
									1
								},
								
								{
									{0.15615401,0.034733701},
									1
								},
								
								{
									{0.15576901,0.0228994},
									1
								},
								
								{
									{0.155385,0.0176923},
									1
								},
								
								{
									{0.154231,0.0134319},
									1
								},
								
								{
									{0.15307701,0.0110651},
									1
								},
								
								{
									{0.151923,0.0091716005},
									1
								},
								
								{
									{0.150769,0.0082248496},
									1
								},
								
								{
									{0.149615,0.0082248496},
									1
								},
								
								{
									{0.149231,0.0082248496},
									1
								},
								
								{
									{0.14769199,0.0082248496},
									1
								},
								
								{
									{0.146538,0.0091716005},
									1
								},
								
								{
									{0.145385,0.0110651},
									1
								},
								
								{
									{0.14461499,0.0134319},
									1
								},
								
								{
									{0.143462,0.0176923},
									1
								},
								
								{
									{0.142692,0.0228994},
									1
								},
								
								{
									{0.142692,0.034733701},
									1
								},
								
								{
									{0.142308,0.044674601},
									1
								},
								
								{
									{0.13846201,0.052721899},
									1
								},
								
								{
									{0.13846201,0.0560355},
									1
								},
								
								{
									{0.143462,0.0560355},
									1
								},
								
								{
									{0.143462,0.110473},
									1
								},
								
								{
									{0.139231,0.113314},
									1
								},
								
								{
									{0.139231,0.141716},
									1
								},
								
								{
									{0.142308,0.141716},
									1
								},
								
								{
									{0.145385,0.14503001},
									1
								},
								
								{
									{0.15307701,0.14503001},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="I";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.0099999998
								},
								1
							};
							right[]=
							{
								{0.17,0.0099999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.035
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.17,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.055
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AA_R77_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_R77_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_R77_tooltip";
		count=1;
		ammo="ammo_Missile_AA_R77";
		initSpeed=0;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.160769,0.106213},
									1
								},
								
								{
									{0.15615401,0.086331397},
									1
								},
								
								{
									{0.15615401,0.0243195},
									1
								},
								
								{
									{0.15923101,0.0243195},
									1
								},
								
								{
									{0.15923101,0.019112401},
									1
								},
								
								{
									{0.15653799,0.0153254},
									1
								},
								
								{
									{0.15346199,-0.0097633097},
									1
								},
								
								{
									{0.152308,-0.0121302},
									1
								},
								
								{
									{0.150769,-0.0135503},
									1
								},
								
								{
									{0.148846,-0.014497},
									1
								},
								
								{
									{0.14692301,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0121302},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14115401,0.0153254},
									1
								},
								
								{
									{0.13846201,0.019112401},
									1
								},
								
								{
									{0.13846201,0.0243195},
									1
								},
								
								{
									{0.14153799,0.0243195},
									1
								},
								
								{
									{0.14153799,0.086331397},
									1
								},
								
								{
									{0.136923,0.106213},
									1
								},
								
								{
									{0.136923,0.119941},
									1
								},
								
								{
									{0.143462,0.118047},
									1
								},
								
								{
									{0.143462,0.144556},
									1
								},
								
								{
									{0.143462,0.14787},
									1
								},
								
								{
									{0.14423101,0.149763},
									1
								},
								
								{
									{0.145769,0.151657},
									1
								},
								
								{
									{0.14730801,0.152604},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.15038501,0.152604},
									1
								},
								
								{
									{0.151923,0.151657},
									1
								},
								
								{
									{0.15307701,0.149763},
									1
								},
								
								{
									{0.154231,0.14787},
									1
								},
								
								{
									{0.154231,0.144556},
									1
								},
								
								{
									{0.154231,0.118047},
									1
								},
								
								{
									{0.160769,0.119941},
									1
								},
								
								{
									{0.160769,0.106213},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.168,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.055
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="D";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.168,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.075000003
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.07
								},
								1
							};
							right[]=
							{
								{0.168,0.07},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.094999999
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_KAB250_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_KAB_250_x1_magazine_name";
		displayNameShort="$STR_A3_Bomb_KAB_250_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_LOM250_tooltip";
		ammo="Bomb_03_F";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.148846,-0.023017799},
									1
								},
								
								{
									{0.148462,-0.023017799},
									1
								},
								
								{
									{0.14692301,-0.022071},
									1
								},
								
								{
									{0.146538,-0.020650901},
									1
								},
								
								{
									{0.146538,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0116568},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14423101,-0.00692308},
									1
								},
								
								{
									{0.145,-0.00597633},
									1
								},
								
								{
									{0.146538,-0.00597633},
									1
								},
								
								{
									{0.14730801,-0.0045562098},
									1
								},
								
								{
									{0.146538,0.0053846198},
									1
								},
								
								{
									{0.142692,0.018639101},
									1
								},
								
								{
									{0.142692,0.022426},
									1
								},
								
								{
									{0.136154,0.031893499},
									1
								},
								
								{
									{0.136154,0.0389941},
									1
								},
								
								{
									{0.141923,0.038047299},
									1
								},
								
								{
									{0.142692,0.039467499},
									1
								},
								
								{
									{0.142692,0.057929002},
									1
								},
								
								{
									{0.14,0.074023701},
									1
								},
								
								{
									{0.14,0.119941},
									1
								},
								
								{
									{0.14153799,0.135089},
									1
								},
								
								{
									{0.131923,0.15497001},
									1
								},
								
								{
									{0.134615,0.16727801},
									1
								},
								
								{
									{0.148846,0.16727801},
									1
								},
								
								{
									{0.149615,0.16727801},
									1
								},
								
								{
									{0.163846,0.16727801},
									1
								},
								
								{
									{0.166538,0.15497001},
									1
								},
								
								{
									{0.156923,0.135089},
									1
								},
								
								{
									{0.158462,0.119941},
									1
								},
								
								{
									{0.158462,0.074023701},
									1
								},
								
								{
									{0.155385,0.057929002},
									1
								},
								
								{
									{0.155385,0.039467499},
									1
								},
								
								{
									{0.15653799,0.038047299},
									1
								},
								
								{
									{0.16230799,0.0389941},
									1
								},
								
								{
									{0.16230799,0.031893499},
									1
								},
								
								{
									{0.155385,0.022426},
									1
								},
								
								{
									{0.155385,0.018639101},
									1
								},
								
								{
									{0.151923,0.0053846198},
									1
								},
								
								{
									{0.150769,-0.0045562098},
									1
								},
								
								{
									{0.151923,-0.00597633},
									1
								},
								
								{
									{0.15307701,-0.00597633},
									1
								},
								
								{
									{0.154231,-0.00692308},
									1
								},
								
								{
									{0.154231,-0.0097633097},
									1
								},
								
								{
									{0.15346199,-0.0116568},
									1
								},
								
								{
									{0.151923,-0.0135503},
									1
								},
								
								{
									{0.151923,-0.020650901},
									1
								},
								
								{
									{0.151154,-0.022071},
									1
								},
								
								{
									{0.148846,-0.023017799},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="L";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.059999999
								},
								1
							};
							right[]=
							{
								{0.175,0.059999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.085000001
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="S";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.079999998
								},
								1
							};
							right[]=
							{
								{0.175,0.079999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.105
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.1
								},
								1
							};
							right[]=
							{
								{0.175,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.125
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AA_R73_x1: magazine_Missile_AA_R73_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R73_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F.p3d";
		hardpoints[]=
		{
			"O_R73"
		};
		pylonWeapon="weapon_R73Launcher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_AA_R77_x1: magazine_Missile_AA_R77_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
		hardpoints[]=
		{
			"O_R77"
		};
		pylonWeapon="weapon_R77Launcher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_AA_R77_INT_x1: magazine_Missile_AA_R77_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
		hardpoints[]=
		{
			"O_R77_INT"
		};
		pylonWeapon="weapon_R77Launcher";
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonMissile_Bomb_KAB250_x1: magazine_Bomb_KAB250_x1
	{
		count=1;
		displayName="$STR_A3_Bomb_KAB_250_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F.p3d";
		hardpoints[]=
		{
			"O_KAB250_BOMB"
		};
		pylonWeapon="weapon_KAB250Launcher";
	};
	class 1Rnd_Leaflets_West_F: 4Rnd_Bomb_04_F
	{
		ammo="Bo_Leaflets";
		count=1;
		leafletClass="West";
		displayName="$STR_A3_CfgMagazines_Leaflets_F0";
		displayNameShort="$STR_A3_CfgMagazines_Leaflets_F0";
	};
	class 1Rnd_Leaflets_East_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="East";
	};
	class 1Rnd_Leaflets_Guer_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Guer";
	};
	class 1Rnd_Leaflets_Civ_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Civ";
	};
	class 1Rnd_Leaflets_Custom_01_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_01";
	};
	class 1Rnd_Leaflets_Custom_02_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_02";
	};
	class 1Rnd_Leaflets_Custom_03_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_03";
	};
	class 1Rnd_Leaflets_Custom_04_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_04";
	};
	class 1Rnd_Leaflets_Custom_05_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_05";
	};
	class 1Rnd_Leaflets_Custom_06_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_06";
	};
	class 1Rnd_Leaflets_Custom_07_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_07";
	};
	class 1Rnd_Leaflets_Custom_08_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_08";
	};
	class 1Rnd_Leaflets_Custom_09_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_09";
	};
	class 1Rnd_Leaflets_Custom_10_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_10";
	};
	class 4Rnd_BombCluster_01_F: 4Rnd_Bomb_04_F
	{
		ammo="BombCluster_01_Ammo_F";
		displayName="$STR_A3_CfgMagazines_4Rnd_BombCluster_01_F0";
		descriptionShort="$STR_A3_cfgMagazine_CBU85_tooltip";
		displayNameShort="Cluster Bomb";
	};
	class 4Rnd_BombCluster_02_F: 4Rnd_BombCluster_01_F
	{
		ammo="BombCluster_02_Ammo_F";
		displayName="$STR_A3_CfgMagazines_4Rnd_BombCluster_02_F0";
		descriptionShort="$STR_A3_cfgMagazine_RBK500F_tooltip";
	};
	class 4Rnd_BombCluster_03_F: 4Rnd_BombCluster_01_F
	{
		ammo="BombCluster_03_Ammo_F";
		displayName="$STR_A3_CfgMagazines_4Rnd_BombCluster_03_F0";
		descriptionShort="$STR_A3_cfgMagazine_BL778_tooltip";
	};
	class PylonRack_4Rnd_BombDemine_01_F: 4Rnd_Bomb_04_F
	{
		ammo="BombDemine_01_Ammo_F";
		displayName="$STR_A3_PylonRack_4Rnd_BombDemine_01_F0";
		displayNameShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_F0";
		descriptionShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_F1";
		model="\a3\Weapons_F_Orange\DynamicLoadout\PylonRack_4x_BombDemine_01_F.p3d";
		hardpoints[]=
		{
			"ANTIMINE_DRONE_PYLON"
		};
		pylonWeapon="BombDemine_01_F";
		mass=10;
		initSpeed=0.1;
	};
	class PylonRack_4Rnd_BombDemine_01_Dummy_F: PylonRack_4Rnd_BombDemine_01_F
	{
		ammo="BombDemine_01_DummyAmmo_F";
		displayName="$STR_A3_PylonRack_4Rnd_BombDemine_01_Dummy_F0";
		displayNameShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_Dummy_Short_F0";
		descriptionShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_Dummy_F1";
	};
	class PylonMissile_1Rnd_BombCluster_01_F: PylonMissile_1Rnd_Bomb_04_F
	{
		ammo="BombCluster_01_Ammo_F";
		displayName="$STR_A3_PylonMissile_1Rnd_BombCluster_01_F0";
		displayNameShort="$STR_A3_cfgmagazines_bombcluster_short_01_f0";
		descriptionShort="$STR_A3_cfgMagazine_CBU85_tooltip";
		model="\a3\Weapons_F_Orange\DynamicLoadout\PylonMissile_1x_BombCluster_01_F.p3d";
		hardpoints[]=
		{
			"B_BOMB_PYLON",
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="BombCluster_01_F";
		mass=340;
		class mfdElements: mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_2Rnd_BombCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		count=2;
		displayName="$STR_A3_PylonRack_2Rnd_BombCluster_01_F0";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		class mfdElements: mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_BombCluster_02_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo="BombCluster_02_Ammo_F";
		hardpoints[]=
		{
			"O_BOMB_PYLON_HELI"
		};
		pylonWeapon="BombCluster_02_F";
		displayName="$STR_A3_PylonMissile_1Rnd_BombCluster_02_F0";
		descriptionShort="$STR_A3_cfgMagazine_RBK500F_tooltip";
		mass=470;
		model="\a3\Weapons_F_Orange\DynamicLoadout\PylonMissile_1x_BombCluster_02_F.p3d";
		class mfdElements: mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.13},
										1
									},
									
									{
										{0.17,0.13},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F_Orange\MFD\UI\icon_place_cas_02_bombcluster_02_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,0.039999999},
										1
									},
									
									{
										{0.16500001,0.039999999},
										1
									},
									
									{
										{0.16500001,0.11},
										1
									},
									
									{
										{0.13500001,0.11},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.164,0.13538501},
									1
								},
								
								{
									{0.164,0.115692},
									1
								},
								
								{
									{0.16,0.110769},
									1
								},
								
								{
									{0.16,0.049230799},
									1
								},
								
								{
									{0.14,0.049230799},
									1
								},
								
								{
									{0.14,0.110769},
									1
								},
								
								{
									{0.13600001,0.115692},
									1
								},
								
								{
									{0.13600001,0.13538501},
									1
								},
								
								{
									{0.164,0.13538501},
									1
								},
								{},
								
								{
									{0.154,0.049230799},
									1
								},
								
								{
									{0.154,0.0418461},
									1
								},
								{},
								
								{
									{0.146,0.049230799},
									1
								},
								
								{
									{0.146,0.0418461},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.059999999
								},
								1
							};
							right[]=
							{
								{0.175,0.059999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.085000001
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="B";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.079999998
								},
								1
							};
							right[]=
							{
								{0.175,0.079999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.105
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="K";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.1
								},
								1
							};
							right[]=
							{
								{0.175,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.125
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_BombCluster_02_cap_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		mass=500;
		ammo="BombCluster_02_cap_Ammo_F";
		hardpoints[]=
		{
			"O_BOMB_PYLON",
			"O_KAB250_BOMB"
		};
	};
	class PylonMissile_1Rnd_BombCluster_03_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		displayName="$STR_A3_PylonMissile_1Rnd_BombCluster_03_F0";
		descriptionShort="$STR_A3_cfgMagazine_BL778_tooltip";
		ammo="BombCluster_03_Ammo_F";
		hardpoints[]=
		{
			"B_BOMB_PYLON",
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="BombCluster_03_F";
		mass=264;
	};
	class PylonRack_2Rnd_BombCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		count=2;
		displayName="$STR_A3_PylonRack_2Rnd_BombCluster_03_F0";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		class mfdElements: mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{0,0.018461499},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{0,0.018461499},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{0,0.018461499},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{0,0.018461499},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class Pylon_1Rnd_Leaflets_West_F: 1Rnd_Leaflets_West_F
	{
		model="a3\Weapons_F\empty.p3d";
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_West_F0";
		descriptionShort="$STR_A3_Pylon_1Rnd_Leaflets_West_F1";
		leafletClass="West";
		hardpoints[]=
		{
			"UNI_LEAFLETS_PYLON"
		};
		pylonWeapon="Bomb_Leaflets";
		mass=1;
	};
	class Pylon_1Rnd_Leaflets_East_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_East_F0";
		leafletClass="East";
	};
	class Pylon_1Rnd_Leaflets_Guer_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Guer_F0";
		leafletClass="Guer";
	};
	class Pylon_1Rnd_Leaflets_Civ_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Civ_F0";
		leafletClass="Civ";
	};
	class Pylon_1Rnd_Leaflets_Custom_01_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_01_F0";
		leafletClass="Custom 01";
	};
	class Pylon_1Rnd_Leaflets_Custom_02_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_02_F0";
		leafletClass="Custom 02";
	};
	class Pylon_1Rnd_Leaflets_Custom_03_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_03_F0";
		leafletClass="Custom 03";
	};
	class Pylon_1Rnd_Leaflets_Custom_04_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_04_F0";
		leafletClass="Custom 04";
	};
	class Pylon_1Rnd_Leaflets_Custom_05_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_05_F0";
		leafletClass="Custom 05";
	};
	class Pylon_1Rnd_Leaflets_Custom_06_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_06_F0";
		leafletClass="Custom 06";
	};
	class Pylon_1Rnd_Leaflets_Custom_07_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_07_F0";
		leafletClass="Custom 07";
	};
	class Pylon_1Rnd_Leaflets_Custom_08_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_08_F0";
		leafletClass="Custom 08";
	};
	class Pylon_1Rnd_Leaflets_Custom_09_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_09_F0";
		leafletClass="Custom 09";
	};
	class Pylon_1Rnd_Leaflets_Custom_10_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_10_F0";
		leafletClass="Custom 10";
	};
	class 200Rnd_338_Mag: 130Rnd_338_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayNameMFDFormat="COAX";
		count=200;
		nameSound="mgun";
	};
	class 4Rnd_120mm_cannon_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_120mm_cannon_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_ATGM0";
		count=4;
		ammo="M_120mm_cannon_ATGM";
		initspeed=120;
		maxLeadSpeed=27.7778;
		nameSound="missiles";
		displayNameMFDFormat="MISL";
	};
	class 4Rnd_120mm_LG_cannon_missiles: 4Rnd_120mm_cannon_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_120mm_LG_cannon_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_LG_ATGM0";
		ammo="M_120mm_cannon_ATGM_LG";
	};
	class 4Rnd_125mm_cannon_missiles: 4Rnd_120mm_cannon_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_125mm_cannon_missiles0";
		count=4;
		ammo="M_125mm_cannon_ATGM";
		displayNameMFDFormat="Р";
	};
	class 60Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=60;
	};
	class SPG9_HEAT: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SPG9_HEAT0";
		displayNameShort="$STR_A3_heat_0";
		ammo="M_SPG9_HEAT";
		type="6 * 		256";
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		mass=10;
		count=1;
		initSpeed=435;
		descriptionShort="TODO";
		muzzleImpulseFactor[]={0,0};
	};
	class 12rnd_SPG9_HEAT: SPG9_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
	};
	class SPG9_HE: SPG9_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SPG9_HE0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="M_SPG9_HE";
		type="6 * 		256";
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HE_F_ca.paa";
		mass=10;
		count=1;
		initSpeed=435;
		descriptionShort="TODO";
	};
	class 8rnd_SPG9_HE: SPG9_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
	};
	class 4Rnd_70mm_SAAMI_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_70mm_SAAMI_missiles0";
		displayNameShort="$STR_A3_cfgmagazines_titan_aa_dns";
		count=4;
		ammo="M_70mm_SAAMI";
		initspeed=120;
		maxLeadSpeed=277.77802;
		nameSound="missiles";
	};
	class 2Rnd_127mm_Firefist_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_2Rnd_127mm_Firefist_missiles0";
		displayNameShort="$STR_A3_cfgmagazines_titan_at_dns";
		count=2;
		ammo="M_127mm_Firefist_AT";
		initspeed=19;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class MRAWS_HEAT_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_MRAWS_HEAT_F0";
		displaynameshort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HEAT_F";
		type="2*		256";
		mass=60;
	};
	class MRAWS_HE_F: MRAWS_HEAT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_MRAWS_HE_F0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HE_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HE_F";
		mass=40;
	};
	class MRAWS_HEAT55_F: MRAWS_HEAT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="MAAWS HEAT 55 Round";
		displayNameShort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HEAT55_F";
		mass=50;
	};
	class 60Rnd_20mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="B_20mm";
		count=60;
		initSpeed=1044;
		maxLeadSpeed=30.555599;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 60Rnd_20mm_AP_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_cfgmagazines_titan_ap_dns";
		ammo="B_20mm_AP";
		count=60;
		initSpeed=1100;
		maxLeadSpeed=30.555599;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class magazine_Missiles_Cruise_01_x18: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Missile_Cruise_HE_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_HE_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_HE_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01";
		initSpeed=12;
		maxLeadSpeed=1.38889;
		count=18;
		nameSound="missiles";
	};
	class magazine_Missiles_Cruise_01_Cluster_x18: magazine_Missiles_Cruise_01_x18
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Missile_Cruise_C_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_C_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_C_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01_Cluster";
	};
	class magazine_ShipCannon_120mm_HE_shells_x32: 32Rnd_155mm_Mo_shells
	{
		displayName="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		displayNameShort="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
		ammo="ammo_ShipCannon_120mm_HE";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_smoke_shells_x6: 6Rnd_155mm_Mo_smoke
	{
		ammo="ammo_ShipCannon_120mm_smoke";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_guided_shells_x2: 2Rnd_155mm_Mo_guided
	{
		ammo="ammo_ShipCannon_120mm_HE_guided";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_LG_shells_x2: 2Rnd_155mm_Mo_LG
	{
		ammo="ammo_ShipCannon_120mm_HE_LG";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_mine_shells_x6: 6Rnd_155mm_Mo_mine
	{
		ammo="ammo_ShipCannon_120mm_mine";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_cluster_shells_x2: 2Rnd_155mm_Mo_Cluster
	{
		ammo="ammo_ShipCannon_120mm_HE_cluster";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_AT_mine_shells_x6: 6Rnd_155mm_Mo_AT_mine
	{
		ammo="ammo_ShipCannon_120mm_AT_mine";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_Missile_mim145_x4: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_mim145_x4_magazine_name";
		displayNameShort="$STR_A3_Missile_mim145_x4_magazine_shortName";
		descriptionShort="$STR_A3_Missile_mim145_x4_magazine_description";
		ammo="ammo_Missile_mim145";
		count=4;
		initSpeed=45;
		maxLeadSpeed=1800;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		nameSound="missiles";
	};
	class magazine_Missile_s750_x4: magazine_Missile_mim145_x4
	{
		displayName="$STR_A3_Missile_S750_x4_magazine_name";
		displayNameShort="$STR_A3_Missile_S750_x4_magazine_shortName";
		descriptionShort="$STR_A3_Missile_S750_x4_magazine_description";
		ammo="ammo_Missile_s750";
	};
	class magazine_Missile_HARM_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_HARM_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_HARM_x1_magazine_shortName";
		descriptionShort="$STR_A3_Missile_HARM_x1_magazine_description";
		count=1;
		ammo="ammo_Missile_HARM";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="HARM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_SDB_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_SDB_x1_magazine_name";
		descriptionShort="$STR_A3_Bomb_SDB_magazine_description";
		displayNameShort="$STR_A3_Bomb_SDB_magazine_shortName";
		ammo="ammo_Bomb_SDB";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="SDB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_HARM_x1: magazine_Missile_HARM_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_x1_F";
		hardpoints[]=
		{
			"B_HARM",
			"I_HARM"
		};
		pylonWeapon="weapon_HARMLauncher";
	};
	class PylonRack_Missile_HARM_x1: magazine_Missile_HARM_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_Rail_x1_F";
		hardpoints[]=
		{
			"B_HARM_RAIL",
			"I_HARM_RAIL"
		};
		pylonWeapon="weapon_HARMLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_HARM_INT_x1: magazine_Missile_HARM_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_x1_F";
		hardpoints[]=
		{
			"B_HARM_INT",
			"I_HARM_INT"
		};
		pylonWeapon="weapon_HARMLauncher";
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonRack_Bomb_SDB_x4: magazine_Bomb_SDB_x1
	{
		count=4;
		displayName="$STR_A3_Bomb_SDB_x4_magazine_name";
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Bomb_05_x4_F";
		hardpoints[]=
		{
			"B_SDB_QUAD_RAIL"
		};
		pylonWeapon="weapon_SDBLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center1
					{
						type="fixed";
						pos[]={-0.02,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0.02,0};
					};
					class Center3
					{
						type="fixed";
						pos[]={-0.02,0.050000001};
					};
					class Center4
					{
						type="fixed";
						pos[]={0.02,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center1",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center1",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center1",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center1",
										{0.0099999998,0},
										1
									},
									
									{
										"Center1",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center1",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center1",
										{0,0.0098290602},
										1
									},
									
									{
										"Center1",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center1",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center1",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center1",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center1",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center1",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center1",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center1",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center1",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center1",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center1",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center1",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center1",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center1",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile3
						{
							condition="PylonAmmo>=3";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center3",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center3",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center3",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center3",
										{0.0099999998,0},
										1
									},
									
									{
										"Center3",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center3",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center3",
										{0,0.0098290602},
										1
									},
									
									{
										"Center3",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center3",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center3",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center3",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center3",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center3",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center3",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center3",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center3",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center3",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center3",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center3",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center3",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center3",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile4
						{
							condition="PylonAmmo>=4";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center4",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center4",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center4",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center4",
										{0.0099999998,0},
										1
									},
									
									{
										"Center4",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center4",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center4",
										{0,0.0098290602},
										1
									},
									
									{
										"Center4",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center4",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center4",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center4",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center4",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center4",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center4",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center4",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center4",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center4",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center4",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center4",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center4",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center4",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="SDB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/4)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center1",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center1",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center1",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center1",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center1",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center1",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile3: Missile3
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center3",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center3",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center3",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center3",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center3",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center3",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile4: Missile4
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center4",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center4",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center4",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center4",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center4",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center4",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmo <= 3";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile3: Missile3
						{
							condition="PylonAmmo<=2";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile4: Missile4
						{
							condition="PylonAmmo<=4";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_KH58_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_KH58_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_KH58_x1_magazine_shortName";
		descriptionShort="$STR_A3_Missile_KH58_x1_magazine_description";
		count=1;
		ammo="ammo_Missile_KH58";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.15307701,0.14503001},
									1
								},
								
								{
									{0.15653799,0.141716},
									1
								},
								
								{
									{0.15923101,0.141716},
									1
								},
								
								{
									{0.15923101,0.113314},
									1
								},
								
								{
									{0.155385,0.110473},
									1
								},
								
								{
									{0.155385,0.0560355},
									1
								},
								
								{
									{0.16,0.0560355},
									1
								},
								
								{
									{0.16,0.052721899},
									1
								},
								
								{
									{0.15653799,0.044674601},
									1
								},
								
								{
									{0.15615401,0.034733701},
									1
								},
								
								{
									{0.15576901,0.0228994},
									1
								},
								
								{
									{0.155385,0.0176923},
									1
								},
								
								{
									{0.154231,0.0134319},
									1
								},
								
								{
									{0.15307701,0.0110651},
									1
								},
								
								{
									{0.151923,0.0091716005},
									1
								},
								
								{
									{0.150769,0.0082248496},
									1
								},
								
								{
									{0.149615,0.0082248496},
									1
								},
								
								{
									{0.149231,0.0082248496},
									1
								},
								
								{
									{0.14769199,0.0082248496},
									1
								},
								
								{
									{0.146538,0.0091716005},
									1
								},
								
								{
									{0.145385,0.0110651},
									1
								},
								
								{
									{0.14461499,0.0134319},
									1
								},
								
								{
									{0.143462,0.0176923},
									1
								},
								
								{
									{0.142692,0.0228994},
									1
								},
								
								{
									{0.142692,0.034733701},
									1
								},
								
								{
									{0.142308,0.044674601},
									1
								},
								
								{
									{0.13846201,0.052721899},
									1
								},
								
								{
									{0.13846201,0.0560355},
									1
								},
								
								{
									{0.143462,0.0560355},
									1
								},
								
								{
									{0.143462,0.110473},
									1
								},
								
								{
									{0.139231,0.113314},
									1
								},
								
								{
									{0.139231,0.141716},
									1
								},
								
								{
									{0.142308,0.141716},
									1
								},
								
								{
									{0.145385,0.14503001},
									1
								},
								
								{
									{0.15307701,0.14503001},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="A";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.0099999998
								},
								1
							};
							right[]=
							{
								{0.17,0.0099999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.035
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.17,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.055
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_KH58_x1: magazine_Missile_KH58_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_02_x1_F";
		hardpoints[]=
		{
			"O_KH58"
		};
		pylonWeapon="weapon_KH58Launcher";
	};
	class PylonMissile_Missile_KH58_INT_x1: magazine_Missile_KH58_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_02_x1_F";
		hardpoints[]=
		{
			"O_KH58_INT"
		};
		pylonWeapon="weapon_KH58Launcher";
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_75Rnd_762x39_Mag_F0";
		descriptionShort="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_F1";
		count=75;
		mass=26;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_akm_75rnd";
		reloadAction="GestureReloadAK12_Drum";
	};
	class 75Rnd_762x39_Mag_Tracer_F: 75Rnd_762x39_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75Rnd_762x39_Mag_Tracer_F0";
		tracersEvery=1;
	};
	class 30Rnd_762x39_AK12_Mag_Green_F
	{
	};
	class 30Rnd_762x39_AK12_Mag_Tracer_Green_F
	{
	};
	class 30rnd_762x39_AK12_Lush_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Lush_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"
		};
	};
	class 30rnd_762x39_AK12_Lush_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Lush_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"
		};
	};
	class 30rnd_762x39_AK12_Arid_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Arid_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"
		};
	};
	class 30rnd_762x39_AK12_Arid_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Arid_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_F0";
		descriptionShort="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_F1";
		count=75;
		mass=26;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
		};
		reloadAction="GestureReloadAK12_Drum";
	};
	class 75rnd_762x39_AK12_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 75rnd_762x39_AK12_Lush_Mag_F: 75rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Lush_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Lush_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Lush_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Arid_Mag_F: 75rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Arid_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Arid_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Arid_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
	};
	class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_Tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_30Rnd_65x39_caseless_msbs_mag_Tracer0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
	};
	class 2Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
		ammo="B_12Gauge_Slug_NoCartridge";
		initSpeed=450;
		hiddenSelections[]=
		{
			"camo",
			"cap2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Slug_CO.paa"
		};
	};
	class 6Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_6Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Slug_ca.paa";
		ammo="B_12Gauge_Slug_NoCartridge";
		initSpeed=450;
		count=6;
		hiddenSelectionsTextures[]={};
	};
	class 15Rnd_12Gauge_Slug: 15Rnd_12Gauge_Pellets
	{
		scope=1;
		displayName="$STR_A3_C_CfgMagazines_15Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		ammo="B_12Gauge_Slug_NoCartridge";
		initSpeed=450;
	};
	class O_R_IR_Grenade: O_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_O_R_IR_Grenade0";
		descriptionShort="$STR_A3_C_CfgMagazines_O_R_IR_Grenade1";
	};
	class I_E_IR_Grenade: I_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_I_E_IR_Grenade0";
		descriptionShort="$STR_A3_C_CfgMagazines_I_E_IR_Grenade1";
	};
	class ProbingWeapon_01_magazine: CA_Magazine
	{
		displayName="";
		ammo="ProbingBeam_01_F";
		count=50;
		initSpeed=130;
		muzzleImpulseFactor[]={0,0};
	};
	class ProbingWeapon_02_magazine: CA_Magazine
	{
		displayName="";
		ammo="ProbingBeam_02_F";
		count=999;
		initSpeed=130;
		muzzleImpulseFactor[]={0,0};
	};
	class Dummy_Magazine_Base: CA_Magazine
	{
		ammo="Default";
		scope=1;
		initSpeed=1;
		count=9999;
		mass=0;
		allowedSlots[]={801,701,901};
	};
	class ESD_01_DummyMagazine_base: Dummy_Magazine_Base
	{
		mass=0;
	};
	class ESD_01_DummyMagazine_1: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_2: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_3: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_4: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_5: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_6: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_7: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_8: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_9: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_10: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_11: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_12: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_13: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_14: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_15: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_16: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_17: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_18: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_19: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_20: ESD_01_DummyMagazine_base
	{
	};
	class OM_Magazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=1;
		scope=1;
	};
	class Antibiotic: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Antibiotic0";
		picture="\a3\Missions_F_Oldman\Props\data\Antibiotic_ca.paa";
		model="\A3\structures_f_epa\Items\medical\antibiotic_F";
	};
	class Antimalaricum: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Antimalaricum0";
		picture="\a3\Missions_F_Oldman\Props\data\Antimalaricum_ca.paa";
		model="\A3\Props_F_Oldman\Items\Antimalaricum_01_F";
	};
	class AntimalaricumVaccine: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=100;
		displayName="$STR_A3_Item_AntimalaricumVaccine0";
		picture="\a3\Missions_F_Oldman\Props\data\AntimalaricumVaccine_ca.paa";
		model="\a3\Missions_F_Oldman\Props\Box_UAV_06_vaccine_F";
	};
	class Bandage: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Bandage0";
		picture="\a3\Missions_F_Oldman\Props\data\Bandage_ca.paa";
		model="\A3\structures_f_epa\Items\medical\bandage_F";
	};
	class Files: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_Files0";
		picture="\a3\Missions_F_Oldman\Props\data\Files_ca.paa";
		model="\A3\structures_f\items\documents\File1_f";
	};
	class Files_diary: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Files_diary0";
	};
	class Files_researchNotes: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Files_researchNotes0";
	};
	class FileTopSecret: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_FileTopSecret0";
		picture="\a3\Missions_F_Oldman\Props\data\FileTopSecret_ca.paa";
		model="\A3\structures_f\items\documents\File2_f";
	};
	class FileNetworkStructure: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_NetworkStructure0";
		picture="\a3\Missions_F_Oldman\Props\data\FileNetworkStructure_ca.paa";
		model="\A3\structures_f\items\documents\File2_f";
	};
	class FilesSecret: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_SecretFiles0";
		picture="\a3\Missions_F_Oldman\Props\data\FilesSecret_ca.paa";
		model="\A3\Structures_F_EPC\Items\Documents\Document_01_F";
	};
	class DocumentsSecret: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_SecretDocuments0";
		picture="\a3\Missions_F_Oldman\Props\data\DocumentsSecret_ca.paa";
		model="\A3\structures_f\items\documents\File2_f";
	};
	class Wallet_ID: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Wallet_traitor0";
		picture="\a3\Missions_F_Oldman\Props\data\Wallet_ID_ca.paa";
		model="\a3\Missions_F_Oldman\Props\Wallet_01_CSAT_F.p3d";
	};
	class Keys: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Keys0";
		picture="\a3\Missions_F_Oldman\Props\data\Keys_ca.paa";
		model="\a3\Props_F_Oldman\Items\Key_01_F";
	};
	class Csat_Id_01: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_01_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_010";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_01_F.p3d";
	};
	class Csat_Id_02: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_02_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_020";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_02_F.p3d";
	};
	class Csat_Id_03: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_03_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_030";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_03_F.p3d";
	};
	class Csat_Id_04: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_04_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_040";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_04_F.p3d";
	};
	class Csat_Id_05: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_05_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_050";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_05_F.p3d";
	};
	class Laptop_Unfolded: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=30;
		scope=1;
		displayName="$STR_A3_Item_Laptop_Unfolded0";
		picture="\a3\Missions_F_Oldman\Props\data\Laptop_Unfolded_ca.paa";
		model="\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
	};
	class Laptop_Closed: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		scope=1;
		displayName="$STR_A3_Item_Laptop_closed0";
		picture="\a3\Missions_F_Oldman\Props\data\Laptop_Closed_ca.paa";
		model="\A3\Structures_F\Items\Electronics\Laptop_F";
	};
	class SatPhone: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=50;
		scope=1;
		displayName="$STR_A3_Item_SatPhone0";
		picture="\a3\Missions_F_Oldman\Props\data\SatPhone_ca.paa";
		model="\A3\Structures_F\Items\Electronics\SatellitePhone_F";
	};
	class MobilePhone: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_MobilePhone0";
		picture="\a3\Missions_F_Oldman\Props\data\MobilePhone_ca.paa";
		model="\A3\structures_f\Items\electronics\mobilephone_old_F";
	};
	class SmartPhone: MobilePhone
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_SmartPhone0";
		picture="\a3\Missions_F_Oldman\Props\data\SmartPhone_ca.paa";
		model="\A3\structures_f\Items\electronics\mobilephone_smart_F";
	};
	class FlashDisk: MobilePhone
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_FlashDisk0";
		picture="\a3\Missions_F_Oldman\Props\data\FlashDisk_ca.paa";
		model="\A3\Props_F_Oldman\Items\USB_Dongle_01_F.p3d";
	};
	class ButaneCanister: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_Butane_canister0";
		picture="\a3\Missions_F_Oldman\Props\data\ButaneCanister_ca.paa";
		model="\A3\structures_F_EPA\Items\Tools\ButaneCanister_F";
	};
	class Money: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_Money0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_ca.paa";
		model="\A3\Structures_F\Items\Valuables\Money_F";
	};
	class Money_bunch: Money
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Money_bunch0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_bunch_ca.paa";
		model="\A3\Props_F_Oldman\Items\MoneyBills_01_bunch_F";
	};
	class Money_roll: Money
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Money_roll0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_roll_ca.paa";
		model="\A3\Props_F_Oldman\Items\MoneyBills_01_roll_F";
	};
	class Money_stack: Money
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Money_stack0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_stack_ca.paa";
		model="\A3\Props_F_Oldman\Items\MoneyBills_01_stack_F";
	};
	class Money_stack_quest: Money_stack
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Money_stack_quest0";
	};
	class Sleeping_bag_folded_01: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=110;
		scope=1;
		displayName="$STR_A3_Item_Sleeping_bag_folded_010";
		picture="\a3\Missions_F_Oldman\Props\data\Sleeping_bag_folded_01_ca.paa";
		model="\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F.p3d";
	};
	class Drone_Range_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		mass=80;
		displayName="$STR_A3_CfgMagazines_Mine0";
		descriptionUse="$STR_A3_cfgMagazines_ATMine_Range_Mag0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		model="\A3\Weapons_f\Explosives\mine_at_i";
		useAction=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="Drone_explosive_ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="$STR_A3_cfgMagazines_Mine1";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};
	class Drone_Range_Mag_dummy: Drone_Range_Mag
	{
		ammo="Drone_explosive_ammo_dummy";
	};
};
