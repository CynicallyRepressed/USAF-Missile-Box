class CfgPatches
{
	class USAF_GBU32
	{
		units[]={};
		weapons[]=
		{
			"USAF_GBU32_Launcher"
		};
		requiredVersion=1.5;
		requiredAddons[]=
		{
			"USAF_Missilebox"
		};
	};
};
class cfgAmmo
{
	class USAF_LaserBombBase;
	class USAF_GBU32_LGB: USAF_LaserBombBase
	{
		hit=4000;
		indirectHit=200;
		indirectHitRange=150;
		model="\USAF_missilebox\USAF_GBU32\USAF_GBU32.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU32\USAF_GBU32.p3d";
		airLock=0;
		irLock=0;
		laserLock=1;
		nvLock=0;
		artilleryLock=0;
		lockType=0;
		missileLockCone=130;
		cost=100;
		lockSeekRadius=7500;
		autoSeekTarget=1;
	};
	class USAF_GBU32_LGB_BIS: USAF_LaserBombBase
	{
		hit=4000;
		indirectHit=2000;
		indirectHitRange=15;
		model="\USAF_missilebox\USAF_GBU32\USAF_GBU32BIS.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU32\USAF_GBU32BIS.p3d";
		cost=9500;
		irLock=1;
		laserLock="bool";
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_LGB;
	class USAF_1Rnd_GBU32: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_GBU32_LGB";
		displayName="GBU-32 JDAM";
	};
	class USAF_1Rnd_GBU32BIS: USAF_1Rnd_GBU32
	{
		ammo="USAF_GBU32_LGB_BIS";
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_GBU32_Launcher: USAF_BombLauncherBase
	{
		scope=2;
		cursorAim="EmptyCursor";
		textureType="fullAuto";
		missileLockCone=180;
		weaponLockDelay=0;
		weaponLockSystem=15;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		reloadTime=0.1;
		magazineReloadTime=0.1;
		holdsterAnimValue=7;
		autoFire=0;
		displayName="GBU-32 JDAM";
		magazines[]=
		{
			"USAF_1Rnd_GBU32",
			"USAF_1Rnd_GBU32BIS"
		};
		USAF_isGPSguided=1;
	};
	class USAF_GBU32F_Launcher: USAF_BombLauncherBase
	{
		scope=2;
		cursorAim="EmptyCursor";
		textureType="fullAuto";
		missileLockCone=180;
		weaponLockDelay=0;
		weaponLockSystem=15;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		reloadTime=0.1;
		magazineReloadTime=0.1;
		holdsterAnimValue=7;
		autoFire=0;
		displayName="GBU-32 JDAM";
		magazines[]=
		{
			"USAF_1Rnd_GBU32",
			"USAF_1Rnd_GBU32BIS"
		};
		USAF_isGPSguided=1;
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_GBU32: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_GBU32\icon\gbu32_ico.paa";
		mapSize=3.04;
		displayName="GBU-32 JDAM";
		model="\USAF_missilebox\USAF_GBU32\USAF_GBU32.p3d";
		doLift=0.359;
		infoStand="\USAF_missilebox\infopic\jdam_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_GBU31\rvmat\gbu31.rvmat",
				"USAF_missilebox\USAF_GBU31\rvmat\gbu31.rvmat",
				"USAF_missilebox\USAF_GBU31\rvmat\gbu31destr.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_GBU32: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU32\USAF_GBU32.p3d";
		simulation="maverickweapon";
	};
	class ProxyUSAF_GBU32BIS: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU32\USAF_GBU32BIS.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_GBU32: default
	{
		scope=1;
		displayName="GBU-32";
		weaponClass="USAF_GBU32_Launcher";
		type="GBU";
		uipicture="\USAF_missilebox\iaws_pics\gbu32_iaws_ca.paa";
		length=3.04;
		width=0.5;
		diameter=0.5;
		weight=459;
		allowWingtip=0;
		usedBy[]=
		{
			"au",
			"be",
			"cl",
			"dk",
			"om",
			"ae",
			"de",
			"il",
			"it",
			"jp",
			"nl",
			"no",
			"pk",
			"pl",
			"pt",
			"sa",
			"sg",
			"kr",
			"tr",
			"eg",
			"fi",
			"gr",
			"us"
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
