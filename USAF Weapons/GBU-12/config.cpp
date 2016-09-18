class CfgPatches
{
	class USAF_GBU12
	{
		units[]={};
		weapons[]=
		{
			"USAF_GBU12_Launcher"
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
	class LaserBombCore;
	class USAF_GBU12_LGB: USAF_LaserBombBase
	{
		hit=20000;
		indirectHit=4000;
		indirectHitRange=33;
		model="\USAF_missilebox\USAF_GBU12\USAF_GBU12fly.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU12\USAF_GBU12.p3d";
		cost=6500;
		airLock=0;
		irLock=0;
		laserLock=1;
		nvLock=0;
		artilleryLock=0;
		lockType=0;
		missileLockCone=130;
		lockSeekRadius=7500;
		autoSeekTarget=1;
	};
	class Bo_GBU12_LGB: LaserBombCore
	{
		model="\USAF_missilebox\USAF_GBU12\USAF_GBU12fly.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU12\USAF_GBU12.p3d";
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_LGB;
	class USAF_1Rnd_GBU12: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_GBU12_LGB";
		displayName="GBU-12 Paveway II";
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_GBU12_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-12 Paveway II";
		magazines[]=
		{
			"USAF_1Rnd_GBU12"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_GBU12: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_GBU12\icon\gbu12_ico.paa";
		mapSize=3.8469999;
		displayName="GBU-12 Paveway II";
		model="\USAF_missilebox\USAF_GBU12\USAF_GBU12.p3d";
		doLift=0.43200001;
		infoStand="\USAF_missilebox\infopic\gbu12_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_GBU12\rvmat\gbu12.rvmat",
				"USAF_missilebox\USAF_GBU12\rvmat\gbu12.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_GBU12proxy: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU12\USAF_GBU12.p3d";
		simulation="maverickweapon";
	};
	class ProxyUSAF_GBU12BIS: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU12\USAF_GBU12.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_GBU12: default
	{
		scope=1;
		displayName="GBU-12";
		weaponClass="USAF_GBU12_Launcher";
		type="GBU";
		uipicture="\USAF_missilebox\iaws_pics\gbu12_iaws_ca.paa";
		length=3.27;
		width=0.273;
		diameter=0.273;
		weight=227;
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
