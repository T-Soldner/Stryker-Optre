class CfgPatches //class desc.
{
	class Stryker_MEU_Music
	{
		name = "Stryker MEU Music Pack";
		author = "Soldner"; //name of author
		units[] = //attached units (leave blank)
		{
			
		};
		weapons[] = //attached weapons (leave blank)
		{
			
		};
		requiredVersion = 0.1; //artefact of arma, no clue what it is but has to stay 0.1
		requiredAddons[] =
		{
			
		};
	};
};
class CfgMusic
{
	#include "StrykerMusicTracks.hpp"
};
class CfgMusicClasses
{
	class StrykerMusic
	{
		displayName = "Stryker - Music Pack";
	};
	class StrykerNHMusic
	{
		displayName = "Stryker - Music Pack (Non-Halo)";
	};
};