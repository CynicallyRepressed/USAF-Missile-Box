class CfgPatches
{
	class USAF_AIM9X
	{
		units[]={};
		weapons[]=
		{
			"USAF_AIM9M_Launcher"
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
	class USAF_AIM9X_AA: USAF_MissileBase_AA
	{
		model="\USAF_missilebox\USAF_AIM9X\USAF_AIM9X.p3d";
		proxyShape="\USAF_missilebox\USAF_AIM9X\USAF_AIM9X.p3d";
		hit=500;
		indirectHit=300;
		indirectHitRange=7.5;
		cmimmunity=1;
		missileLockCone=360;
		lockSeekRadius=3400;
		timetoLive=60;
		maneuvrability=90;
		simulationStep=0.00050000001;
		airFriction=0.008000001;
		sideAirFriction=0.5;
		lockType=0;
		airLock=2;
		irLock="true";
		laserLock="false";
		initTime=0.1;
		thrustTime=3.75;
		maxspeed=1850;
		trackOversteer=1;
		trackLead=1;
		thrust=440;
		effectsMissile="USAF_AIM9X_AA_particle";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Rockets\explosion_missile_01",
			3.1622801,
			1,
			1800
		};
		holdsterAnimValue=0.5;
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_AA;
	class USAF_1Rnd_AIM9X: USAF_MagazineBase_AA
	{
		scope=2;
		displayName="AIM-9X Sidewinder";
		ammo="USAF_AIM9X_AA";
	};
};
class cfgWeapons
{
	class USAF_MissileLauncherBase_AA;
	class USAF_AIM9X_Launcher: USAF_MissileLauncherBase_AA
	{
		scope=2;
		displayName="AIM-9X";
		minRange=300;
		minRangeProbab=0.25;
		midRange=5000;
		midRangeProbab=0.80000004;
		maxRange=15000;
		maxRangeProbab=0.19999998;
		reloadTime=0.60000002;
		magazines[]=
		{
			"USAF_1Rnd_AIM9X"
		};
		weaponLockDelay=1;
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_AIM9X: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_AIM9X\icon\AIM9X_ico.paa";
		mapSize=2.8499999;
		displayName="AIM-9/X";
		model="\USAF_missilebox\USAF_AIM9X\USAF_AIM9x.p3d";
		doLift=0.26199999;
		infoStand="\USAF_missilebox\infopic\aim9x_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_AIM9X\rvmat\aim9x.rvmat",
				"USAF_missilebox\USAF_AIM9X\rvmat\aim9x.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_AIM9x: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_AIM9X\USAF_AIM9x.p3d";
		simulation="maverickweapon";
	};
};
class USAF_AIM9X_AA_particle
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
		intensity=10;
		interval=1;
		lifeTime=1;
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
	class USAF_1Rnd_AIM9X: default
	{
		scope=1;
		displayName="AIM-9/X";
		weaponClass="USAF_AIM9X_Launcher";
		type="AA";
		uipicture="\USAF_missilebox\iaws_pics\aim9x_iaws_ca.paa";
		length=3.02;
		width=0.28;
		diameter=0.127;
		weight=85;
		allowWingtip=0;
		usedBy[]=
		{
			"ar",
			"au",
			"at",
			"be",
			"bh",
			"br",
			"ca",
			"cl",
			"cz",
			"dk",
			"eg",
			"et",
			"fi",
			"de",
			"gr",
			"hu",
			"id",
			"ir",
			"iq",
			"il",
			"it",
			"jp",
			"jo",
			"kw",
			"my",
			"mx",
			"morocco",
			"nl",
			"nz",
			"no",
			"pk",
			"ph",
			"pl",
			"pt",
			"sa",
			"sg",
			"za",
			"kr",
			"es",
			"se",
			"ch",
			"tw",
			"th",
			"tr",
			"uk",
			"us",
			"ve",
			"zw"
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
