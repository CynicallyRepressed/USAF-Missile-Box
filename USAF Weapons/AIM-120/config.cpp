class CfgPatches
{
	class USAF_AIM120
	{
		units[]={};
		weapons[]=
		{
			"USAF_AIM120_Launcher"
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
	class USAF_MissileBase_AA;
	class USAF_AIM120_AA: USAF_MissileBase_AA
	{
		model="\USAF_missilebox\USAF_AIM120\USAF_AIM120.p3d";
		proxyShape="\USAF_missilebox\USAF_AIM120\USAF_AIM120.p3d";
		hit=1200;
		indirectHit=950;
		indirectHitRange=10;
		fuseDistance=2500;
		weaponLockSystem="8 + 16";
		timetoLive=60;
		maneuvrability=55;
		cmimmunity=1;
		simulationstep = 0.0005;
		airFriction=0.018000002;
		sideAirFriction=0.25;
		lockType=0;
		airLock=2;
		irLock="true";
		laserLock="true";
		initTime=0.35;
		thrustTime=9.25;
		maxspeed=3000;
		maxControlRange=32800;
		trackOversteer=1;
		trackLead=1.6;
		thrust=500;
		effectsMissile="USAF_AIM120_AA_particle";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622801,
			1,
			1800
		};
		holdsterAnimValue=1;
	};
	class USAF_AIM120_AAA: USAF_MissileBase_AA
	{
		model="\USAF_missilebox\USAF_AIM120\USAF_AIM120.p3d";
		proxyShape="\USAF_missilebox\USAF_AIM120\USAF_AIM120.p3d";
		hit=1000;
		indirectHit=900;
		indirectHitRange=10;
		maxSpeed=1500;
		sideAirFriction=0.18000001;
		maneuvrability=30;
		simulationStep=0.0020000001;
		cmImmunity=1;
		cost=1400;
		initTime=0.25;
		thrustTime=20;
		thrust=600;
		canlock=2;
		airlock=2;
		irLock=1;
		lockType=0;
		nvLock=0;
		artilleryLock=0;
		fuseDistance=750;
		effectsMissile="USAF_AIM120_AA_particle";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622801,
			1,
			1800
		};
		holdsterAnimValue=1;
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_AA;
	class USAF_1Rnd_AIM120: USAF_MagazineBase_AA
	{
		scope=2;
		displayName="AIM-120";
		ammo="USAF_AIM120_AA";
	};
	class USAF_1Rnd_AIM120I: USAF_MagazineBase_AA
	{
		scope=2;
		displayName="AIM-120";
		ammo="USAF_AIM120_AAA";
	};
};
class cfgWeapons
{
	class USAF_MissileLauncherBase_AA;
	class USAF_AIM120_Launcher: USAF_MissileLauncherBase_AA
	{
		scope=2;
		displayName="AIM-120/C AMRAAM";
		minRange=300;
		minRangeProbab=0.025;
		midRange=5000;
		midRangeProbab=0.090000004;
		maxRange=15000;
		maxRangeProbab=0.0099999998;
		reloadTime=2;
		magazines[]=
		{
			"USAF_1Rnd_AIM120"
		};
	};
	class USAF_AIM120I_Launcher: USAF_MissileLauncherBase_AA
	{
		scope=2;
		displayName="AIM-120/C AMRAAM";
		minRange=300;
		minRangeProbab=0.025;
		midRange=5000;
		midRangeProbab=0.090000004;
		maxRange=15000;
		maxRangeProbab=0.0099999998;
		reloadTime=2;
		magazines[]=
		{
			"USAF_1Rnd_AIM120I"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_AIM120: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_AIM120\icon\AIM120_ico.paa";
		mapSize=3.6600001;
		displayName="AIM-120/C AMRAAM";
		model="\USAF_missilebox\USAF_AIM120\USAF_AIM120.p3d";
		doLift=0.29499999;
		infoStand="\USAF_missilebox\infopic\aim120_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_AIM120\rvmat\aim120.rvmat",
				"USAF_missilebox\USAF_AIM120\rvmat\aim120.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_AIM120: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_AIM120\USAF_AIM120.p3d";
		simulation="maverickweapon";
	};
};
class USAF_AIM120_AA_particle
{
	class LightOne
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class USAF_MissileOne
	{
		simulation="particles";
		type="USAF_MissileNormal";
		position[]={0,0,0};
		intensity=100;
		interval=0.0099999998;
		lifeTime=20;
	};
	class MissileFire
	{
		simulation="particles";
		type="MissileFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_AIM9M: default
	{
		scope=1;
		displayName="AIM-120";
		weaponClass="USAF_AIM120_Launcher";
		type="AA";
		uipicture="\USAF_missilebox\iaws_pics\aim120_iaws_ca.paa";
		length=3.6600001;
		width=0.447;
		diameter=0.18700001;
		weight=151;
		allowWingtip=1;
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
