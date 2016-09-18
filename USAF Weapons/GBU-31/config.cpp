class CfgPatches
{
	class USAF_GBU31
	{
		units[]={};
		weapons[]=
		{
			"USAF_GBU31_Launcher"
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
	class USAF_GBU31_LGB: USAF_LaserBombBase
	{
		hit=8000;
		indirectHit=400;
		indirectHitRange=300;
		model="\USAF_missilebox\USAF_GBU31\USAF_GBU31.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU31\USAF_GBU31.p3d";
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
	class USAF_GBU31AB_LGB: USAF_LaserBombBase
	{
		hit=8000;
		indirectHit=4000;
		indirectHitRange=20;
		model="\USAF_missilebox\USAF_GBU31\USAF_GBU31.p3d";
		proxyShape="\USAF_missilebox\USAF_GBU31\USAF_GBU31.p3d";
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
	class USAF_1Rnd_GBU31: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_GBU31_LGB";
		displayName="GBU-31 JDAM";
	};
	class USAF_1Rnd_GBU31AB: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_GBU31AB_LGB";
		displayName="GBU-31 Air Burst";
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_GBU31_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-31 JDAM";
		magazines[]=
		{
			"USAF_1Rnd_GBU31"
		};
		USAF_isGPSguided=1;
	};
	class USAF_GBU31F_Launcher: USAF_BombLauncherBase
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
		displayName="GBU-31 JDAM";
		magazines[]=
		{
			"USAF_1Rnd_GBU31"
		};
		USAF_isGPSguided=1;
	};
	class USAF_GBU31AB_Launcher: USAF_BombLauncherBase
	{
		scope=2;
		displayName="GBU-31 Air Burst";
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
		magazines[]=
		{
			"USAF_1Rnd_GBU31AB"
		};
		USAF_isGPSguided=1;
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_GBU31: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_GBU31\icon\gbu31_ico.paa";
		mapSize=3.8759999;
		displayName="weaponName";
		model="\USAF_missilebox\USAF_GBU31\USAF_GBU31.p3d";
		doLift=0.45300001;
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
	class ProxyUSAF_GBU31: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_GBU31\USAF_GBU31.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_GBU31: default
	{
		scope=1;
		displayName="GBU-31";
		weaponClass="USAF_GBU31_Launcher";
		type="GBU";
		uipicture="\USAF_missilebox\iaws_pics\gbu31_iaws_ca.paa";
		length=3.8800001;
		width=0.458;
		diameter=0.458;
		weight=924;
		allowWingtip=0;
		usedBy[]=
		{
			"au",
			"be",
			"ca",
			"cl",
			"dk",
			"de",
			"gr",
			"om",
			"ae",
			"il",
			"it",
			"jp",
			"nl",
			"no",
			"pk",
			"pl",
			"pt",
			"sa",
			"us",
			"sg",
			"kr",
			"th",
			"tr",
			"eg",
			"fi"
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
