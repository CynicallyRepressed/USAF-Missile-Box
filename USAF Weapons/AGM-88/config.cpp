class CfgPatches
{
	class USAF_AGM88
	{
		units[]={};
		weapons[]=
		{
			"USAF_AGM88_Launcher"
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
	class USAF_MissileBase_AGM;
	class USAF_AGM88_AG: USAF_MissileBase_AGM
	{
		model="\USAF_missilebox\USAF_AGM88\USAF_AGM88.p3d";
		proxyShape="\USAF_missilebox\USAF_AGM88\USAF_AGM88.p3d";
		hit=7500;
		indirectHit=1750;
		indirectHitRange=8;
		timetoLive=80;
		maneuvrability=20;
		sideairfriction = 0.5;
		simulationstep=0.002;
		envelope[]= {0.00, 0.10, 0.65, 2.20, 3.70, 5.30, 6.00, 5.50, 5.60, 4.80, 3.60, 1.80, 0};
		airLock="false";
		irLock="false";
		laserLock="true";
		initTime=0.1;
		thrustTime=15;
		maxspeed=2850;
		maxControlRange=24600;
		trackOversteer=1;
		trackLead=1;
		thrust=440;
		effectsMissile="USAF_AGM88_AG_particle";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622801,
			1,
			1800
		};
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_AG;
	class USAF_1Rnd_AGM88: USAF_MagazineBase_AG
	{
		scope=2;
		displayName="AGM-88/E HARM";
		ammo="USAF_AGM88_AG";
	};
};
class cfgWeapons
{
	class USAF_MissileLauncherBase_AG;
	class USAF_AGM88_Launcher: USAF_MissileLauncherBase_AG
	{
		scope=2;
		displayName="AGM-88/E HARM";
		minRange=100;
		minRangeProbab=0.60000002;
		midRange=10000;
		midRangeProbab=0.89999998;
		maxRange=20000;
		maxRangeProbab=0.1;
		reloadTime=2.5;
		magazines[]=
		{
			"USAF_1Rnd_AGM88"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_AGM88: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_AGM88\icon\AGM88_ico.paa";
		mapSize=4.0999999;
		displayName="AGM-88/E HARM";
		model="\USAF_missilebox\USAF_AGM88\USAF_AGM88.p3d";
		doLift=0.505;
		infoStand="\USAF_missilebox\infopic\agm88_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_AGM88\rvmat\agm88.rvmat",
				"USAF_missilebox\USAF_AGM88\rvmat\agm88.rvmat",
				"USAF_missilebox\USAF_AGM88\rvmat\agm88destr.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_AGM88: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_AGM88\USAF_AGM88.p3d";
		simulation="maverickweapon";
	};
};
class USAF_AGM88_AG_particle
{
	class LightOne
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.99999998;
		interval=1;
		lifeTime=1.5;
	};
	class USAF_MissileOne
	{
		simulation="particles";
		type="USAF_MissileNormal";
		position[]={0,0,0};
		intensity=1;
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
		lifeTime=1.5;
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_AGM84: default
	{
		scope=1;
		displayName="AGM-88/E HARM";
		weaponClass="USAF_AGM88_Launcher";
		type="AG";
		uipicture="\USAF_missilebox\iaws_pics\agm88_iaws_ca.paa";
		length=4.0999999;
		width=1.1;
		diameter=0.25400001;
		weight=355;
		allowWingtip=0;
		usedBy[]=
		{
			"us",
			"it",
			"de"
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
