class CfgPatches
{
	class USAF_GBU38
	{
		units[]={};
		weapons[]=
		{
			"USAF_GBU38_Launcher"
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
	class USAF_GBU38_LGB: USAF_LaserBombBase
	{
		hit=2000;
		indirectHit=100;
		indirectHitRange=50;
		model="\USAF_missilebox\USAF_GBU38\USAF_GBU38.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU38\USAF_GBU38.p3d";
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
	class USAF_1Rnd_GBU38: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_GBU38_LGB";
		displayName="GBU-38 JDAM";
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_GBU38_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-38 JDAM";
		magazines[]=
		{
			"USAF_1Rnd_GBU38"
		};
		USAF_isGPSguided=1;
	};
	class USAF_GBU38F_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-38 JDAM";
		magazines[]=
		{
			"USAF_1Rnd_GBU38"
		};
		USAF_isGPSguided=1;
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_GBU38: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_GBU38\icon\gbu38_ico.paa";
		mapSize=2.7;
		displayName="GBU-38 JDAM";
		model="\USAF_missilebox\USAF_GBU38\USAF_GBU38.p3d";
		doLift=0.38;
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
	class ProxyUSAF_GBU38: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU38\USAF_GBU38.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_GBU38: default
	{
		scope=1;
		displayName="GBU-38";
		weaponClass="USAF_GBU38_Launcher";
		type="GBU";
		uipicture="\USAF_missilebox\iaws_pics\gbu38_iaws_ca.paa";
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
