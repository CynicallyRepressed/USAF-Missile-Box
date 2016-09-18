class CfgPatches
{
	class USAF_AGM84
	{
		units[]={};
		weapons[]=
		{
			"USAF_AGM84_Launcher"
		};
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"USAF_Missilebox"
		};
	};
};
class cfgAmmo
{
	class USAF_MissileBase_AGM;
	class USAF_AGM84_AG: USAF_MissileBase_AGM
	{
		model="USAF_missilebox\USAF_AGM84\USAF_AGM84.p3d";
		proxyShape="USAF_missilebox\USAF_AGM84\USAF_AGM84.p3d";
		hit=15000;
		indirectHit=1500;
		indirectHitRange=15;
		maxSpeed=520;
		envelope[]={0,0.2,1.000001,1.2,1.8000002,2.3,2.5,2.8,2.5999998,2.3000002,2.1,1.3,0.5,0};
		maxControlRange=14000;
		initTime=1.5;
		thrustTime=16;
		thrust=60;
		irLock=1;
		laserLock=1;
		sideAirFriction=0.1;
		maneuvrability=35;
		effectsMissile="USAF_AGM84_AG_particle";
		cost=10000;
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_AG;
	class USAF_1Rnd_AGM84: USAF_MagazineBase_AG
	{
		scope=2;
		displayName="AGM-84/L";
		ammo="USAF_AGM84_AG";
	};
};
class cfgWeapons
{
	class USAF_MissileLauncherBase_AG;
	class USAF_AGM84_Launcher: USAF_MissileLauncherBase_AG
	{
		scope=2;
		displayName="AGM-84/L";
		minRange=50;
		minRangeProbab=0.60000002;
		midRange=8000;
		midRangeProbab=0.89999998;
		maxRange=20000;
		maxRangeProbab=0.1;
		reloadTime=2;
		magazines[]=
		{
			"USAF_1Rnd_AGM84"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_AGM84: USAF_editorMissileObjects
	{
		scope=2;
		icon="USAF_missilebox\USAF_AGM84\icon\AGM84_ico.paa";
		mapSize=3.8;
		displayName="AGM-84/L";
		model="USAF_missilebox\USAF_AGM84\USAF_AGM84.p3d";
		doLift=0.498;
		infoStand="\USAF_missilebox\infopic\agm84l_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_AGM84\rvmat\USAF_agm84.rvmat",
				"USAF_missilebox\USAF_AGM84\rvmat\USAF_agm84.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_AGM84: ProxyWeapon
	{
		model="USAF_missilebox\USAF_AGM84\USAF_AGM84.p3d";
		simulation="maverickweapon";
	};
};
class USAF_AGM84_AG_particle
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
		type="USAF_MissileBig";
		position[]={0,0,0};
		intensity=1;
		interval=0.0099999998;
		lifeTime=15;
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
	class USAF_1Rnd_AGM84: default
	{
		scope=1;
		displayName="AGM-84/L";
		weaponClass="USAF_AGM84_Launcher";
		type="AG";
		uipicture="\USAF_missilebox\iaws_pics\agm84_iaws_ca.paa";
		length=3.8;
		width=0.91000003;
		diameter=0.34;
		weight=519;
		allowWingtip=0;
		usedBy[]=
		{
			"au",
			"ca",
			"cl",
			"dk",
			"de",
			"gr",
			"ir",
			"il",
			"in",
			"jp",
			"kr",
			"my",
			"nl",
			"pk",
			"sa",
			"sg",
			"es",
			"tw",
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
