#pragma once

namespace Features {
	namespace Online
	{
		extern int selectedPlayer;
		void TeleportToPlayer(Player player);
	}
	void deposit(long amount);
	void withdraw(long amount);
	void UpdateLoop();

	void spawnBumpercar();

	void spawnBike();

	void spawnModdedT20();

	void spawnTeddycar();

	void spawnBoatNTrailer();

	void spawnFlatBed();
	void spawnTruck();
	void spawnJetSki();
	void RampTruck();
	void BusTruck();
	void BufCustom();
	void Insurg();
	void Special1();
	extern bool doSpecial2;
	void Special2();
	void Special8();
	extern bool doSpecial8;
	extern bool doSpecial1;
	extern bool doInsurg;
	extern bool doBufCustom;
	extern bool doBusTruck;
	extern bool doRampTruck;
	extern bool doJetSki;
	extern bool doTruck;
	extern bool doFlatBed;
	extern bool doBoatNTrailer;
	extern bool doTeddycar;
	extern bool doModdedT20;
	extern bool doBike;
	extern bool fcbool;
	void Aimbot1(bool toggle);
	extern bool doTeddycar;
	// EXTERNNS
	extern bool doBoatNTrailer;
	extern bool FreezePositionGlitch;
	extern int TimePD;
	extern bool doBike;
	extern bool doModdedT20;
	extern int TimePD1;
	extern int TimePD2;
	extern int TimePD3;
	extern int TimePD4;
	extern bool Aimbot;
	extern int TimePD5;
	extern int TimePD6;
	extern int TimePD7;
	extern int TimePD8;
	extern bool MiscDisablePhone;
	//extern bool examplebool;
//	void example(bool toggle);

	extern bool Godmode;
	void godmode(bool toggle);
	extern bool ShootT;
	extern bool carInvisible;
	extern bool ShootR;
	extern bool ShootTankR;
	extern bool cargodmodebool;
	extern bool doBumpercar;
	extern bool vehicleSpawnNeededFunny;
	extern int vehicleToSpawnHash;
	extern bool NiggerCart;
	extern bool ShootBall;
	extern bool Ghostmode;
	void ghostmode(bool toggle);

	extern bool Superjump;
	void superjump(bool toggle);

	extern bool Neverwanted;
	void neverwanted(bool toggle);

	void drawNotification(char * msg);

	void maxvehicle();

	extern bool rainbowmenu;
	extern bool savenewdrop;
	void cashdrop(bool toggle);
	Vehicle SpawnVehicle(char * modelg, Vector3 coords, bool tpinto, float heading);
	void spawn_vehicle(char * toSpawn);
	extern int primaryred;
	extern int primarygreen;
	extern int primaryblue;
	extern int secondaryred;
	extern int secondarygreen;
	extern int secondaryblue;
	void Rainbowmenu(bool toggle);
	void SetRank(int rpvalue);
	extern bool isSelected;
	extern int Levels[8000];
	void Stealth120void(bool toggle);
	void Stealth250kvoid(bool toggle);
	extern bool stealth120k;
	extern bool stealth250K;
	void UnlimitedAmmo1();
	extern bool stealth10m;
	extern bool UnlimitedAmmo;
	void addFXOption(char * option, char * asset, char * FX);
	
}



