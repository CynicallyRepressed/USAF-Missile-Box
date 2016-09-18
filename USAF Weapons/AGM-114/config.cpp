class CfgPatches
{
	class USAF_AGM114
	{
		units[]={};
		weapons[]=
		{
			"USAF_AGM114_Launcher",
			"USAF_AGM114K_Launcher"
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
	class M_Scalpel_AT;
	class USAF_AGM114_AG: M_Scalpel_AT
	{
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114L.p3d";
		proxyShape="\USAF_missilebox\USAF_AGM114\USAF_AGM114L.p3d";
		hit=3000;
		indirectHit=300;
		indirectHitRange=3;
		maxSpeed=446;
		maxControlRange=8000;
		initTime=0.34999999;
		thrustTime=6;
		thrust=100;
		sideAirFriction=0.1;
		maneuvrability=50;
		weaponLockSystem="16 +  4";
		irLock=1;
		laserLock=0;
		BD_climbAngle=15;
		BD_climbMaxAlt=60;
		BD_climbTargetDistanceMultiplier=0.1;
		cost=3000;
	};
	class USAF_JAGM_AG: USAF_AGM114_AG
	{
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114K.p3d";
		proxyShape="\USAF_missilebox\USAF_AGM114\USAF_AGM114K.p3d";
		irLock=1;
		laserLock=1;
	};
	class MissileBase;
	class M_Hellfire_AT: MissileBase
	{
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114BIS.p3d";
		proxyShape="\USAF_missilebox\USAF_AGM114\USAF_AGM114BIS.p3d";
		effectsMissile="USAF_Missile1";
	};
};
class cfgMagazines
{
	class USAF_MagazineBase_AG;
	class USAF_1Rnd_AGM114: USAF_MagazineBase_AG
	{
		scope=2;
		displayName="AGM-114/L";
		ammo="USAF_AGM114_AG";
	};
	class USAF_1Rnd_JAGM: USAF_MagazineBase_AG
	{
		scope=2;
		displayName="J-AGM";
		ammo="USAF_JAGM_AG";
	};
};
class cfgWeapons
{
	class USAF_MissileLauncherBase_AG;
	class USAF_AGM114_Launcher: USAF_MissileLauncherBase_AG
	{
		scope=2;
		displayName="AGM-114/L";
		minRange=50;
		minRangeProbab=0.60000002;
		midRange=3500;
		midRangeProbab=0.89999998;
		maxRange=8000;
		maxRangeProbab=0.1;
		reloadTime=0.30000001;
		magazines[]=
		{
			"USAF_1Rnd_AGM114"
		};
	};
	class USAF_JAGM_Launcher: USAF_AGM114_Launcher
	{
		displayName="J-AGM";
		magazines[]=
		{
			"USAF_1Rnd_JAGM"
		};
	};
};
class CfgVehicles
{
	class USAF_editorMissileObjects;
	class USAF_AGM114L: USAF_editorMissileObjects
	{
		scope=2;
		icon="\USAF_missilebox\USAF_AGM114\icon\AGM114_ico.paa";
		mapSize=1.63;
		displayName="AGM-114/L";
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114L.p3d";
		doLift=0.207;
		infoStand="\USAF_missilebox\infopic\agm114l_info.paa";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_AGM114\rvmat\agm114hellfire_metal.rvmat",
				"USAF_missilebox\USAF_AGM114\rvmat\agm114hellfire_metal.rvmat",
				"USAF_missilebox\USAF_AGM114\rvmat\agm114hellfire_metaldestr.rvmat",
				"USAF_missilebox\USAF_AGM114\rvmat\agm114hellfire_glass.rvmat",
				"USAF_missilebox\USAF_AGM114\rvmat\agm114hellfire_glass.rvmat",
				"USAF_missilebox\USAF_AGM114\rvmat\agm114hellfire_glassdestr.rvmat"
			};
		};
	};
	class USAF_AGM114K: USAF_AGM114L
	{
		displayName="J-AGM";
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114K.p3d";
		infoStand="\USAF_missilebox\infopic\agm114k_info.paa";
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyUSAF_AGM114L: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114L.p3d";
		simulation="maverickweapon";
	};
	class ProxyUSAF_AGM114K: ProxyWeapon
	{
		model="\USAF_missilebox\USAF_AGM114\USAF_AGM114K.p3d";
		simulation="maverickweapon";
	};
};
class USAF_AGM114_AG_particle
{
	class LightOne
	{
		simulation="light";
		type="RocketLight";
		position[]={0,-0.69999999,-0.090000004};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class USAF_MissileOne
	{
		simulation="particles";
		type="USAF_MissileSmall";
		position[]={0,-0.69999999,-0.090000004};
		intensity=0.1;
		interval=0.0099999998;
		lifeTime=5;
	};
	class MissileFire
	{
		simulation="particles";
		type="MissileFire";
		position[]={0,-0.69999999,-0.090000004};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class cfgIAWSweapons
{
	class default;
	class USAF_1Rnd_AGM114: default
	{
		scope=1;
		displayName="AGM-114/L";
		weaponClass="USAF_AGM114_Launcher";
		type="AG";
		uipicture="\USAF_missilebox\iaws_pics\agm114_iaws_ca.paa";
		length=1.63;
		width=0.33000001;
		diameter=0.178;
		weight=49;
		allowWingtip=0;
		usedBy[]=
		{
			"jo",
			"au",
			"eg",
			"fr",
			"gr",
			"iq",
			"il",
			"it",
			"jp",
			"kw",
			"lb",
			"nl",
			"no",
			"tw",
			"sa",
			"sg",
			"se",
			"tr",
			"ae",
			"uk",
			"us"
		};
	};
	class USAF_1Rnd_AGM114K: USAF_1Rnd_AGM114
	{
		displayName="J-AGM";
		weaponClass="USAF_AGM114K_Launcher";
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
