class CfgPatches
{
	class USAF_GBU24
	{
		units[]={};
		weapons[]=
		{
			"USAF_GBU24_Launcher"
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
	class USAF_GBU24_LGB: USAF_LaserBombBase
	{
		hit=80000;
		indirectHit=8000;
		indirectHitRange=55;
		model="\USAF_missilebox\USAF_GBU24\USAF_GBU24_fly.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU24\USAF_GBU24.p3d";
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
};
class cfgMagazines
{
	class USAF_MagazineBase_LGB;
	class USAF_1Rnd_GBU24: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_GBU24_LGB";
		displayName="GBU-24/B Paveway III";
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_GBU24_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-24/B Paveway III";
		magazines[]=
		{
			"USAF_1Rnd_GBU24"
		};
	};
	class USAF_GBU24F_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-24/B Paveway III";
		magazines[]=
		{
			"USAF_1Rnd_GBU24"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_GBU24: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_GBU24\icon\gbu24_ico.paa";
		mapSize=4.4000001;
		displayName="GBU-24/B Paveway III";
		model="\USAF_missilebox\USAF_GBU24\USAF_GBU24.p3d";
		doLift=0.54500002;
		infoStand="\USAF_missilebox\infopic\gbu24_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_GBU24\rvmat\gbu24.rvmat",
				"USAF_missilebox\USAF_GBU24\rvmat\gbu24.rvmat",
				"USAF_missilebox\USAF_GBU24\rvmat\gbu24destr.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_GBU24: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU24\USAF_GBU24.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_GBU24: default
	{
		scope=1;
		displayName="GBU-24";
		weaponClass="USAF_GBU24_Launcher";
		type="GBU";
		uipicture="\USAF_missilebox\iaws_pics\gbu24_iaws_ca.paa";
		length=4.3200002;
		width=0.37;
		diameter=0.36000001;
		weight=907;
		allowWingtip=0;
		usedBy[]=
		{
			"au",
			"be",
			"bh",
			"ca",
			"cl",
			"cz",
			"dk",
			"fi",
			"de",
			"gr",
			"hu",
			"il",
			"it",
			"jp",
			"jo",
			"kr",
			"kw",
			"my",
			"morocco",
			"nl",
			"no",
			"om",
			"pk",
			"pl",
			"pt",
			"tw",
			"sg",
			"ch",
			"es",
			"sa",
			"se",
			"th",
			"tr",
			"ae",
			"uk",
			"us"
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
