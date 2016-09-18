class CfgPatches
{
	class USAF_AGM154
	{
		units[]={};
		weapons[]=
		{
			"USAF_AGM154A1_Launcher",
			"USAF_AGM154A_Launcher"
		};
		requiredVersion=1.54;
		requiredAddons[]=
		{
			"USAF_Missilebox"
		};
	};
};
class cfgAmmo
{
	class USAF_MissileBase_AGM2;
	class USAF_AGM154A1_LGB: USAF_MissileBase_AGM2
	{
		model="\USAF_missilebox\USAF_AGM154\USAF_AGM154rel.p3d";
		proxyShape="\USAF_missilebox\USAF_AGM154\USAF_AGM154.p3d";
		hit=4000;
		indirectHit=2000;
		indirectHitRange=55;
		maxSpeed=100;
		sideAirFriction=0.2;
		maneuvrability=10;
		simulationStep=0.0020000001;
		airLock=0;
		irLock=0;
		laserLock=1;
		nvLock=0;
		maxControlRange=25800;
		missileLockCone=180;
		envelope[]={0,0.10000001,1.3,3,3.8000002,4.3000002,4.5,5,5,4,3,2,1,0};
		artilleryLock=0;
		lockType=0;
		trackOversteer=1;
		trackLead=1;
		timeToLive=20;
		initTime=0.89999998;
		thrustTime=30.5;
		thrust=50;
		fuseDistance=50;
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622801,
			1,
			1800
		};
	};
	class USAF_AGM154A_LGB: USAF_AGM154A1_LGB
	{
		hit=4000;
		indirecthit=2000;
		indirectHitRange=55;
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_LGB;
	class USAF_1Rnd_AGM154A1: USAF_MagazineBase_LGB
	{
		scope=2;
		ammo="USAF_AGM154A1_LGB";
		displayName="AGM-154A BLU-97/B";
		count=1;
	};
	class USAF_1Rnd_AGM154A: USAF_1Rnd_AGM154A1
	{
		ammo="USAF_AGM154A_LGB";
		scope=2;
		displayName="AGM-154A-1 BLU-111";
		count=1;
	};
};
class cfgWeapons
{
	class USAF_BombLauncherBase;
	class USAF_AGM154A1_Launcher: USAF_BombLauncherBase
	{
		scope=2;
		canLock=2;
		autoFire=0;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		displayName="AGM-154A BLU-97/B";
		minRange=50;
		minRangeProbab=0.60000002;
		midRange=6000;
		midRangeProbab=0.89999998;
		maxRange=15000;
		maxRangeProbab=0.1;
		reloadTime=1;
		magazines[]=
		{
			"USAF_1Rnd_AGM154A1"
		};
	};
	class USAF_AGM154A_Launcher: USAF_AGM154A1_Launcher
	{
		displayName="AGM-154A BLU-97/B";
		magazines[]=
		{
			"USAF_1Rnd_AGM154A",
			"USAF_1Rnd_AGM154A1"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_AGM154: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_AGM154\icon\AGM154_ico.paa";
		mapSize=4.0999999;
		displayName="AGM-154";
		model="\USAF_missilebox\USAF_AGM154\USAF_AGM154.p3d";
		doLift=0.44400001;
		infoStand="\USAF_missilebox\infopic\agm154_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_AGM154\rvmat\agm154.rvmat",
				"USAF_missilebox\USAF_AGM154\rvmat\agm154.rvmat",
				"USAF_missilebox\USAF_AGM154\rvmat\agm154destr.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_AGM154: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_AGM154\USAF_AGM154.p3d";
		simulation="maverickweapon";
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_AGM154A1: default
	{
		scope=1;
		displayName="AGM-154A BLU-97/B";
		weaponClass="USAF_AGM154A1_Launcher";
		type="AG";
		uipicture="\USAF_missilebox\iaws_pics\agm154_iaws_ca.paa";
		length=4.0999999;
		width=0.51899999;
		diameter=0.40599999;
		weight=497;
		allowWingtip=0;
		usedBy[]=
		{
			"au",
			"ca",
			"gr",
			"fi",
			"pl",
			"sg",
			"tr",
			"us",
			"nl"
		};
	};
	class USAF_1Rnd_AGM154A: USAF_1Rnd_AGM154A1
	{
		displayName="AGM-154A-1 BLU-111";
		weaponClass="USAF_AGM154A_Launcher";
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
