class CfgPatches
{
	class USAF_Missilebox
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.6;
		requiredAddons[]={};
	};
};
class cfgAddons
{
	class PreloadAddons
	{
		class USAF_MissileboxAdded
		{
			list[]=
			{
				"USAF_Missilebox"
			};
		};
	};
};
class CfgVehicleClasses
{
	class USAF_MissileboxWeapons
	{
		displayName="USAF Missilebox Objects";
	};
	class USAF_CBU
	{
		displayName="Clustermines";
	};
};
class CfgSounds
{
	class APM_trigger
	{
		name="APM_trigger";
		sound[]=
		{
			"\USAF_missilebox\snd\Explosion_Large.wss",
			1.1220185,
			1
		};
		titles[]={};
	};
	class AVM_trigger
	{
		name="AVM_trigger";
		sound[]=
		{
			"\Ca\sounds\Weapons\explosions\explosion_small_11",
			6.3095698,
			1,
			1600
		};
		titles[]={};
	};
	class ATM_trigger
	{
		name="AVM_trigger";
		sound[]=
		{
			"\ca\Weapons\Data\Sound\explosion_big_01_A",
			31.622801,
			1,
			1500
		};
		titles[]={};
	};
	class INM_trigger
	{
		name="INM_trigger";
		sound[]=
		{
			"\Ca\sounds\Weapons\explosions\explosion_small_11",
			6.3095698,
			1,
			1600
		};
		titles[]={};
	};
	class EB_brelease
	{
		name="bombrelease";
		sound[]=
		{
			"\EB_missilebox\sound\mk81_bombrelease.wss",
			1,
			1,
			20
		};
		titles[]={};
	};
	class pook_runway_kaboom1
	{
		sound[]=
		{
			"\EB_missilebox\sound\pook_underground_kaboom1.ogg",
			125,
			1,
			500
		};
		name="pook_runway_kaboom1";
		titles[]={};
	};
	class pook_runway_rocketfire1
	{
		sound[]=
		{
			"\ca\Sounds\weapons\cannon\RocketLauncher_Shot21",
			0.5,
			1,
			1100
		};
		name="pook_runway_rocketfire1";
		titles[]={};
	};
	class pook_runway_rocketfire2
	{
		sound[]=
		{
			"\ca\Sounds\weapons\cannon\S_5",
			1,
			1,
			1000
		};
		name="pook_runway_rocketfire2";
		titles[]={};
	};
};
class CfgDamageAround
{
	class DamageAroundHouse;
	class USAFDamageAroundHouse: DamageAroundHouse
	{
		radiusRatio="10";
		indirectHit="20";
	};
};
class CfgMissions
{
	class Missions
	{
		class missilebox_showcase
		{
			directory="USAF_missilebox\mission\missilebox_showcase.Zargabad";
		};
	};
};
class cfgAmmo
{
	class Default;
	class BombCore;
	class LaserBombCore;
	class MissileBase;
	class USAF_MissileBase_AA: MissileBase
	{
		model="";
		proxyShape="";
		hit=200;
		indirectHit=85;
		indirectHitRange=10;
		maneuvrability=40;
		simulationStep=0.001;
		maxControlRange=50000;
		airLock=2;
		irLock=1;
		cost=0;
		maxSpeed=828;
		timeToLive=180;
		sideAirFriction=0.0099999998;
		trackOversteer=1;
		trackLead=1;
		initTime=0;
		thrustTime=5;
		thrust=2900;
		fuseDistance=250;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		whistleDist=20;
		weaponLockSystem="16 + 2";
		cmImmunity=0.80000001;
	};
	class USAF_MissileBase_AGM: MissileBase
	{
		model="";
		proxyShape="";
		hit=850;
		indirectHit=20;
		indirectHitRange=2;
		cost=0;
		irLock=1;
		laserLock=0;
		maxControlRange=27000;
		initTime=0.15000001;
		trackOversteer=1;
		trackLead=1;
		timeToLive=120;
		maneuvrability=30;
		simulationStep=0.0099999998;
		sideAirFriction=0.02;
		maxSpeed=300;
		thrustTime=2;
		thrust=100;
		effectsMissile="USAF_Missile2";
		whistleDist=4;
		weaponLockSystem="16 +  4";
		cmImmunity=0.89999998;
	};
	class USAF_MissileBase_AGM2: MissileBase
	{
		model="";
		proxyShape="";
		hit=850;
		indirectHit=20;
		indirectHitRange=2;
		cost=0;
		irLock=1;
		laserLock=0;
		maxControlRange=27000;
		initTime=0.15000001;
		trackOversteer=1;
		trackLead=1;
		timeToLive=120;
		maneuvrability=30;
		simulationStep=0.0099999998;
		sideAirFriction=0.02;
		maxSpeed=300;
		thrustTime=2;
		thrust=100;
		whistleDist=4;
		weaponLockSystem="16 +  4";
		cmImmunity=0.89999998;
	};
	class USAF_BombBase: BombCore
	{
		hit=5000;
		indirectHit=1100;
		indirectHitRange=12;
		cost=0;
		canLock=0;
		irLock=0;
		laserLock=0;
		maxControlRange=10;
		maneuvrability=16;
		sideAirFriction=0.1;
		maxSpeed=100;
		timeToLive=120;
		initTime=0;
		thrustTime=0;
		thrust=0;
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.8183801,
			1,
			1600
		};
		model="";
		proxyShape="";
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
		whistleDist=24;
	};
	class USAF_LaserBombBase: LaserBombCore
	{
		hit=5000;
		cost=0;
		laserLock=1;
		indirectHit=1100;
		indirectHitRange=12;
		model="";
		proxyShape="";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.8183801,
			1,
			1600
		};
		trackOversteer=1;
		trackLead=0.94999999;
		maneuvrability=20;
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
		explosionTime=2;
		fuseDistance=35;
		whistleDist=24;
		nvLock=1;
	};
	class USAF_LaserBombBase2: LaserBombCore
	{
		hit=5000;
		cost=0;
		laserLock=1;
		indirectHit=1100;
		indirectHitRange=12;
		model="";
		proxyShape="";
		soundHit[]=
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.8183801,
			1,
			1600
		};
		trackOversteer=1;
		trackLead=0.94999999;
		maneuvrability=20;
		explosionTime=2;
		fuseDistance=35;
		whistleDist=24;
		nvLock=1;
	};
	class USAF_Bo_BL755: USAF_LaserBombBase
	{
		hit=50;
		indirectHit=50;
		indirectHitRange=2;
		cost=1000;
		IrLock=1;
		laserLock=1;
		nvLock=1;
		maxControlRange=10;
		maneuvrability=16;
		sideAirFriction=0.1;
		simulation="shotRocket";
		maxSpeed=100;
		timeToLive=120;
		initTime=0;
		thrustTime=0;
		thrust=0;
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class GrenadeBase;
	class Grenade: Default
	{
	};
	class GrenadeHand: Grenade
	{
	};
	class SmokeShell: GrenadeHand
	{
	};
	class G_40mm_Smoke: SmokeShell
	{
	};
	class USAF_G_40mm_SmokePurple: G_40mm_Smoke
	{
		smokeColor[]={0.66409999,0.21879999,0.73439997,1};
	};
	class USAF_BLU26B_Base: GrenadeBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\USAF_missilebox\USAF_FILLER\CX_blank.p3d";
		soundHit[]={};
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		soundEngine[]={};
		CraterEffects="";
		explosionEffects="";
	};
	class USAF_BLU26B_DA: USAF_BLU26B_Base
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		model="\USAF_missilebox\USAF_FILLER\CX_blank.p3d";
		soundHit[]={};
		soundFly[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		soundEngine[]={};
		CraterEffects="";
		explosionEffects="";
	};
	class USAF_BLU26B_AP: USAF_BLU26B_Base
	{
		hit=200;
		indirectHit=150;
		indirectHitRange=5;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\grenade_new1",
			3.1622801,
			1,
			600
		};
		supersonicCrackNear[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_close",
			1,
			1,
			100
		};
		supersonicCrackFar[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",
			1,
			1,
			150
		};
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
	class USAF_BLU26B_AT: USAF_BLU26B_Base
	{
		hit=700;
		indirectHit=450;
		indirectHitRange=10;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\explosion_mega_08",
			56.2341,
			1,
			1500
		};
		explosionEffects="ATRocketExplosion";
		CraterEffects="HERocketCrater";
		whistleDist=4;
	};
	class USAF_BLU26B_AV: USAF_BLU26B_Base
	{
		hit=400;
		indirectHit=300;
		indirectHitRange=10;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\explosion_large1",
			44.6684,
			1,
			1800
		};
		soundFly[]=
		{
			"Ca\sounds\Weapons\explosions\rocket_fly1",
			0.1,
			1.5,
			400
		};
		soundEngine[]=
		{
			"Ca\sounds\Weapons\explosions\noise",
			0.00316228,
			1,
			20
		};
		supersonicCrackNear[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_close",
			1,
			1,
			150
		};
		supersonicCrackFar[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",
			1,
			1,
			250
		};
		CraterEffects="HERocketCrater";
		explosionEffects="HERocketExplosion";
	};
	class USAF_BLU26B_IN: USAF_BLU26B_Base
	{
		hit=150;
		indirectHit=100;
		indirectHitRange=15;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\explosion_small_11",
			6.3095698,
			1,
			1600
		};
		soundFly[]=
		{
			"",
			1,
			1
		};
		soundEngine[]=
		{
			"",
			1,
			4
		};
		explosionEffects="VehicleExplosionEffects";
	};
	class USAF_BLU26B_TM: USAF_BLU26B_Base
	{
		hit=300;
		indirectHit=150;
		indirectHitRange=7;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\explosion_mega_08",
			56.2341,
			1,
			1500
		};
		explosionEffects="ATRocketExplosion";
		CraterEffects="HERocketCrater";
		whistleDist=4;
	};
	class USAF_BLU3B_FRAG: USAF_LaserBombBase
	{
		hit=30;
		indirectHit=5;
		indirectHitRange=15;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B.p3d";
		proxyShape="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B.p3d";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\grenade_new1",
			3.1622801,
			1,
			600
		};
		supersonicCrackNear[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_close",
			1,
			1,
			100
		};
		supersonicCrackFar[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",
			1,
			1,
			150
		};
		CraterEffects="GrenadeCrater";
		explosionEffects="EB_fragrktExplosion";
	};
	class USAF_BLU17B_WP: USAF_LaserBombBase
	{
		hit=20;
		indirectHit=3;
		indirectHitRange=25;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\FRL_BLU26B\FRL_BLU26B.p3d";
		proxyShape="\USAF_missilebox\FRL_BLU26B\FRL_BLU26B.p3d";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\grenade_new1",
			3.1622801,
			1,
			600
		};
		supersonicCrackNear[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_close",
			1,
			1,
			100
		};
		supersonicCrackFar[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",
			1,
			1,
			150
		};
		CraterEffects="GrenadeCrater";
		explosionEffects="WPExplosion";
	};
	class USAF_BLU24B_HE: USAF_LaserBombBase
	{
		hit=40;
		indirectHit=20;
		indirectHitRange=8;
		minRange=0;
		minRangeProbab=0.94999999;
		midRange=5;
		midRangeProbab=0.89999998;
		maxRange=10;
		maxRangeProbab=0;
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B.p3d";
		proxyShape="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B.p3d";
		cost=2000;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		soundHit[]=
		{
			"Ca\sounds\Weapons\explosions\grenade_new1",
			3.1622801,
			1,
			600
		};
		supersonicCrackNear[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_close",
			1,
			1,
			100
		};
		supersonicCrackFar[]=
		{
			"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",
			1,
			1,
			150
		};
		CraterEffects="GrenadeCrater";
		explosionEffects="GrenadeExplosion";
	};
};
class cfgMagazines
{
	class 300Rnd_25mm_GAU12;
	class 480Rnd_20mm_M61A1_USAF: 300Rnd_25mm_GAU12
	{
		count=480;
		displayName="M-61A1 480Rnd";
	};
	class 510Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=510;
		displayName="M-61A1 510Rnd";
	};
	class 500Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=511;
		displayName="M-61A1 511Rnd";
	};
	class 578Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=578;
		displayName="M-61A1 578Rnd";
	};
	class 640Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=640;
		displayName="M-61A1 640Rnd";
	};
	class 650Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=650;
		displayName="M-61A1 650Rnd";
	};
	class 675Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=675;
		displayName="M-61A1 675Rnd";
	};
	class 725Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=725;
		displayName="M-61A1 725Rnd";
	};
	class 940Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=940;
		displayName="M-61A1 940Rnd";
	};
	class 1028Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=1028;
		displayName="M-61A1 1028Rnd";
	};
	class 1030Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=1030;
		displayName="M-61A1 1030Rnd";
	};
	class 1100Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=1100;
		displayName="M-61A1 1100Rnd";
	};
	class 1550Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=1550;
		displayName="M-61A1 1550Rnd";
	};
	class 2050Rnd_20mm_M61A1_USAF: 480Rnd_20mm_M61A1_USAF
	{
		count=2050;
		displayName="M-61A1 2050Rnd";
	};
	class VehicleMagazine;
	class USAF_MagazineBase_AA: VehicleMagazine
	{
		scope=1;
		displayName="";
		ammo="";
		count=1;
		initSpeed=0;
		maxLeadSpeed=1850;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class USAF_MagazineBase_AG: VehicleMagazine
	{
		scope=1;
		displayName="";
		ammo="";
		count=1;
		initSpeed=0;
		maxLeadSpeed=150;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		WeaponLockSystem=8;
		cmImmunity=0.89999998;
	};
	class USAF_MagazineBase_Bo: VehicleMagazine
	{
		scope=1;
		displayName="";
		ammo="";
		initSpeed=0;
		maxLeadSpeed=0;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		count=1;
		nameSound="missiles";
	};
	class USAF_MagazineBase_LGB: VehicleMagazine
	{
		scope=1;
		displayName="";
		ammo="";
		initSpeed=0;
		maxLeadSpeed=1000;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="cannon";
	};
	class USAF_1Rnd_BL755: USAF_MagazineBase_LGB
	{
		displayName="BL-755 Clusterbomb";
		displayNameShort="600lb";
		ammo="USAF_Bo_BL755";
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
	class Default
	{
		USAF_isGPSguided=0;
		USAF_bomblets=0;
		USAF_bombletType="";
		USAF_foxSoundfile="";
	};
	class RocketPods;
	class LauncherCore;
	class cannoncore;
	class USAF_MissileLauncherBase_AA: LauncherCore
	{
		scope=1;
		CanLock=2;
		type=65536;
		reloadTime=0.5;
		weaponLockDelay=2;
		nameSound="MissileLauncher";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.12202,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			weaponSoundEffect="DefaultRifle";
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.316228,
			2.5
		};
		cursorAim="EmptyCursor";
		cursor="EmptyCursor";
		cursorSize=0.5;
		magazineReloadTime=0.1;
	};
	class USAF_MissileLauncherBase_AG: USAF_MissileLauncherBase_AA
	{
		reloadTime=3;
		CanLock=2;
		aiRateOfFire=5;
		aiRateOfFireDistance=4000;
		weaponLockDelay=4;
	};
	class USAF_BombLauncherBase: RocketPods
	{
		displayName="";
		CanLock=2;
		magazines[]={};
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="";
		reloadTime=0.5;
		magazineReloadTime=0.1;
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
	};
	class GAU12;
	class USAF_M61A1: GAU12
	{
		displayName="M-61A1";
		magazines[]=
		{
			"480Rnd_20mm_M61A1_USAF",
			"510Rnd_20mm_M61A1_USAF",
			"500Rnd_20mm_M61A1_USAF",
			"578Rnd_20mm_M61A1_USAF",
			"640Rnd_20mm_M61A1_USAF",
			"650Rnd_20mm_M61A1_USAF",
			"675Rnd_20mm_M61A1_USAF",
			"725Rnd_20mm_M61A1_USAF",
			"940Rnd_20mm_M61A1_USAF",
			"1028Rnd_20mm_M61A1_USAF",
			"1030Rnd_20mm_M61A1_USAF",
			"1100Rnd_20mm_M61A1_USAF",
			"1550Rnd_20mm_M61A1_USAF",
			"2050Rnd_20mm_M61A1_USAF"
		};
		class manual: cannoncore
		{
			displayName="M-61A1";
			autoFire=1;
			sound[]=
			{
				"\Ca\sounds\Weapons\cannon\A10vulcanVII",
				5.6234102,
				1,
				1100
			};
			reloadTime=0.02;
			dispersion=0.0024999999;
			soundContinuous=0;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			showToPlayer=0;
			soundBurst=0;
			burst=15;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.57999998;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			burst=10;
			aiRateOfFire=1;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.57999998;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=2;
			aiRateOfFireDistance=9000;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.57999998;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			burst=4;
			aiRateOfFire=3;
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.40000001;
			maxRange=1500;
			maxRangeProbab=0.0099999998;
		};
	};
	class USAF_BL755_Launcher: USAF_BombLauncherBase
	{
		magazines[]=
		{
			"USAF_1Rnd_BL755"
		};
		displayName="BL-755 Clusterbomb";
		canLock=2;
		modes[]=
		{
			"mode1",
			"mode2"
		};
		class mode1;
		class mode2;
		USAF_isGPSguided=1;
	};
};
class AnimationSources;
class HitPoints;
class NewTurret;
class Turrets;
class MainTurret;
class CfgVehicles
{
	class Strategic;
	class All;
	class NonStrategic;
	class Land;
	class USAF_editorMissileObjects: Strategic
	{
		armor=50;
		scope=1;
		accuracy=0.5;
		animated=0;
		attendant=1;
		transportAmmo=10000;
		destrType="DestructEngine";
		vehicleClass="USAF_MissileboxWeapons";
		transportFuel=0;
		nameSound="MissileLauncher";
		doLift=0.5;
		infoStand="\USAF_missilebox\infopic\no_info.paa";
		selectionDamage="camo";
		class EventHandlers
		{
			init="(_this select 0) setPos [getPos (_this select 0) select 0, getPos (_this select 0) select 1,(getPos (_this select 0) select 2) + (getNumber(configFile >> 'cfgVehicles' >> (typeOf (_this select 0)) >> 'doLift'))]";
		};
	};
	class USAF_editorMiscObjects: Strategic
	{
		armor=50;
		scope=1;
		accuracy=1;
		animated=0;
		destrType="DestructTent";
		transportFuel=0;
		vehicleClass="USAF_MissileboxWeapons";
		nameSound="MissileLauncher";
		doLift=0.5;
		infoStand="\USAF_missilebox\infopic\no_info.paa";
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
	};
	class StaticAmmocart: StaticWeapon
	{
	};
	class USAF_CBU_base: NonStrategic
	{
		vehicleClass="USAF_CBU";
		dammage="no";
		armor=5;
		scope=0;
		irTarget=0;
		side=-1;
	};
	class USAF_CBU_AP: USAF_CBU_base
	{
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		displayName="BLU26B AP mine";
		scope=2;
		class UserActions
		{
			class deactivate
			{
				displayName="Deactivate AP mine";
				position="camera";
				showWindow="true";
				onlyForPlayer=1;
				radius=3;
				condition="true";
				statement="[this, ""USAF_BLU26B_DA""] execVM ""\USAF_missilebox\scr\deactivate_mine.sqf"";";
			};
		};
		class EventHandlers
		{
			init="handle = [_this select 0, 1.4, 1.4, ""APM_trigger"", ""R_60mm_HE"", ""APERSMine_Range_Ammo""] execVM ""\USAF_missilebox\scr\mine_trigger.sqf""; (_this select 0) allowdamage false";
		};
	};
	class USAF_CBU_AV: USAF_CBU_base
	{
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		displayName="BLU26B AV mine";
		scope=2;
		class UserActions
		{
			class deactivate
			{
				displayName="Deactivate AV mine";
				position="camera";
				showWindow="true";
				onlyForPlayer=1;
				radius=3;
				condition="true";
				statement="[this, ""USAF_BLU26B_DA""] execVM ""\USAF_missilebox\scr\deactivate_mine.sqf"";";
			};
		};
		class EventHandlers
		{
			init="handle = [_this select 0, 2.4, 2.4, ""AVM_trigger"", ""R_60mm_HE"", ""AT_Mine_155mm_AMOS_range""] execVM ""\USAF_missilebox\scr\mine_trigger.sqf""; (_this select 0) allowdamage false";
		};
	};
	class USAF_CBU_AT: USAF_CBU_base
	{
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		displayName="BLU26B AT mine";
		scope=2;
		class UserActions
		{
			class deactivate
			{
				displayName="Deactivate AT mine";
				position="camera";
				showWindow="true";
				onlyForPlayer=1;
				radius=3;
				condition="true";
				statement="[this, ""USAF_BLU26B_DA""] execVM ""\USAF_missilebox\scr\deactivate_mine.sqf"";";
			};
		};
		class EventHandlers
		{
			init="handle = [_this select 0, 2, 2, ""ATM_trigger"", ""R_60mm_HE"", ""ATMine_Range_Ammo""] execVM ""\USAF_missilebox\scr\mine_trigger.sqf""; (_this select 0) allowdamage false";
		};
	};
	class USAF_CBU_IN: USAF_CBU_base
	{
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		displayName="BLU26B INC mine";
		scope=2;
		class UserActions
		{
			class deactivate
			{
				displayName="Deactivate INC mine";
				position="camera";
				showWindow="true";
				onlyForPlayer=1;
				radius=3;
				condition="true";
				statement="[this, ""USAF_BLU26B_DA""] execVM ""\USAF_missilebox\scr\deactivate_mine.sqf"";";
			};
		};
		class EventHandlers
		{
			init="handle = [_this select 0, 2, 2, ""INM_trigger"", ""R_60mm_HE"", ""APERSBoundingMine_Range_Ammo""] execVM ""\USAF_missilebox\scr\mine_trigger.sqf""; (_this select 0) allowdamage false";
		};
	};
	class USAF_CBU_TX: USAF_CBU_base
	{
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		displayName="BLU26B Gas mine";
		scope=2;
		class UserActions
		{
			class deactivate
			{
				displayName="Deactivate GAS mine";
				position="camera";
				showWindow="true";
				onlyForPlayer=1;
				radius=3;
				condition="true";
				statement="[this, ""USAF_BLU26B_DA""] execVM ""\USAF_missilebox\scr\deactivate_mine.sqf"";";
			};
		};
		class EventHandlers
		{
			init="handle = [_this select 0, 1.4, 1.4, ""APM_trigger"", ""SmokeShellRed"", ""R_60mm_HE""] execVM ""\USAF_missilebox\scr\mine_trigger.sqf""; (_this select 0) allowdamage false";
		};
	};
	class USAF_CBU_TM: USAF_CBU_base
	{
		model="\USAF_missilebox\USAF_BLU26B\USAF_BLU26B";
		displayName="BLU26B TM mine";
		scope=2;
		class UserActions
		{
			class deactivate
			{
				displayName="Deactivate TMR mine";
				position="camera";
				showWindow="true";
				onlyForPlayer=1;
				radius=3;
				condition="true";
				statement="[this, ""USAF_BLU26B_DA""] execVM ""\USAF_missilebox\scr\deactivate_mine.sqf"";";
			};
		};
		class EventHandlers
		{
			init="handle = [_this select 0, 1, 1, ""INM_trigger"", ""R_60mm_HE"", ""ClaymoreDirectionalMine_Remote_Ammo""] execVM ""\USAF_missilebox\scr\mine_trigger.sqf""; (_this select 0) allowdamage false";
		};
	};
	class Missilecart_base: StaticAmmocart
	{
		scope=1;
		side=6;
		faction="USAF";
		crew="";
		displayname="Ammocart";
		vehicleClass="USAF_MissileboxWeapons";
		typicalCargo[]={};
		model="";
		attendant=1;
		transportAmmo=300000;
		class Library
		{
			libTextDesc="";
		};
		picture="";
		icon="\USAF_missilebox\USAF_Sign\icon\missilecart_ico.paa";
		mapSize=4.4000001;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\USAF_missilebox\USAF_Sign\tex\ammocart_co.paa"
		};
		destrType="DestructEngine";
		class damage
		{
			tex[]={};
			mat[]=
			{
				"USAF_missilebox\USAF_Sign\rvmat\USAF_ammocart.rvmat",
				"USAF_missilebox\USAF_Sign\rvmat\USAF_ammocart.rvmat",
				"USAF_missilebox\USAF_Sign\rvmat\USAF_ammocart_destruct.rvmat"
			};
		};
		selectionDamage="camo";
	};
	class missile_cart_W: Missilecart_base
	{
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart.p3d";
		scope=2;
		displayName="Missile cart (AIM-9M/AIM-120)";
		magazines[]=
		{
			"USAF_1Rnd_AIM9M",
			"USAF_1Rnd_AIM9M",
			"USAF_1Rnd_AIM9M",
			"USAF_1Rnd_AIM120",
			"USAF_1Rnd_AIM120",
			"USAF_1Rnd_AIM120",
			"USAF_1Rnd_AIM9M",
			"USAF_1Rnd_AIM9M"
		};
	};
	class missile_cart_W_AA: missile_cart_W
	{
		displayName="Missile cart (AIM-9X/AIM-132)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart.p3d";
		magazines[]=
		{
			"USAF_1Rnd_AIM9X",
			"USAF_1Rnd_AIM9X",
			"USAF_1Rnd_AIM9X",
			"USAF_1Rnd_AIM120",
			"USAF_1Rnd_AIM120",
			"USAF_1Rnd_AIM120",
			"USAF_1Rnd_AIM9X",
			"USAF_1Rnd_AIM9X"
		};
	};
	class missile_cart_W_AGM1: missile_cart_W
	{
		displayName="Missile cart (AGM-65D)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart_AGM.p3d";
		magazines[]=
		{
			"USAF_1Rnd_AGM65",
			"USAF_1Rnd_AGM65",
			"USAF_1Rnd_AGM65",
			"USAF_1Rnd_AGM65"
		};
	};
	class missile_cart_W_AGM2: missile_cart_W
	{
		displayName="Missile cart (AGM-65E)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart_AGM.p3d";
		magazines[]=
		{
			"USAF_1Rnd_AGM65E",
			"USAF_1Rnd_AGM65E",
			"USAF_1Rnd_AGM65E",
			"USAF_1Rnd_AGM65E"
		};
	};
	class missile_cart_W_GBU12: missile_cart_W
	{
		displayName="Missile cart (GBU12)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart_AGM.p3d";
		magazines[]=
		{
			"USAF_1Rnd_GBU12",
			"USAF_1Rnd_GBU12",
			"USAF_1Rnd_GBU12",
			"USAF_1Rnd_GBU12"
		};
	};
	class missile_cart_W_Mk82: missile_cart_W
	{
		displayName="Missile cart (Mk82)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart_AGM.p3d";
		magazines[]=
		{
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82",
			"USAF_1Rnd_MK82"
		};
	};
	class missile_cart_W_GBU39: missile_cart_W
	{
		displayName="Missile cart (GBU39)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart_GBU39.p3d";
		magazines[]=
		{
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39",
			"USAF_1Rnd_GBU39"
		};
	};
	class missile_cart_W_AGM114: missile_cart_W
	{
		displayName="Missile cart (AGM-114)";
		model="\USAF_missilebox\USAF_Sign\USAF_ammocart_AGM114.p3d";
		magazines[]=
		{
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114",
			"USAF_1Rnd_AGM114"
		};
	};
};
class CfgMarkers
{
	class mil_destroy;
	class USAF_GPSINSmarker: mil_destroy
	{
		scope=1;
		name="GPS/INS Marker";
		icon="\USAF_missilebox\data\gps_marker_ca.paa";
		color[]={1,0,0,1};
	};
	class USAF_GPSINSmarkerHigh: USAF_GPSINSmarker
	{
		icon="\USAF_missilebox\data\gps_cursor_ca.paa";
	};
};
class Extended_PreInit_EventHandlers
{
	USAF_GPSINS_preinit="call compile preProcessFileLineNumbers '\USAF_missilebox\scr\preInit.sqf'";
};
class Extended_Fired_Eventhandlers
{
	class Helicopter
	{
		USAF_GPSfiredEH="_this call USAF_createBomblets";
	};
	class Plane
	{
		USAF_GPSfiredEH="_this call USAF_createBomblets";
	};
};
class Extended_GetIn_Eventhandlers
{
	class Helicopter
	{
		USAF_GPShideObject="_this spawn USAF_hideGPSobject";
	};
	class USAF_AH1W_TIR
	{
		USAF_GPShideObject="nul = (_this select 0) call USAF_CHECKFORAI";
	};
	class Plane
	{
		USAF_GPShideObject="_this spawn USAF_hideGPSobject";
	};
};
class Extended_Init_Eventhandlers
{
	class USAF_AH1W_TIR
	{
		USAF_AH1W_TIR_init="(_this select 0) setVariable ['USAF_laserIsOn', false];ok = _this call USAF_init_TIR;nul = (_this select 0) call USAF_CHECKFORAI";
	};
};
class Extended_Killed_Eventhandlers
{
	class missile_cart_W
	{
		USAF_hideMissiles="(_this select 0) setVehicleAmmo 0";
	};
};
class CfgCloudlets
{
	access=0;
	class Default;
	class USAF_MissileNormal: Default
	{
		interval=0.0015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.6;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,3.5,4.5};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.40000001,0.40000001,0.40000001,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class USAF_MissileBig: USAF_MissileNormal
	{
		volume=1.6;
		lifeTime=15;
		size[]={2.5,3.5,4};
		color[]=
		{
			{0.2,0.2,0.2,0.80000001},
			{0.85000002,0.85000002,0.85000002,0.30000001},
			{1,1,1,0}
		};
	};
	class USAF_MissileSmall: USAF_MissileNormal
	{
		volume=0.2;
		lifeTime=7;
		size[]={0.75,1.25,1.5};
		color[]=
		{
			{0.2,0.2,0.2,0.80000001},
			{0.85000002,0.85000002,0.85000002,0.30000001},
			{1,1,1,0}
		};
	};
	class MOAB_Blast: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=64;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1;
		moveVelocity[]={0,120,0};
		rotationVelocity=0;
		weight=9;
		volume=7.9000001;
		rubbing=1;
		size[]={10};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,0}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={110,70,110};
		MoveVelocityVar[]={20,5,20};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class MOAB_Blast_02: Default
	{
		interval=9.9999997e-005;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=64;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.40000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=9;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={20};
		color[]=
		{
			{1,1,1,-20},
			{1,1,1,0}
		};
		animationSpeed[]={1.6};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={110,70,110};
		MoveVelocityVar[]={20,0,20};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class MOAB_Blast_Shockwave: Default
	{
		interval=1e-006;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=50;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={20};
		color[]=
		{
			{1,1,1,-0.2},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={400,400,400};
		rotationVelocityVar=1;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MOAB_Smoke1: Default
	{
		interval=0.00019999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		anglevar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=30;
		moveVelocity[]={0,40,0};
		rotationVelocity=5;
		weight=9.8000002;
		volume=7.9000001;
		rubbing=1;
		size[]={12,14};
		color[]=
		{
			{0.050000001,0.048,0.044,0.60000002},
			{0.40000001,0.38,0.34,0.80000001},
			{0.5,0.47999999,0.44,0.40000001},
			{0.60000002,0.57999998,0.54000002,0.2},
			{0.69999999,0.68000001,0.63999999,0.050000001},
			{0.80000001,0.77999997,0.74000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={120,80,120};
		MoveVelocityVar[]={50,10,50};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class MOAB_Smoke2: Default
	{
		interval=0.00019999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		anglevar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=30;
		moveVelocity[]={0,40,0};
		rotationVelocity=-5;
		weight=9.8000002;
		volume=7.9000001;
		rubbing=1;
		size[]={12,14};
		color[]=
		{
			{0.050000001,0.048,0.044,0.60000002},
			{0.40000001,0.38,0.34,0.80000001},
			{0.5,0.47999999,0.44,0.40000001},
			{0.60000002,0.57999998,0.54000002,0.2},
			{0.69999999,0.68000001,0.63999999,0.050000001},
			{0.80000001,0.77999997,0.74000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={120,80,120};
		MoveVelocityVar[]={50,240,50};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class MOAB_Smoke3: Default
	{
		interval=0.00039999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		anglevar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=60;
		moveVelocity[]={0,0,0};
		rotationVelocity=2;
		weight=10.1;
		volume=7.9000001;
		rubbing=2;
		size[]={12};
		color[]=
		{
			{0.050000001,0.048,0.044,0.60000002},
			{0.40000001,0.38,0.34,0.80000001},
			{0.5,0.47999999,0.44,0.40000001},
			{0.60000002,0.57999998,0.54000002,0.2},
			{0.69999999,0.68000001,0.63999999,0.050000001},
			{0.80000001,0.77999997,0.74000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={120,80,120};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class MOAB_Smoke3_3: Default
	{
		interval=0.00039999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		anglevar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=60;
		moveVelocity[]={0,0,0};
		rotationVelocity=-2;
		weight=10.1;
		volume=7.9000001;
		rubbing=2;
		size[]={12};
		color[]=
		{
			{0.050000001,0.048,0.044,0.60000002},
			{0.40000001,0.38,0.34,0.80000001},
			{0.5,0.47999999,0.44,0.40000001},
			{0.60000002,0.57999998,0.54000002,0.2},
			{0.69999999,0.68000001,0.63999999,0.050000001},
			{0.80000001,0.77999997,0.74000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={120,80,120};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
};
class USAF_Missile1
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0.30000001,0.30000001,0.30000001};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class USAF_Missile1
	{
		simulation="particles";
		type="USAF_MissileNormal";
		position[]={0.30000001,0.30000001,0.30000001};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class MissileFire
	{
		simulation="particles";
		type="MissileFire";
		position[]={0.30000001,0.30000001,0.30000001};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class USAF_Missile2
{
	class Light2
	{
		simulation="light";
		type="RocketLight";
		position[]={0.30000001,0.30000001,0.30000001};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class USAF_Missile2
	{
		simulation="particles";
		type="USAF_MissileBig";
		position[]={0.30000001,0.30000001,0.30000001};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class MissileFire
	{
		simulation="particles";
		type="MissileFire";
		position[]={0.30000001,0.30000001,0.30000001};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class CfgLights
{
	class ExploLight10
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight15
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight20
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight25
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight30
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight35
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight40
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight45
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight50
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight55
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight60
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight65
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight70
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight75
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight80
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight85
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight90
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight95
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class ExploLight100
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
};
class iaws_gui
{
	idd=3440;
	movingEnable=0;
	enableSimulation=1;
	onload="ok = [] spawn IAWS_collectWeaponsList";
	onUnload="uiNamespace setVariable ['uiIDC',nil]";
	objects[]={};
	class controls
	{
		class iaws_gui_background
		{
			idc=-1;
			moving=0;
			type=0;
			style=48;
			text="\frl_missilebox\data\iaws_gui3_USAF.paa";
			font="Zeppelin32";
			sizeEx=0.023;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			x=0;
			y=0;
			w=1;
			h=1;
		};
		class iaws_button001_bg: iaws_gui_background
		{
			idc=3701;
			text="\frl_missilebox\iaws_pics\no_iaws_USAF.paa";
			x="(1/1024)*(6*		16)";
			y="(1/768)*(6*		16)";
			w="(1/1024)*32";
			h="(1/768)*128";
		};
		class iaws_button002_bg: iaws_button001_bg
		{
			idc=3702;
			x="(1/1024)*(9*		16)";
		};
		class iaws_button003_bg: iaws_button001_bg
		{
			idc=3703;
			x="(1/1024)*(12*		16)";
		};
		class iaws_button004_bg: iaws_button001_bg
		{
			idc=3704;
			x="(1/1024)*(15*		16)";
		};
		class iaws_button005_bg: iaws_button001_bg
		{
			idc=3705;
			x="(1/1024)*(18*		16)";
		};
		class iaws_button006_bg: iaws_button001_bg
		{
			idc=3706;
			x="(1/1024)*(22*		16)";
		};
		class iaws_button007_bg: iaws_button001_bg
		{
			idc=3707;
			x="(1/1024)*(25*		16)";
		};
		class iaws_button008_bg: iaws_button001_bg
		{
			idc=3708;
			x="(1/1024)*(28*		16)";
		};
		class iaws_button009_bg: iaws_button001_bg
		{
			idc=3709;
			x="(1/1024)*(31*		16)";
		};
		class iaws_button010_bg: iaws_button001_bg
		{
			idc=3710;
			x="(1/1024)*(35*		16)";
		};
		class iaws_button011_bg: iaws_button001_bg
		{
			idc=3711;
			x="(1/1024)*(38*		16)";
		};
		class iaws_button012_bg: iaws_button001_bg
		{
			idc=3712;
			x="(1/1024)*(41*		16)";
		};
		class iaws_button013_bg: iaws_button001_bg
		{
			idc=3713;
			x="(1/1024)*(44*		16)";
		};
		class iaws_button014_bg: iaws_button001_bg
		{
			idc=3714;
			x="(1/1024)*(47*		16)";
		};
		class iaws_button021_bg: iaws_button001_bg
		{
			idc=3715;
			x="(1/1024)*(9*		16)";
			y="(1/768)*(15*		16)";
		};
		class iaws_button022_bg: iaws_button021_bg
		{
			idc=3716;
			x="(1/1024)*(12*		16)";
		};
		class iaws_button023_bg: iaws_button021_bg
		{
			idc=3717;
			x="(1/1024)*(15*		16)";
		};
		class iaws_button024_bg: iaws_button021_bg
		{
			idc=3718;
			x="(1/1024)*(18*		16)";
		};
		class iaws_button025_bg: iaws_button021_bg
		{
			idc=3719;
			x="(1/1024)*(22*		16)";
		};
		class iaws_button026_bg: iaws_button021_bg
		{
			idc=3720;
			x="(1/1024)*(25*		16)";
		};
		class iaws_button027_bg: iaws_button021_bg
		{
			idc=3721;
			x="(1/1024)*(28*		16)";
		};
		class iaws_button028_bg: iaws_button021_bg
		{
			idc=3722;
			x="(1/1024)*(31*		16)";
		};
		class iaws_button029_bg: iaws_button021_bg
		{
			idc=3723;
			x="(1/1024)*(35*		16)";
		};
		class iaws_button030_bg: iaws_button021_bg
		{
			idc=3724;
			x="(1/1024)*(38*		16)";
		};
		class iaws_button031_bg: iaws_button021_bg
		{
			idc=3725;
			x="(1/1024)*(41*		16)";
		};
		class iaws_button032_bg: iaws_button021_bg
		{
			idc=3726;
			x="(1/1024)*(44*		16)";
		};
		class iaws_button041_bg: iaws_button001_bg
		{
			idc=3727;
			x="(1/1024)*(9*		16)";
			y="(1/768)*(24*		16)";
		};
		class iaws_button042_bg: iaws_button041_bg
		{
			idc=3728;
			x="(1/1024)*(12*		16)";
		};
		class iaws_button043_bg: iaws_button041_bg
		{
			idc=3729;
			x="(1/1024)*(15*		16)";
		};
		class iaws_button044_bg: iaws_button041_bg
		{
			idc=3730;
			x="(1/1024)*(18*		16)";
		};
		class iaws_button045_bg: iaws_button041_bg
		{
			idc=3731;
			x="(1/1024)*(22*		16)";
		};
		class iaws_button046_bg: iaws_button041_bg
		{
			idc=3732;
			x="(1/1024)*(25*		16)";
		};
		class iaws_button047_bg: iaws_button041_bg
		{
			idc=3733;
			x="(1/1024)*(28*		16)";
		};
		class iaws_button048_bg: iaws_button041_bg
		{
			idc=3734;
			x="(1/1024)*(31*		16)";
		};
		class iaws_button049_bg: iaws_button041_bg
		{
			idc=3735;
			x="(1/1024)*(35*		16)";
		};
		class iaws_button050_bg: iaws_button041_bg
		{
			idc=3736;
			x="(1/1024)*(38*		16)";
		};
		class iaws_button051_bg: iaws_button041_bg
		{
			idc=3737;
			x="(1/1024)*(41*		16)";
		};
		class iaws_button052_bg: iaws_button041_bg
		{
			idc=3738;
			x="(1/1024)*(44*		16)";
		};
		class iaws_button001
		{
			idc=3801;
			type=1;
			style="0x02";
			x="(1/1024)*(6*		16)";
			y="(1/768)*(6*		16)";
			w="(1/1024)*32";
			h="(1/768)*128";
			font="Zeppelin32";
			sizeEx=0.025;
			colorDisabled[]={0.40000001,0.40000001,0.40000001,0};
			colorBackgroundDisabled[]={0.94999999,0.94999999,0.94999999,0.5};
			ColorText[]={0.80000001,0.80000001,1,0.80000001};
			ColorBackground[]={0,0,0,0};
			colorBackgroundActive[]={0.1,0.1,0.1,0.5};
			offsetX=0;
			offsetY=0;
			offsetPressedX=0.0020000001;
			offsetPressedY=0.0020000001;
			colorFocused[]={0.02,0.02,0.02,0};
			colorShadow[]={0.02,0.02,0.02,0};
			colorBorder[]={0.02,0.02,0.02,0};
			borderSize=0;
			soundEnter[]=
			{
				"\USAF\ui\data\sound\mouse2",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\USAF\ui\data\sound\new1",
				0.090000004,
				1
			};
			soundClick[]=
			{
				"\USAF\ui\data\sound\mouse3",
				0.07,
				1
			};
			soundEsUSAFpe[]=
			{
				"\USAF\ui\data\sound\mouse1",
				0.090000004,
				1
			};
			Text="";
			onButtonClick="uiNamespace setVariable ['uiIDC',(([str(_this select 0), '#']USAFll CBA_fnc_split) select 1)]";
			action="ok = [3900, (missionNamespace getVariable 'IAWS_weapons_list')] spawn IAWS_fillListbox";
		};
		class iaws_button002: iaws_button001
		{
			idc=3802;
			x="(1/1024)*(9*		16)";
		};
		class iaws_button003: iaws_button001
		{
			idc=3803;
			x="(1/1024)*(12*		16)";
		};
		class iaws_button004: iaws_button001
		{
			idc=3804;
			x="(1/1024)*(15*		16)";
		};
		class iaws_button005: iaws_button001
		{
			idc=3805;
			x="(1/1024)*(18*		16)";
		};
		class iaws_button006: iaws_button001
		{
			idc=3806;
			x="(1/1024)*(22*		16)";
		};
		class iaws_button007: iaws_button001
		{
			idc=3807;
			x="(1/1024)*(25*		16)";
		};
		class iaws_button008: iaws_button001
		{
			idc=3808;
			x="(1/1024)*(28*		16)";
		};
		class iaws_button009: iaws_button001
		{
			idc=3809;
			x="(1/1024)*(31*		16)";
		};
		class iaws_button010: iaws_button001
		{
			idc=3810;
			x="(1/1024)*(35*		16)";
		};
		class iaws_button011: iaws_button001
		{
			idc=3811;
			x="(1/1024)*(38*		16)";
		};
		class iaws_button012: iaws_button001
		{
			idc=3812;
			x="(1/1024)*(41*		16)";
		};
		class iaws_button013: iaws_button001
		{
			idc=3813;
			x="(1/1024)*(44*		16)";
		};
		class iaws_button014: iaws_button001
		{
			idc=3814;
			x="(1/1024)*(47*		16)";
		};
		class iaws_button021: iaws_button001
		{
			idc=3815;
			x="(1/1024)*(9*		16)";
			y="(1/768)*(15*		16)";
		};
		class iaws_button022: iaws_button021
		{
			idc=3806;
			x="(1/1024)*(12*		16)";
		};
		class iaws_button023: iaws_button021
		{
			idc=3817;
			x="(1/1024)*(15*		16)";
		};
		class iaws_button024: iaws_button021
		{
			idc=3818;
			x="(1/1024)*(18*		16)";
		};
		class iaws_button025: iaws_button021
		{
			idc=3819;
			x="(1/1024)*(22*		16)";
		};
		class iaws_button026: iaws_button021
		{
			idc=3820;
			x="(1/1024)*(25*		16)";
		};
		class iaws_button027: iaws_button021
		{
			idc=3821;
			x="(1/1024)*(28*		16)";
		};
		class iaws_button028: iaws_button021
		{
			idc=3822;
			x="(1/1024)*(31*		16)";
		};
		class iaws_button029: iaws_button021
		{
			idc=3823;
			x="(1/1024)*(35*		16)";
		};
		class iaws_button030: iaws_button021
		{
			idc=3824;
			x="(1/1024)*(38*		16)";
		};
		class iaws_button031: iaws_button021
		{
			idc=3825;
			x="(1/1024)*(41*		16)";
		};
		class iaws_button032: iaws_button021
		{
			idc=3826;
			x="(1/1024)*(44*		16)";
		};
		class iaws_button041: iaws_button001
		{
			idc=3827;
			x="(1/1024)*(9*		16)";
			y="(1/768)*(24*		16)";
		};
		class iaws_button042: iaws_button041
		{
			idc=3828;
			x="(1/1024)*(12*		16)";
		};
		class iaws_button043: iaws_button041
		{
			idc=3829;
			x="(1/1024)*(15*		16)";
		};
		class iaws_button044: iaws_button041
		{
			idc=3830;
			x="(1/1024)*(18*		16)";
		};
		class iaws_button045: iaws_button041
		{
			idc=3831;
			x="(1/1024)*(22*		16)";
		};
		class iaws_button046: iaws_button041
		{
			idc=3832;
			x="(1/1024)*(25*		16)";
		};
		class iaws_button047: iaws_button041
		{
			idc=3833;
			x="(1/1024)*(28*		16)";
		};
		class iaws_button048: iaws_button041
		{
			idc=3834;
			x="(1/1024)*(31*		16)";
		};
		class iaws_button049: iaws_button041
		{
			idc=3835;
			x="(1/1024)*(35*		16)";
		};
		class iaws_button050: iaws_button041
		{
			idc=3836;
			x="(1/1024)*(38*		16)";
		};
		class iaws_button051: iaws_button041
		{
			idc=3837;
			x="(1/1024)*(41*		16)";
		};
		class iaws_button052: iaws_button041
		{
			idc=3838;
			x="(1/1024)*(44*		16)";
		};
		class iaws_apply_button: iaws_button001
		{
			idc=3880;
			x="(1/1024)*(50*		16)";
			y="(1/768)*(34*		16)";
			w="(1/1024)*(8*		16)";
			h="(1/768)*(2*		16)";
			text="APPLY";
			action="";
		};
		class iaws_clear_button: iaws_apply_button
		{
			idc=3881;
			y="(1/768)*(37*		16)";
			text="CLEAR";
			onButtonClick="lbClear 3901";
			action="";
		};
		class iaws_exit_button: iaws_apply_button
		{
			idc=3882;
			y="(1/768)*(40*		16)";
			text="EXIT";
			action="(findDisplay 3440) closeDisplay 0";
		};
		class iaws_ListBox
		{
			idc=3900;
			access=0;
			type=5;
			style=0;
			x="(1/1024)*(50*		16)";
			y="(1/768)*(6*		16)";
			w="(1/1024)*(8*		16)";
			h="(1/768)*(27*		16)";
			font="TahomaB";
			sizeEx=0.023;
			rowHeight=0;
			colorText[]={0.80000001,0.80000001,1,0.80000001};
			colorScrollbar[]={0.80000001,0.80000001,1,0.80000001};
			colorSelect[]={0,0,0,1};
			colorSelect2[]={1,0.5,0,1};
			colorSelectBackground[]={0.60000002,0.60000002,0.60000002,1};
			colorSelectBackground2[]={0.2,0.2,0.2,1};
			colorBackground[]={0,0,0,1};
			maxHistoryDelay=1;
			soundSelect[]=
			{
				"",
				0.1,
				1
			};
			period=1;
			autoScrollSpeed=-1;
			autoScrollDelay=5;
			autoScrollRewind=0;
			arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
			arrowFull="#(argb,8,8,3)color(1,1,1,1)";
			shadow=0;
			class ScrollBar
			{
				color[]={0.80000001,0.80000001,1,0.80000001};
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="#(argb,8,8,3)color(1,1,1,1)";
				arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
				arrowFull="#(argb,8,8,3)color(1,1,1,1)";
				border="#(argb,8,8,3)color(1,1,1,1)";
				shadow=0;
			};
		};
		class ammoListBox1: iaws_ListBox
		{
			idc=3901;
			x="(1/1024)*(9*		16)";
			y="(1/768)*(33*		16)";
			w="(1/1024)*(11*		16)";
			h="(1/768)*(3*		16)";
		};
		class ammoListBox2: ammoListBox1
		{
			idc=3902;
			x="(1/1024)*(35*		16)";
		};
		class ammoListBox3: ammoListBox1
		{
			idc=3903;
			y="(1/768)*(36*		16)";
		};
		class ammoListBox4: ammoListBox3
		{
			idc=3904;
			x="(1/1024)*(35*		16)";
		};
	};
};
class RscMapControl;
class USAF_airgpsmfd
{
	idd=3330;
	movingEnable=0;
	enableSimulation=1;
	onload="nul = [] spawn USAF_initDialog";
	onUnload="USAFll USAF_gpsExit";
	class controlsBackground
	{
		class USAF_mfgmap: RscMapControl
		{
			idc=3330;
			maxSatelliteAlpha=0;
			x="(1/1024)*79";
			y="(1/768)*79";
			w="(1/1024)*868";
			h="(1/768)*599";
		};
	};
	objects[]={};
	class controls
	{
		class USAF_airgpsmfd_border
		{
			idc=3331;
			moving=0;
			type=0;
			style=48;
			text="\USAF_missilebox\data\airgpsmfd_USAF.paa";
			font="Zeppelin32";
			sizeEx=0.023;
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,1,1};
			x=0;
			y=0;
			w=1;
			h=1;
		};
		class USAF_gpsButtons
		{
			idc=-1;
			type=1;
			style="0x02";
			x="(1/1024)*5";
			y="(1/768)*572";
			w="(1/1024)*43";
			h="(1/768)*40";
			font="Zeppelin32";
			sizeEx=0.025;
			colorDisabled[]={0.40000001,0.40000001,0.40000001,0};
			colorBackgroundDisabled[]={0.94999999,0.94999999,0.94999999,0.5};
			ColorText[]={0.1,1,0.1,0.80000001};
			ColorBackground[]={0,0,0,0};
			colorBackgroundActive[]={0.1,0.1,0.1,0.5};
			offsetX=0.003;
			offsetY=0.003;
			offsetPressedX=0.0020000001;
			offsetPressedY=0.0020000001;
			colorFocused[]={0.02,0.02,0.02,0};
			colorShadow[]={0.02,0.02,0.02,0};
			colorBorder[]={0.02,0.02,0.02,0};
			borderSize=0;
			soundEnter[]=
			{
				"\USAF\ui\data\sound\mouse2",
				0.090000004,
				1
			};
			soundPush[]=
			{
				"\USAF\ui\data\sound\new1",
				0.090000004,
				1
			};
			soundClick[]=
			{
				"\USAF\ui\data\sound\mouse3",
				0.07,
				1
			};
			soundEsUSAFpe[]=
			{
				"\USAF\ui\data\sound\mouse1",
				0.090000004,
				1
			};
			Text="";
			action="";
		};
		class USAF_airgpsmfd_exitbutton: USAF_gpsButtons
		{
			idc=3332;
			y="(1/768)*572";
			Text="";
			action="(findDisplay 3330) closeDisplay 0";
		};
		class USAF_airgpsmfd_centerbutton: USAF_gpsButtons
		{
			idc=3333;
			y="(1/768)*469";
			Text="";
			action="nul = [] spawn USAF_gpsCenterOnPlayer";
		};
		class USAF_airgpsmfd_markposbutton: USAF_gpsButtons
		{
			idc=3334;
			y="(1/768)*163";
			Text="";
			action="USAFll USAF_gpsMarkPos";
		};
		class USAF_airgpsmfd_clearbutton: USAF_gpsButtons
		{
			idc=3335;
			y="(1/768)*266";
			Text="";
			action="USAFll USAF_gpsClear";
		};
		class USAF_airgpsmfd_centergps: USAF_gpsButtons
		{
			idc=3340;
			y="(1/768)*365";
			Text="";
			action="nul = [] spawn USAF_gpsCenterOnMarker";
		};
		class USAF_airgpsmfd_dirmode: USAF_gpsButtons
		{
			idc=3341;
			x="(1/1024)*979";
			y="(1/768)*162";
			Text="";
			action="USAFll USAF_gpsDisplaySetDirMode";
		};
		class USAF_airgpsmfd_dispmode: USAF_gpsButtons
		{
			idc=3342;
			x="(1/1024)*979";
			y="(1/768)*265";
			Text="";
			action="USAFll USAF_gpsDisplaySetDispMode";
		};
		class USAF_airgpsmfd_dispmode_up: USAF_gpsButtons
		{
			idc=3343;
			x="(1/1024)*979";
			y="(1/768)*469";
			Text="";
			action="[25, 50, 500] USAFll USAF_gpsSetHeight";
		};
		class USAF_airgpsmfd_dispmode_down: USAF_gpsButtons
		{
			idc=3344;
			x="(1/1024)*979";
			y="(1/768)*572";
			Text="";
			action="[-25, 50, 500] USAFll USAF_gpsSetHeight";
		};
		class USAF_airgpsmfd_autopilot: USAF_gpsButtons
		{
			idc=3345;
			x="(1/1024)*306";
			y="(1/768)*16";
			Text="";
			action="nul = [] spawn USAF_GPSAutoPilot";
		};
		class USAF_airgpsmfd_mfdtext_mark
		{
			idc=3350;
			type=0;
			style="0x00";
			text="MARK";
			font="Zeppelin32";
			sizeEx=0.029999999;
			colorBackground[]={0,0,0,0};
			colorText[]={0.1,1,0.1,0.80000001};
			x="(1/1024)*85";
			y="(1/768)*163";
			w="(1/1024)*60";
			h="(1/768)*40";
		};
		class USAF_airgpsmfd_mfdtext_exit: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3351;
			text="EXIT";
			y="(1/768)*572";
		};
		class USAF_airgpsmfd_mfdtext_center: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3352;
			text="CTR";
			y="(1/768)*469";
		};
		class USAF_airgpsmfd_mfdtext_clear: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3353;
			text="CLR";
			y="(1/768)*266";
		};
		class USAF_airgpsmfd_mfdtext_centergps: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3354;
			style=16;
			lineSpacing=1;
			text="CTR GPS";
			y="(1/768)*365";
		};
		class USAF_airgpsmfd_mfdtext_dirmode: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3355;
			style=16;
			lineSpacing=1;
			colorText[]={0.40000001,0.40000001,0.40000001,0.5};
			text="DIR MOD";
			x="(1/1024)*885";
			y="(1/768)*163";
		};
		class USAF_airgpsmfd_mfdtext_dispmode: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3356;
			style=16;
			lineSpacing=1;
			colorText[]={0.40000001,0.40000001,0.40000001,0.5};
			text="DISP MOD";
			x="(1/1024)*885";
			y="(1/768)*266";
		};
		class USAF_airgpsmfd_mfdtext_dispmode_up: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3357;
			style="0x00";
			colorText[]={0.1,1,0.1,0.80000001};
			text="( + )";
			x="(1/1024)*885";
			y="(1/768)*469";
		};
		class USAF_airgpsmfd_mfdtext_dispmode_rellvl: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3358;
			style="0x00";
			colorText[]={0.1,1,0.1,0.80000001};
			text="150";
			x="(1/1024)*885";
			y="(1/768)*520";
		};
		class USAF_airgpsmfd_mfdtext_dispmode_down: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3359;
			style="0x00";
			colorText[]={0.1,1,0.1,0.80000001};
			text="( - )";
			x="(1/1024)*885";
			y="(1/768)*572";
		};
		class USAF_airgpsmfd_mfdtext_autopilot: USAF_airgpsmfd_mfdtext_mark
		{
			idc=3360;
			style=16;
			lineSpacing=1;
			colorText[]={0.1,1,0.1,0.80000001};
			text="EBL A/P";
			x="(1/1024)*294";
			y="(1/768)*83";
		};
	};
};
class cfgIAWSweapons
{
	class default
	{
		scope=0;
		type="";
		uipicture="";
		length=0;
		width=0;
		diameter=0;
		weight=0;
		allowWingtip=0;
		usedBy[]={};
		selectFrom[]={};
	};
};
class cfgIAWSvehicles
{
	class default
	{
		nation="";
		maxPayload=0;
		weapons[]={};
		magazines[]={};
		proxies[]={};
		class proxy1
		{
			maxWeight=0;
			maxLength=0;
			maxDiameter=0;
			maxWingspan=0;
			types[]={};
			rackMagazine="";
			rackProxies[]={};
			isWingtip=0;
			limitTo[]={};
		};
	};
	class FRL_AH1W_TIR: default
	{
		nation="us";
		maxPayload=2812;
		weapons[]=
		{
			"M197",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"750Rnd_M197_AH1",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		proxies[]=
		{
			"proxy01",
			"proxy02",
			"proxy03",
			"proxy04",
			"proxy05",
			"proxy06",
			"proxy07",
			"proxy08",
			"proxy09",
			"proxy10",
			"proxy11",
			"proxy12",
			"proxy13",
			"proxy14",
			"proxy15",
			"proxy16",
			"proxy17",
			"proxy18",
			"proxy19",
			"proxy20",
			"proxy21",
			"proxy22"
		};
		class proxy01
		{
			maxWeight=86;
			maxLength=3.02;
			maxDiameter=0.127;
			maxWingspan=0.63;
			types[]=
			{
				"AA"
			};
			rackMagazines[]={};
			parentProxy="";
			isWingtip=1;
			limitTo[]={};
			guiNumber=1;
			listBox=0;
		};
		class proxy02: proxy01
		{
			guiNumber=14;
		};
		class proxy03: proxy01
		{
			maxWeight=266;
			maxLength=1.84;
			maxDiameter=0.43000001;
			maxWingspan=0.43000001;
			types[]=
			{
				"RK",
				"LAU"
			};
			parentProxy="";
			isWingtip=0;
			rackMagazines[]=
			{
				
				{
					"FRL_1Rnd_AGM114_2Rack",
					
					{
						"proxy15",
						"proxy17"
					}
				},
				
				{
					"FRL_1Rnd_AGM114_4Rack",
					
					{
						"proxy15",
						"proxy17",
						"proxy19",
						"proxy21"
					}
				}
			};
			limitTo[]=
			{
				"FRL_1Rnd_TOWQUAD",
				"FRL_1Rnd_TOWDUAL",
				"FRL_1Rnd_FFARPOD7",
				"FRL_1Rnd_FFARPOD19"
			};
			guiNumber=3;
			listBox=1;
		};
		class proxy04: proxy03
		{
			rackMagazines[]=
			{
				
				{
					"FRL_1Rnd_AGM114_2Rack",
					
					{
						"proxy16",
						"proxy18"
					}
				},
				
				{
					"FRL_1Rnd_AGM114_4Rack",
					
					{
						"proxy16",
						"proxy18",
						"proxy20",
						"proxy22"
					}
				}
			};
			guiNumber=12;
			listBox=3;
		};
		class proxy05: proxy03
		{
			rackMagazines[]=
			{
				
				{
					"FRL_1Rnd_AGM114_2Rack",
					
					{
						"proxy07",
						"proxy09"
					}
				},
				
				{
					"FRL_1Rnd_AGM114_4Rack",
					
					{
						"proxy07",
						"proxy09",
						"proxy11",
						"proxy13"
					}
				}
			};
			guiNumber=5;
			listBox=2;
		};
		class proxy06: proxy03
		{
			rackMagazines[]=
			{
				
				{
					"FRL_1Rnd_AGM114_2Rack",
					
					{
						"proxy08",
						"proxy10"
					}
				},
				
				{
					"FRL_1Rnd_AGM114_4Rack",
					
					{
						"proxy08",
						"proxy10",
						"proxy12",
						"proxy14"
					}
				}
			};
			guiNumber=10;
			listBox=4;
		};
		class proxy07: proxy01
		{
			maxWeight=49;
			maxLength=1.63;
			maxDiameter=0.178;
			maxWingspan=0.33000001;
			parentProxy="proxy05";
			isWingtip=0;
			limitTo[]={};
			types[]=
			{
				"AG"
			};
			guiNumber=18;
			listBox=0;
		};
		class proxy08: proxy07
		{
			parentProxy="proxy06";
			guiNumber=23;
			listBox=0;
		};
		class proxy09: proxy07
		{
			parentProxy="proxy05";
			guiNumber=17;
			listBox=0;
		};
		class proxy10: proxy07
		{
			parentProxy="proxy06";
			guiNumber=24;
			listBox=0;
		};
		class proxy11: proxy07
		{
			parentProxy="proxy05";
			guiNumber=30;
			listBox=0;
		};
		class proxy12: proxy07
		{
			parentProxy="proxy06";
			guiNumber=35;
			listBox=0;
		};
		class proxy13: proxy07
		{
			parentProxy="proxy05";
			guiNumber=29;
			listBox=0;
		};
		class proxy14: proxy07
		{
			parentProxy="proxy06";
			guiNumber=36;
			listBox=0;
		};
		class proxy15: proxy07
		{
			parentProxy="proxy03";
			guiNumber=16;
			listBox=0;
		};
		class proxy16: proxy07
		{
			parentProxy="proxy04";
			guiNumber=25;
			listBox=0;
		};
		class proxy17: proxy07
		{
			parentProxy="proxy03";
			guiNumber=15;
			listBox=0;
		};
		class proxy18: proxy07
		{
			parentProxy="proxy04";
			guiNumber=26;
			listBox=0;
		};
		class proxy19: proxy07
		{
			parentProxy="proxy03";
			guiNumber=28;
			listBox=0;
		};
		class proxy20: proxy07
		{
			parentProxy="proxy04";
			guiNumber=37;
			listBox=0;
		};
		class proxy21: proxy07
		{
			parentProxy="proxy03";
			guiNumber=27;
			listBox=0;
		};
		class proxy22: proxy07
		{
			parentProxy="proxy04";
			guiNumber=38;
			listBox=0;
		};
	};
	class GLT_Falcon_MR: default
	{
		nation="us";
		maxPayload=9276;
		weapons[]=
		{
			"FRL_M61A1",
			"CMFlareLauncher_FRL"
		};
		magazines[]=
		{
			"500Rnd_20mm_M61A1_FRL",
			"360Rnd_CMFlare_Chaff_Magazine"
		};
		proxies[]=
		{
			"proxy01",
			"proxy02",
			"proxy03",
			"proxy04",
			"proxy05",
			"proxy06",
			"proxy07",
			"proxy08",
			"proxy09",
			"proxy10"
		};
		class proxy01
		{
			maxWeight=162;
			maxLength=366;
			maxDiameter=17.799999;
			maxWingspan=64;
			types[]=
			{
				"AA"
			};
			rackMagazine="";
			rackProxies[]={};
			parentProxy="";
			isWingtip=1;
			guiNumber=1;
			limitTo[]={};
		};
		class proxy02: proxy01
		{
			guiNumber=17;
		};
		class proxy03: proxy01
		{
			maxWeight=925;
			maxLength=4.0999999;
			maxDiameter=0.458;
			maxWingspan=1.1;
			types[]=
			{
				"AA",
				"AG"
			};
			isWingtip=0;
			guiNumber=2;
		};
		class proxy04: proxy03
		{
			guiNumber=16;
		};
		class proxy05: proxy03
		{
			maxWeight=300;
			maxLength=4.6599998;
			maxDiameter=0.458;
			maxWingspan=1.1;
			types[]=
			{
				"AA",
				"AG"
			};
			guiNumber=3;
		};
		class proxy06: proxy05
		{
			guiNumber=15;
		};
		class proxy07: proxy05
		{
			guiNumber=4;
		};
		class proxy08: proxy05
		{
			guiNumber=14;
		};
		class proxy09: proxy05
		{
			guiNumber=5;
		};
		class proxy10: proxy05
		{
			guiNumber=13;
		};
	};
};
class cfgMods
{
	author="76561198085513606";
	timepacked="1439401658";
};
