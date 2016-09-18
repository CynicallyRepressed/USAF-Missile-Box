class CfgPatches
{
	class USAF_CBU100
	{
		units[]={};
		weapons[]=
		{
			"USAF_CBU100_Launcher"
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
	class USAF_Bo_CBU100: USAF_LaserBombBase
	{
		model="\USAF_missilebox\USAF_CBU100\USAF_CBU100.p3d";
		proxyShape="\USAF_missilebox\USAF_CBU100\USAF_CBU100.p3d";
		hit=2000;
		indirectHit=1000;
		indirectHitRange=10;
		cost=2000;
		airLock=0;
		irLock=0;
		laserLock=1;
		nvLock=0;
		artilleryLock=0;
		lockType=0;
		missileLockCone=130;
		lockSeekRadius=7500;
		autoSeekTarget=0;
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_LGB;
	class USAF_1Rnd_CBU100: USAF_MagazineBase_LGB
	{
		displayName="CBU-100 Rockeye II";
		displayNameShort="500lb";
		ammo="USAF_Bo_CBU100";
		initSpeed=0;
		maxLeadSpeed=0;
		sound[]=
		{
			"\ca\Sounds\weapons\cannon\ch-29",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"\ca\Sounds\weapons\cannon\rocket_fly_x2",
			1,
			1.1,
			700
		};
		nameSound="missiles";
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_CBU100_Launcher: USAF_BombLauncherBase
	{
		magazines[]=
		{
			"USAF_1Rnd_CBU100"
		};
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
		displayName="CBU-100 Rockeye II";
		canLock=2;
		USAF_isGPSguided=1;
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_CBU100: USAF_editorMissileObjects
	{
		scope=2;
		mapSize=1.88;
		displayName="CBU-100/B";
		model="\USAF_missilebox\USAF_CBU\USAF_CBU100\USAF_CBU100.p3d";
		doLift=0.28600001;
		infoStand="\USAF_missilebox\USAF_CBU\infopic\cbu24b_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_CBU100\rvmat\frl_cbu24b.rvmat",
				"USAF_missilebox\USAF_CBU100\rvmat\frl_cbu24b.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_CBU100: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_CBU100\USAF_CBU100.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class USAF_CBU100_Launcher
	{
		type="BO";
		length=2.3599999;
		width=0.58999997;
		diameter=0.43599999;
		weight=363;
		maxMultiRail=3;
		allowWingtip=0;
		usedBy[]=
		{
			"us"
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
