#pragma once
#include "stdafx.h"
char* CharKeyboard(char* windowName = "", int maxInput = 21, char* defaultText = "")
{
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(0, "", "", defaultText, "", "", "", maxInput);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return "";
	return GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT();
}
int NumberKeyboard() {
	GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(1, "", "", "", "", "", "", 10);
	while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0) WAIT(0);
	if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT()) return 0;
	return atof(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
}
void notifyleft(char* msg)
{
	UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(msg);
	UI::_DRAW_NOTIFICATION(2000, 1);
}
static char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3"
};
static char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY"
};
static char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT"
};
static char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",//
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",//ja feito
	"VALKYRIE2", "VOLATUS"
};
static char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO"
};
static char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2"
};
static char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",//ja feito
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2"
};
static char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5"
};
static char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA"
};
static char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON"
};
static char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER",
};
static char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARTZER", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON"
};
static char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2",
};
static char* Super1[] = {
	"XA21", "ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1" //ja feito
};
static char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2"
};
static char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};

static char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2"
};
static char* NewDlc1488[] = {
	"drafter", "emerus", "jugular", "krieger", "locust", "neo", "novak", "paragon", "rrocket", "s80", "thrax", "zorrusso", "caracara2","dynasty","gauntlet3","gauntlet4","hellion","impaler",
	"issi7",
	"nebula",
	"peyote2",
	"zion3",
};
static char* ARENAWARR[] = {
"BRUISER", "BRUISER2", "BRUISER3", "BRUTUS", "BRUTUS2", "BRUTUS3", "CERBERUS",
"CERBERUS2", "CERBERUS3", "CLIQUE", "DEATHBIKE", "DEATHBIKE2", "DEATHBIKE3", "DEVESTE",
"DEVIANT", "DOMINATOR4", "DOMINATOR5", "DOMINATOR6", "IMPALER", "IMPALER2", "IMPALER3", "IMPALER4",
"IMPERATOR", "IMPERATOR2", "IMPERATOR3", "ISSI4", "ISSI5", "ISSI6", "ITALIGTO", "MONSTER3",
"MONSTER4", "MONSTER5", "RCBANDITO", "SCARAB2", "SCARAB3", "SCHLAGEN", "SLAMVAN4", "SLAMVAN5", "SLAMVAN6", "TOROS", "TULIP", "VAMOS",
"ZR380", "ZR3802", "ZR3803"
};

Vector3 TPCoords;
void TPto(Vector3 Coords)
{
	int Handle = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Handle, false), Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
	}
	else
		ENTITY::SET_ENTITY_COORDS(Handle, Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
	//GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL("scr_rcbarry2");
	GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_clown_appears", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 2.0, false, false, false);
}

void wait() {
	WAIT(0);
}

void Vehiclespawnnoar()
{
	Vector3 Coords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.0, 0.00, 250.0);
	int Handle = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
		Handle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Handle, Coords.x, Coords.y, Coords.z, 0, 0, 1);
}

int selectedPlayer = 0;
int VehicleAlpha = 0;
int ParticleFactor = 0;
int MapZoom = 0;
void DoFX(char* asset, char *PTFX)
{
	STREAMING::REQUEST_NAMED_PTFX_ASSET(asset);
	//GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL(asset);
	GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(PTFX, PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0.0f, 0.0f, 0.0f, 0x60f0, ParticleFactor, 0, 0, 0);
}
void addFXOption(char *option, char *asset, char* FX)
{
	Menu::Option(option);
	if (Menu::Settings::currentOption == Menu::Settings::optionCount && Menu::Settings::selectPressed)
	{
		DoFX(asset, FX);
	}
}
float drawNotificationmenu221 = 0.205f;
void drawNotification2(char* msg)
{
	if (drawNotificationmenu221 == 0.845f)
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("STRING");
		UI::_ADD_TEXT_COMPONENT_STRING(msg);
		UI::_SET_NOTIFICATION_MESSAGE("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", true, 4, "___MENU", "");
		UI::_DRAW_NOTIFICATION(true, true);
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
		UI::_ADD_TEXT_COMPONENT_STRING(msg);
		UI::END_TEXT_COMMAND_PRINT(3000, 1);
	}
}
void checkPlayer(int i)
{
	Features::Online::selectedPlayer = i;
	Features::isSelected = true;
}

void MilitaryFlightsquad()
{
	int Handle = PLAYER::PLAYER_PED_ID();
	Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	Vector3 null; null.x = 0, null.y = 0; null.z = 0;
	Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
	Vector3 b; b.x = 0, b.y = 0, b.z = 0;
	int hash = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash1 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash2 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash3 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash4 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash5 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash6 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash7 = GAMEPLAY::GET_HASH_KEY("hydra");
	int hash8 = GAMEPLAY::GET_HASH_KEY("hydra");

	STREAMING::REQUEST_MODEL(hash);
	STREAMING::REQUEST_MODEL(hash2);
	STREAMING::REQUEST_MODEL(hash1);
	STREAMING::REQUEST_MODEL(hash3);
	STREAMING::REQUEST_MODEL(hash4);
	STREAMING::REQUEST_MODEL(hash5);
	STREAMING::REQUEST_MODEL(hash6);
	STREAMING::REQUEST_MODEL(hash7);
	STREAMING::REQUEST_MODEL(hash8);
	if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash2) && STREAMING::HAS_MODEL_LOADED(hash1) && STREAMING::HAS_MODEL_LOADED(hash3) && STREAMING::HAS_MODEL_LOADED(hash4) && STREAMING::HAS_MODEL_LOADED(hash5) && STREAMING::HAS_MODEL_LOADED(hash6) && STREAMING::HAS_MODEL_LOADED(hash7) && STREAMING::HAS_MODEL_LOADED(hash8))
	{
		int Object = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object1 = VEHICLE::CREATE_VEHICLE(hash1, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object2 = VEHICLE::CREATE_VEHICLE(hash3, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object3 = VEHICLE::CREATE_VEHICLE(hash4, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object4 = VEHICLE::CREATE_VEHICLE(hash5, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object5 = VEHICLE::CREATE_VEHICLE(hash6, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object6 = VEHICLE::CREATE_VEHICLE(hash7, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object7 = VEHICLE::CREATE_VEHICLE(hash8, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Object))
		{
			int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
			{

				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
				//	ENTITY::SET_ENTITY_VISIBLE2(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false);

				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, Vehicle, 0, a.x, a.y + 15.541162f, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object1, Vehicle, 0, a.x, a.y + 30.541162f, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object2, Vehicle, 0, a.x - 15.0f, a.y + 15.541162f, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object3, Vehicle, 0, a.x + 15.0f, a.y + 15.541162f, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object4, Vehicle, 0, a.x + 15.0f, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object5, Vehicle, 0, a.x + 30.0f, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object6, Vehicle, 0, a.x - 15.0f, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object7, Vehicle, 0, a.x - 30.0f, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				//	ENTITY::SET_ENTITY_VISIBLE2(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false);
			}
		}
	}
}
void newve()
{
	int Handle = PLAYER::PLAYER_PED_ID();
	Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	Vector3 null; null.x = 0, null.y = 0; null.z = 0;
	Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
	Vector3 b; b.x = 0, b.y = 0, b.z = 0;
	int hash = GAMEPLAY::GET_HASH_KEY("seashark");
	int hash1 = GAMEPLAY::GET_HASH_KEY("seashark");
	int hash2 = GAMEPLAY::GET_HASH_KEY("turismor");
	STREAMING::REQUEST_MODEL(hash);
	STREAMING::REQUEST_MODEL(hash1);
	STREAMING::REQUEST_MODEL(hash2);
	if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash1) && STREAMING::HAS_MODEL_LOADED(hash2))
	{
		int Object = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object1 = VEHICLE::CREATE_VEHICLE(hash1, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Object))
		{
			int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
			{
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object1, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object1, 255, 0, 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
				//	ENTITY::SET_ENTITY_VISIBLE2(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, Vehicle, 0, a.x, a.y + 1.37f, a.z + 0.59f, b.x - 14.33f, b.y + 541.20f, b.z - 1.42f, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object1, Vehicle, 0, a.x, a.y - 0.79f, a.z + 0.83f, b.x + 9.72f, b.y + 539.03f, b.z - 0.16f, 0, 1, 0, 0, 2, 1);
				//ENTITY::SET_ENTITY_VISIBLE2(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false);
			}
		}
	}
}
void batidriver()
{
	int Handle = PLAYER::PLAYER_PED_ID();
	Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	Vector3 null; null.x = 0, null.y = 0; null.z = 0;
	Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
	Vector3 b; b.x = 0, b.y = 0, b.z = 0;
	int hash = GAMEPLAY::GET_HASH_KEY("bati");
	int hash1 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash2 = GAMEPLAY::GET_HASH_KEY("bati");//drive veh
	int hash3 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash4 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash5 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash6 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash7 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash8 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash9 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash10 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash11 = GAMEPLAY::GET_HASH_KEY("bati");
	int hash12 = GAMEPLAY::GET_HASH_KEY("bati");
	STREAMING::REQUEST_MODEL(hash);
	STREAMING::REQUEST_MODEL(hash1);
	STREAMING::REQUEST_MODEL(hash2);
	STREAMING::REQUEST_MODEL(hash2);
	STREAMING::REQUEST_MODEL(hash3);
	STREAMING::REQUEST_MODEL(hash4);
	STREAMING::REQUEST_MODEL(hash5);
	STREAMING::REQUEST_MODEL(hash6);
	STREAMING::REQUEST_MODEL(hash7);
	STREAMING::REQUEST_MODEL(hash8);
	STREAMING::REQUEST_MODEL(hash9);
	STREAMING::REQUEST_MODEL(hash10);
	STREAMING::REQUEST_MODEL(hash11);
	STREAMING::REQUEST_MODEL(hash12);
	if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash2) && STREAMING::HAS_MODEL_LOADED(hash1) && STREAMING::HAS_MODEL_LOADED(hash3) && STREAMING::HAS_MODEL_LOADED(hash4) && STREAMING::HAS_MODEL_LOADED(hash5) && STREAMING::HAS_MODEL_LOADED(hash6) && STREAMING::HAS_MODEL_LOADED(hash7) && STREAMING::HAS_MODEL_LOADED(hash8) && STREAMING::HAS_MODEL_LOADED(hash9) && STREAMING::HAS_MODEL_LOADED(hash10) && STREAMING::HAS_MODEL_LOADED(hash11))
	{
		int Object = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object1 = VEHICLE::CREATE_VEHICLE(hash1, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object2 = VEHICLE::CREATE_VEHICLE(hash3, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object3 = VEHICLE::CREATE_VEHICLE(hash4, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object4 = VEHICLE::CREATE_VEHICLE(hash5, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object5 = VEHICLE::CREATE_VEHICLE(hash6, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object6 = VEHICLE::CREATE_VEHICLE(hash7, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object7 = VEHICLE::CREATE_VEHICLE(hash8, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object8 = VEHICLE::CREATE_VEHICLE(hash9, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object9 = VEHICLE::CREATE_VEHICLE(hash10, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object10 = VEHICLE::CREATE_VEHICLE(hash11, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object11 = VEHICLE::CREATE_VEHICLE(hash12, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Object))
		{
			int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, Vehicle, 0, a.x, a.y, a.z + 1.16f, b.x + 62.0f, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object1, Vehicle, 0, a.x + 2.5f, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object3, Vehicle, 0, a.x + 2.5f, a.y, a.z + 1.16f, b.x + 62.0f, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object4, Vehicle, 0, a.x + 0.5f, a.y + 0.5f, a.z + 2.27f, b.x + 50.0f, b.y - 70.0f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object5, Vehicle, 0, a.x + 1.95f, a.y + 0.5f, a.z + 2.27f, b.x + 50.0f, b.y + 70.0f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object6, Vehicle, 0, a.x + 1.24f, a.y + 0.8f, a.z + 5.0f, b.x + 90.0f, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object7, Vehicle, 0, a.x + 1.24f, a.y + 0.8f, a.z + 3.5f, b.x + 90.0f, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object8, Vehicle, 0, a.x + 1.24f, a.y + 0.8f, a.z + 6.0f, b.x - 15.0f, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object9, Vehicle, 0, a.x + 2.0f, a.y + 0.8f, a.z + 4.43f, b.x - 30.0f, b.y - 50.0f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object10, Vehicle, 0, a.x + 0.6f, a.y + 0.8f, a.z + 4.43f, b.x - 30.0f, b.y + 50.0f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object2, Vehicle, 0, a.x, a.y + 2.1f, a.z + 3.7f, b.x - 10.0f, b.y + 12.8f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object11, Vehicle, 0, a.x + 2.8f, a.y + 1.9f, a.z + 3.7f, b.x - 10.0f, b.y - 13.6f, b.z, 0, 1, 0, 0, 2, 1);
			}
		}
	}
}
void SnowScooter()
{
	int Handle = PLAYER::PLAYER_PED_ID();
	Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	Vector3 null; null.x = 0, null.y = 0; null.z = 0;
	Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
	Vector3 b; b.x = 0, b.y = 0, b.z = 0;
	int hash = GAMEPLAY::GET_HASH_KEY("seashark");
	int hash2 = GAMEPLAY::GET_HASH_KEY("sanchez");
	STREAMING::REQUEST_MODEL(hash);
	STREAMING::REQUEST_MODEL(hash2);
	if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash2))
	{
		int Object = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Object))
		{
			int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
			{
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object, 255, 0, 0);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object, 255, 0, 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
				//ENTITY::SET_ENTITY_VISIBLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, Vehicle, 0, a.x - 0.02f, a.y - 0.08f, a.z - 0.36f, b.x - 0.21f, b.y + 1.83f, b.z - 0.21f, 0, 1, 0, 0, 2, 1);
				//	ENTITY::SET_ENTITY_VISIBLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false);
			}
		}
	}
}
void vehtest()
{

	int Handle = PLAYER::PLAYER_PED_ID();
	Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
	Vector3 null; null.x = 0, null.y = 0; null.z = 0;
	Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
	Vector3 b; b.x = 0, b.y = 0, b.z = 0;
	int hash = GAMEPLAY::GET_HASH_KEY("dune2");
	int hash2 = GAMEPLAY::GET_HASH_KEY("t20");
	int hash3 = GAMEPLAY::GET_HASH_KEY("dune2");
	int hash4 = GAMEPLAY::GET_HASH_KEY("dune2");
	int hash5 = GAMEPLAY::GET_HASH_KEY("monster");
	int hash6 = GAMEPLAY::GET_HASH_KEY("monster");


	STREAMING::REQUEST_MODEL(hash);
	STREAMING::REQUEST_MODEL(hash2);
	STREAMING::REQUEST_MODEL(hash3);
	STREAMING::REQUEST_MODEL(hash4);
	STREAMING::REQUEST_MODEL(hash5);
	STREAMING::REQUEST_MODEL(hash6);


	if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash2) && STREAMING::HAS_MODEL_LOADED(hash3) && STREAMING::HAS_MODEL_LOADED(hash4) && STREAMING::HAS_MODEL_LOADED(hash5) && STREAMING::HAS_MODEL_LOADED(hash6))
	{
		int Object1 = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object2 = VEHICLE::CREATE_VEHICLE(hash3, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object3 = VEHICLE::CREATE_VEHICLE(hash4, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object4 = VEHICLE::CREATE_VEHICLE(hash5, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
		int Object5 = VEHICLE::CREATE_VEHICLE(hash6, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);



		if (ENTITY::DOES_ENTITY_EXIST(Object1) && ENTITY::DOES_ENTITY_EXIST(Object2) && ENTITY::DOES_ENTITY_EXIST(Object3) && ENTITY::DOES_ENTITY_EXIST(Object4) && ENTITY::DOES_ENTITY_EXIST(Object5))
		{
			int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
				ENTITY::SET_ENTITY_VISIBLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false,1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object1, Vehicle, 0, a.x, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object2, Vehicle, 0, a.x - 0.1f, a.y, a.z, b.x, b.y + 41.1f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object3, Vehicle, 0, a.x + 0.1f, a.y, a.z, b.x, b.y - 41.4f, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object4, Vehicle, 0, a.x + 1.41f, a.y, a.z - 0.2f, b.x - 179.99f, b.y, b.z, 0, 1, 0, 0, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object5, Vehicle, 0, a.x - 1.41f, a.y, a.z - 0.2f, b.x - 179.99f, b.y, b.z, 0, 1, 0, 0, 2, 1);

				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object1, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object1, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object4, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object4, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object5, 255, 255, 255);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object5, 255, 255, 255);
			}

		}

	}
}
int Deaths_ = 0;
int playertissme = 0;
int Editplayerdrive = 0;
int WalkingPlayer = 0;
int spawnedped;

int Kills_ = 0;
void main()
{

	while (true) {
		Menu::Checks::Controlls();
		Features::UpdateLoop();
		switch (Menu::Settings::currentMenu) 
		{

		case mainmenu:// main menu
		{
			Menu::Title("MEANCE MENU");
			Menu::MenuOption("Player Options", self);
			Menu::MenuOption("Player List", Networkssshit);
			Menu::MenuOption("~q~RECOVERY*", Developer);//
			Menu::MenuOption("Stealth Money", StealthmONEY);
			Menu::MenuOption("Spawn Vehicle", SpawnVehicle);
			Menu::MenuOption("Vehicle Options", vehicleOptions);
			Menu::MenuOption("Weapons Options", WeaponsOptions);
			Menu::MenuOption("Teleport Options", teleportmyplayers);
			Menu::MenuOption("Miscellaneous", Miscellaneous);
			Menu::MenuOption("Settings", settings);
		}
		break;
#pragma endregion
#pragma region 
		case Networkssshit:
		{
			//DRAW_TEXTURE2("spcityraces", "citycircuit", Menu::Settings::menuX, 0.2175f, 0.23f, 0.085f, 0, 255, 255, 255, 255);
			Menu::Title("Player List");//TITULO
			//Menu::PremiumTitle("Player List");//SUB TITULO
			for (int i = 0; i < 32; ++i)
			{
				char* name = PLAYER::GET_PLAYER_NAME(i);
				if (strcmp("**Invalid**", name) != 0)
				{
					Menu::MenuOption(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i)), onlinemenu_selected) ? checkPlayer(i) : NULL;
				}

			}
		}break;
#pragma endregion
#pragma region 
		case onlinemenu_selected:
		{
			//DRAW_TEXTURE2("spcityraces", "citycircuit", Menu::Settings::menuX, 0.2175f, 0.23f, 0.085f, 0, 255, 255, 255, 255);
			Menu::Title("Player List");//TITULO

			if (Menu::Option("Freeze Modder"))
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
				Features::FreezePositionGlitch = true;
				//drawNotification1("~b~Note~w~: ~g~the selected player is now frozen without any movement");
			}
			if (Menu::Option("Non-Host Kick"))
			{
				uint64_t NonHostkick[4] = { 423635655, Features::Online::selectedPlayer, 0, 0 };//1.47
				SCRIPT::TRIGGER_SCRIPT_EVENT(1, NonHostkick, 53, 1 << Features::Online::selectedPlayer);
			}
			if (Menu::Option("Pogo Player Enemy"))
			{
				int hash = GAMEPLAY::GET_HASH_KEY("U_M_Y_Pogo_01");
				Vector3 mycoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true);
				STREAMING::REQUEST_MODEL(hash);
				if (STREAMING::HAS_MODEL_LOADED(hash))
				{
					spawnedped = PED::CREATE_PED(21, hash, mycoords.x, mycoords.y, mycoords.z, 29, 0.5f, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hash);
					PED::SET_PED_COMBAT_ABILITY(spawnedped, 100);
					AI::TASK_COMBAT_PED(spawnedped, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 0, 16);
					PED::SET_PED_CAN_SWITCH_WEAPON(spawnedped, false);
					PED::SET_PED_CAN_RAGDOLL(spawnedped, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(spawnedped, 0);
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(spawnedped, false);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(spawnedped, 0xB1CA77B1, 9999, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(spawnedped, true);
				}
			}//
			if (Menu::Option("Call airstrike V2"))
			{
				Vector3 AirstrikeCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), false);
				Vector3 TargetCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-40, 40), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-40, 40), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(30, 50));
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(TargetCoords.x, TargetCoords.y, TargetCoords.z, AirstrikeCoords.x, AirstrikeCoords.y, AirstrikeCoords.z, 1000, false, (0xB1CA77B1), 0, false, false, 150); break;

			}
		} break;
#pragma region Developer
		case StealthmONEY:
		{
			Menu::Title("Stealth Money");
			
		}break;

#pragma region Developer
		case Developer:
		{
			Menu::Title("~q~RECOVERY*");

			if (Menu::Option("Rank Set 88")) {
				Features::SetRank(88);
			}
			if (Menu::Option("Rank Set 100")) {
				Features::SetRank(100);
			}
			if (Menu::Option("Rank Set 120")) {
				Features::SetRank(120);
			}
			if (Menu::Option("Rank Set 200")) {
				Features::SetRank(200);
			}
			if (Menu::Option("Rank Set 420")) {
				Features::SetRank(420);
			}
			if (Menu::Option("Rank Set 500")) {
				Features::SetRank(500);
			}
			if (Menu::Option("Rank Set 1000")) {
				Features::SetRank(1000);
			}
			if (Menu::Option("Rank Set 1337")) {
				Features::SetRank(1337);
			}
			if (Menu::Option("Rank Set 8000")) {
				Features::SetRank(8000);
			}
		}break;
#pragma region Miscellaneous
		case Miscellaneous:
		{
			Menu::Title("Miscellaneous");			
			Menu::MenuOption("Particle Options", ParticleOprions);
			Menu::BoolOption26("Disable Phone", Features::MiscDisablePhone);  // Tutorial How to Add a Toggle head over to Features.cpp ! 
			if(Menu::Int("Radar Zoom", MapZoom, 0, 1400))
			{
				UI::SET_RADAR_ZOOM(MapZoom);
			}
			if (Menu::Option("350 snacks etc...||")) {
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_YUM_SNACKS"), 350, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_HEALTH_SNACKS"), 350, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_EPIC_SNACKS"), 350, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_ORANGE_BOUGHT"), 350, 1);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CIGARETTES_BOUGHT"), 350, 1);
			}
		}break;
#pragma region Weapons photo
		case ParticleOprions:
		{
			Menu::Title("FX");
			Menu::Int("FX Scale", ParticleFactor, 0, 2000);
			addFXOption("Firework Burst", "proj_xmas_firework", "scr_firework_xmas_burst_rgw");
			addFXOption("Firework Trailburst", "scr_indep_fireworks", "scr_indep_firework_trailburst");
			addFXOption("Firework Shotburst", "scr_indep_fireworks", "scr_indep_firework_shotburst");
			addFXOption("Firework Fountain", "scr_indep_fireworks", "scr_indep_firework_fountain");
			addFXOption("Firework Starburst", "scr_indep_fireworks", "scr_indep_firework_starburst");
			addFXOption("Wheel Burnout", "scr_carsteal4", "scr_carsteal4_wheel_burnout");
			addFXOption("Truck Crash", "scr_fbi4", "scr_fbi4_trucks_crash");
			addFXOption("Clown Appears", "scr_rcbarry2", "scr_clown_appears");
			addFXOption("Lighter Sparks", "scr_rcbarry1", "scr_alien_disintegrate");
			addFXOption("Water Splash", "scr_fbi5a", "scr_fbi5_ped_water_splash");
			addFXOption("Trailer Splash", "scr_trevor1", "scr_trev1_trailer_splash");
			addFXOption("Blood Impact", "scr_solomon3", "scr_trev4_747_blood_impact");
			addFXOption("Car Impact", "scr_exile2", "scr_ex2_car_impact");
			addFXOption("Muzzle Flash", "scr_carsteal4", "scr_carsteal5_car_muzzle_flash");
			addFXOption("Tyre Spiked", "scr_carsteal3", "scr_carsteal4_tyre_spiked");
			addFXOption("Pipe Smoke", "scr_familyscenem", "scr_meth_pipe_smoke");
			addFXOption("Alien Disintegrate", "scr_rcbarry1", "scr_alien_disintegrate");
			addFXOption("Alien Teleport", "scr_rcbarry1", "scr_alien_teleport");
			addFXOption("Breach Smoke", "scr_agencyheist", "scr_fbi_dd_breach_smoke");
			addFXOption("Atrium Glass", "scr_agencyheist", "scr_agency_atrium_glass");
			addFXOption("Door Hvy Trig", "scr_agencyheist", "scr_agency3a_door_hvy_trig");
			addFXOption("FBI Exp Building", "scr_agencyheist", "scr_fbi_exp_building");
			addFXOption("FBI Mop Drips", "scr_agencyheist", "scr_fbi_mop_drips");
			addFXOption("Agency Linger Smoke", "scr_agencyheistb", "scr_agency3b_linger_smoke");
			addFXOption("Agency Atrium Silt", "scr_agencyheistb", "scr_agency_atrium_silt");
			addFXOption("Agency Heli Expl", "scr_agencyheistb", "scr_agency3b_heli_expl");
			addFXOption("Heli Exp Trail", "scr_agencyheistb", "scr_agency3b_heli_exp_trail");
			addFXOption("Wood Splinter", "scr_agencyheistb", "scr_agency3b_wood_splinter");
			addFXOption("Bong Smoke", "scr_mp_house", "scr_sh_bong_smoke");
			addFXOption("Lighter Sparks", "scr_mp_house", "scr_sh_lighter_sparks");
			addFXOption("Dust Impact", "scr_exile1", "scr_ex1_dust_impact");
			addFXOption("Plane Exp", "scr_exile1", "scr_ex1_plane_exp");
			addFXOption("Cargo Engine Burst", "scr_exile1", "scr_ex1_cargo_engine_burst");
			addFXOption("Michael Pool Splash", "cut_family5", "cs_fam5_michael_pool_splash");
			addFXOption("Blood Headshot", "scr_family1", "scr_fam1_blood_headshot");
			addFXOption("Cig Exhale Nose", "scr_family1", "cs_cig_exhale_nose");
			addFXOption("Trailer Parks", "scr_family4", "scr_fam4_trailer_sparks");
			addFXOption("Electric SWparks", "scr_fbi3", "scr_fbi3_elec_sparks");
			addFXOption("Dust Cloud", "scr_mp_creator", "scr_mp_dust_cloud");
			addFXOption("Josh Light Explosion", "scr_josh3", "scr_josh3_light_explosion");
			addFXOption("Exp Debris", "scr_josh3", "scr_josh3_exp_debris");
			addFXOption("Josh Explosion", "scr_josh3", "scr_josh3_explosion");
			addFXOption("Water Exp", "scr_oddjobtraffickingair", "scr_ojdg4_water_exp");
			addFXOption("Boat Exp", "scr_oddjobtraffickingair", "scr_ojdg4_boat_exp");
			addFXOption("Trailer Splash", "scr_trevor1", "scr_trev1_trailer_splash");
			addFXOption("Trailer Boosh", "scr_trevor1", "scr_trev1_trailer_boosh");
			addFXOption("Meth Dust Settle", "scr_trevor1", "ent_ray_meth_dust_settle");
			addFXOption("Blade Blood", "scr_trevor2", "scr_rotor_blade_blood");
			addFXOption("Bus Impact", "scr_oddjobbusassassin", "scr_ojbusass_bus_impact");
			addFXOption("Clown Death", "scr_rcbarry2", "scr_clown_death");
			addFXOption("Tyre Spiked", "scr_carsteal3", "scr_carsteal4_tyre_spiked");
		} break;
#pragma region Weapons
		case WeaponsOptions:
		{
			Menu::Title("Weapons");
			if (Menu::Option("Give All Weapons"))
			{
				uint Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
				for (int i = 0; i < (sizeof(Weapons) / 4); i++)
				{
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Weapons[i], 9999, 1);
				}
			}
			Menu::BoolOption26("Unlimited Ammo", Features::UnlimitedAmmo);
		} break;
#pragma region Vehicle
		case vehicleOptions:
		{
			Menu::Title("Vehicle Options");
			if (Menu::Option("Fix Car ~g~")) {
				uint Vehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
				VEHICLE::SET_VEHICLE_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
			}
			if (Menu::Option("Paint Vehicle"))
			{
				int VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VehID);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(VehID))
				{
					VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(VehID, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
					VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(VehID, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
				}
			}
			if (Menu::Option("Max Upgrade Car"))
			{
				Vehicle vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				VEHICLE::SET_VEHICLE_MOD_KIT(vehicle, 0);
				for (int i = 0; i < 50; i++)
				{
					VEHICLE::SET_VEHICLE_MOD(vehicle, i, VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, i) - 1, false);
					//VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehicle, 75, 0, 255);
					//VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehicle, 75, 0, 255);
					VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 0, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 1, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 2, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 3, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 4, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 5, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 6, 1);
					VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(vehicle, 7, 1);
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(vehicle, "WEB HACKER");
			}
			if (Menu::Int("Vehicle Alpha", VehicleAlpha, 0, 255))
			{
				ENTITY::SET_ENTITY_ALPHA(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), VehicleAlpha, 0);
			}
			if (Menu::Option("Open Doors"))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 3, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 6, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 7, true, false);
			}
			if (Menu::Option("Close Doors"))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true);
			}
			if (Menu::Option("Dirty Vehicle"))//vehicle
			{
				Player playerPed = PLAYER::PLAYER_PED_ID();
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(veh, 15.0f);					
			}
			if (Menu::Option("Wash & Clean Vehicle"))//vehicle
			{
				Player playerPed = PLAYER::PLAYER_PED_ID();
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(veh, 0.0f);

			}
			if (Menu::Option("Make Vehicle Sellable If Modded"))//vehicle
			{
				DECORATOR::DECOR_SET_INT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), "PV_Slot", 2);
			}
		} break;
#pragma region 
		case teleportmyplayers:
		{
			Menu::Title("Teleport Options");
			if (Menu::Option("Teleport To Marker"))
			{
				teleport_to_marker();
			}
			Menu::Break("---Aiports Teleport---");
			if (Menu::Option("Los Santos Airport"))
			{
				Vector3 Coords;
				Coords.x = -1070.906250; Coords.y = -2972.122803; Coords.z = 13.773568;
				TPto(Coords);
			}
			if (Menu::Option("Flight School"))
			{
				Vector3 Coords;
				Coords.x = -1142.084229; Coords.y = -2697.341553; Coords.z = 13.324973;
				TPto(Coords);
			}
			if (Menu::Option("Sandy Shores"))
			{
				Vector3 Coords;
				Coords.x = 1682.196411; Coords.y = 3279.987793; Coords.z = 40, 647972;
				TPto(Coords);
			}
			if (Menu::Option("McKenzie Airfield"))
			{
				Vector3 Coords;
				Coords.x = 2124.625732; Coords.y = 4805.270020; Coords.z = 40.479958;
				TPto(Coords);
			}
			if (Menu::Option("Fort Zancudo"))
			{
				Vector3 Coords;
				Coords.x = -2446.711182; Coords.y = 3142.811035; Coords.z = 32.194775;
				TPto(Coords);
			}
			if (Menu::Option("Fort Zancudo Front"))
			{
				Vector3 Coords;
				Coords.x = -1563.743286; Coords.y = 2769.382080; Coords.z = 16.819347;
				TPto(Coords);
			}
			if (Menu::Option("LS Airport Hangar"))
			{
				Vector3 Coords;
				Coords.x = -978.708496; Coords.y = -3001.840820; Coords.z = 13.317889;
				TPto(Coords);
			}
			Menu::Break("---Cinemas Teleport---");
			if (Menu::Option("Vinewood Cinema"))
			{
				Vector3 Coords;
				Coords.x = 300.407776; Coords.y = 193.051071; Coords.z = 103.590019;
				TPto(Coords);
			}
			if (Menu::Option("Ten Cent"))
			{
				Vector3 Coords;
				Coords.x = 401.796814; Coords.y = -713.924988; Coords.z = 28.569710;
				TPto(Coords);
			}
			if (Menu::Option("Morningwood Cinema"))
			{
				Vector3 Coords;
				Coords.x = -1410.071167; Coords.y = -199.047531; Coords.z = 46.502586;
				TPto(Coords);
			}
			Menu::Break("---Shops Teleport---");
			if (Menu::Option("Mask Shop"))
			{
				Vector3 Coords;
				Coords.x = -1338.16; Coords.y = -1278.11; Coords.z = 4.87;
				TPto(Coords);
			}
			if (Menu::Option("LS Customs")) {
				Vector3 Coords;
				Coords.x = -373.01; Coords.y = -124.91; Coords.z = 38.31;
				TPto(Coords);
			}
			if (Menu::Option("Ammunation")) {
				Vector3 Coords;
				Coords.x = 247.3652; Coords.y = -45.8777; Coords.z = 69.9411;
				TPto(Coords);
			}
			if (Menu::Option("Clothes Store")) {
				Vector3 Coords;
				Coords.x = -718.91; Coords.y = -158.16; Coords.z = 37.00;
				TPto(Coords);
			}
			if (Menu::Option("Barber Shop")) {
				Vector3 Coords;
				Coords.x = -1291.355; Coords.y = -1116.933; Coords.z = 6.6302;
				TPto(Coords);
			}
			if (Menu::Option("Strip Club DJ Booth")) {
				Vector3 Coords;
				Coords.x = 126.135; Coords.y = -1278.583; Coords.z = 29.270;
				TPto(Coords);
			}
			Menu::Break("---Glitchs Teleport---");
			if (Menu::Option("Under the bridge"))
			{
				Vector3 Coords;
				Coords.x = -721.6599; Coords.y = -1000.6510; Coords.z = 23.5455;
				TPto(Coords);
			}
			if (Menu::Option("FIB Roof"))
			{
				Vector3 Coords;
				Coords.x = 135.9541; Coords.y = -749.8984; Coords.z = 258.1520;
				TPto(Coords);
			}
			if (Menu::Option("City Wall"))
			{
				Vector3 Coords;
				Coords.x = -254.9432; Coords.y = -147.3534; Coords.z = 42.7314;
				TPto(Coords);
			}
			if (Menu::Option("Mechanic"))
			{
				Vector3 Coords;
				Coords.x = 546.0365; Coords.y = -183.3675; Coords.z = 54.4982;
				TPto(Coords);
			}
			if (Menu::Option("400k Apartment"))
			{
				Vector3 Coords;
				Coords.x = -785.4869; Coords.y = 314.7161; Coords.z = 90.2189;
				TPto(Coords);
			}
			Menu::Break("---Popular Teleport---");
			if (Menu::Option("Mount Chiliad"))
			{
				Vector3 Coords;
				Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
				TPto(Coords);
			}
			if (Menu::Option("Maze Bank")) {
				Vector3 Coords;
				Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
				TPto(Coords);
			}
			if (Menu::Option("Military Base")) {
				Vector3 Coords;
				Coords.x = -2012.8470f; Coords.y = 2956.5270f; Coords.z = 32.8101f;
				TPto(Coords);
			}
			if (Menu::Option("Zancudo Tower")) {
				Vector3 Coords;
				Coords.x = -2356.0940; Coords.y = 3248.645; Coords.z = 101.4505;
				TPto(Coords);
			}
			if (Menu::Option("Airport")) {
				Vector3 Coords;
				Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
				TPto(Coords);
			}
			if (Menu::Option("Waterfall")) {
				Vector3 Coords;
				Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
				TPto(Coords);
			}
			if (Menu::Option("FBI")) {
				Vector3 Coords;
				Coords.x = 135.5220f; Coords.y = -749.0003f; Coords.z = 260.0000f;
				TPto(Coords);
			}
			if (Menu::Option("Human Labs")) {
				Vector3 Coords;
				Coords.x = 3617.231f; Coords.y = 3739.871f; Coords.z = 28.6901f;
				TPto(Coords);
			}
			if (Menu::Option("MMI")) {
				Vector3 Coords;
				Coords.x = -222.1977; Coords.y = -1185.8500; Coords.z = 23.0294;
				TPto(Coords);
			}
			if (Menu::Option("Sandy Shores Airfield")) {
				Vector3 Coords;
				Coords.x = 1741.4960f; Coords.y = 3269.2570f; Coords.z = 41.6014f;
				TPto(Coords);
			}
		}break;
#pragma region Self Menu
		case self:
		{
			Menu::Title("Player Options");
			Menu::BoolOption("Godmode", Features::Godmode, [] { Features::godmode(Features::Godmode); });  // Tutorial How to Add a Toggle head over to Features.cpp ! 
			Menu::BoolOption("Never Wanted", Features::Neverwanted, [] { Features::neverwanted(Features::Neverwanted); });
			Menu::BoolOption("Invisible", Features::Ghostmode, [] { Features::ghostmode(Features::Ghostmode); });
			Menu::Break("---Other Stuff---");
			Menu::BoolOption("Super Jump", Features::Superjump, [] { Features::superjump(Features::Superjump); });
			if (Menu::Option("Heal Player"))
			{
				BOOL bPlayerExists = ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID());
				Player player = PLAYER::PLAYER_ID();
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				ENTITY::SET_ENTITY_HEALTH(playerPed, ENTITY::GET_ENTITY_MAX_HEALTH(playerPed));
				PED::ADD_ARMOUR_TO_PED(playerPed, PLAYER::GET_PLAYER_MAX_ARMOUR(player) - PED::GET_PED_ARMOUR(playerPed));
				if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
				{
					Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
					if (ENTITY::DOES_ENTITY_EXIST(playerVeh) && !ENTITY::IS_ENTITY_DEAD(playerVeh))
						VEHICLE::SET_VEHICLE_FIXED(playerVeh);
				}
			}
			if (Menu::Option("~r~Kill Self")) { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0); }
			Menu::Option("Clean Player", [] { int Ped = PLAYER::PLAYER_PED_ID(); PED::CLEAR_PED_BLOOD_DAMAGE(Ped); PED::RESET_PED_VISIBLE_DAMAGE(Ped); });
			if (Menu::Option("Random Components"))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), true);
			}
		/*	if (Menu::Option("Death Off The Radar"))
			{
				PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 0);
				notifyMap("You Are Off The Radar, Click 'Z' Twice!", 0);
			//	Features::drawNotifyAboveMinimap("CHAR_FILMNOIR", "Off The Radar", "You are off the radar, click < Z > 2 times to be set");

				//Features::drawNotification("You Are Off The Radar, Click 'Z' Twice");
			}*/
		}
		break;
		/*
		case Vans:
			Menu::Title("Vans");
			for (auto car : Vans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case dlcGunRuning://ARENAWARR
		*/
#pragma region Spawn vehicle
		case SpawnVehicle:
		{
			Menu::Title("Modded Vehicles");

			/*if (Menu::Option("Bumper Buggy"))
			{
				Features::spawnBumpercar();
			}
			if (Menu::Option("Modded Carbon RS"))
			{
				Features::spawnBike();
			}
			if (Menu::Option("Modded T20"))
			{
				Features::spawnModdedT20();
			}
			if (Menu::Option("Roller Coaster Car"))
			{
				Features::spawnTeddycar();
			}
			if (Menu::Option("Boat And Trailer"))
			{
				Features::spawnBoatNTrailer();
			}
			if (Menu::Option("FlatBed And T20"))
			{
				Features::spawnFlatBed();
			}
			if (Menu::Option("Guardian And ATV"))
			{
				Features::spawnTruck();
			}
			if (Menu::Option("JetSki And Trailer"))
			{
				Features::spawnJetSki();
			}
			if (Menu::Option("Ramp Truck"))
			{
				Features::RampTruck();
			}
			if (Menu::Option("Monster Swat"))
			{
				Features::BusTruck();
			}
			if (Menu::Option("Buffulo Police"))
			{
				Features::BufCustom();
			}
			if (Menu::Option("Insurgent 3"))
			{
				Features::Insurg();
			}
			if (Menu::Option("Special"))
			{
				Features::Special1();
			}
			if (Menu::Option("special 2"))
			{
				Features::Special2();
			}
			if (Menu::Option("Train"))
			{
				Features::Special8();
			}
			if (Menu::Option("6x6 War RC"))
			{
				vehtest();
			}
			if (Menu::Option("Speeder Prototype"))
			{
				newve();
			}
			if (Menu::Option("Military Flightsquad"))
			{
				MilitaryFlightsquad();
			}
			if (Menu::Option("Robot Bike"))
			{
				batidriver();
			}
			if (Menu::Option("Snow Scooter"))
			{
				SnowScooter();
			}
			if (Menu::Option("BIG RIG"))
			{
				int hash = GAMEPLAY::GET_HASH_KEY("flatbed");
				STREAMING::REQUEST_MODEL(hash);
				Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				uint Me = PLAYER::PLAYER_PED_ID();
				int playerVeh = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Me), 1, 0);

				VEHICLE::SET_VEHICLE_COLOURS(playerVeh, 120, 120);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(playerVeh, "BIG RIG");
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(playerVeh, 1);
				STREAMING::REQUEST_MODEL(0x8DA1C0E);
				STREAMING::REQUEST_MODEL(0xB32ADCA8);
				Object spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, 0, -0.690002, 2.089998, 0, 0, 90, false, false, true, false, 0, true); //1
				ENTITY::SET_ENTITY_COLLISION(spawnedOrange, TRUE, TRUE);
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, 0, -6, 2.08998, 0, -22, 90, false, false, true, false, 0, true); //2
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, 0, -3.35, 2.500000, 0, -11, 90, false, false, true, false, 0, true); //3
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -0.5, -3.35, 3, 0, -11, 90, false, false, true, false, 0, true); //4
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -1, -3.35, 3.5, 0, -11, 90, false, false, true, false, 0, true); //5
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -1.5, -3.35, 4.25, 43, -11, 90, false, false, true, false, 0, true); //6
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -2, -3.35, 5, 23.25, -11, 90, false, false, true, false, 0, true); //7
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -2.5, -3.35, 5.75, 31.25, -11, 90, false, false, true, false, 0, true); //8
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -3, -3.35, 6.25, 18.5, -11, 90, false, false, true, false, 0, true); //9
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -3.5, -3.35, 6.5, 18.5, -11, 90, false, false, true, false, 0, true); //11
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -4.5, -3.35, 7, 18.5, -11, 90, false, false, true, false, 0, true); //12
				spawnedOrange = OBJECT::CREATE_OBJECT(0x8DA1C0E, 0, 0, 0, TRUE, FALSE, FALSE);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(spawnedOrange, playerVeh, 0, -6.25, -3.35, 7.5, 9.25, -11, 90, false, false, true, false, 0, true); //13
			}*/
			Menu::MenuOption("Super Car", SUPERCAR22);
			Menu::MenuOption("Gun Running", dlcGunRuning);
			Menu::MenuOption("Smuggler Run", SmugglerdlcRun);
			Menu::MenuOption("dlc 1.44", dlc1444);
			Menu::MenuOption("dlc 1.48", dlc1448);
			Menu::MenuOption("Arena WAR", ARENAWAR);
			Menu::MenuOption("Sports", Sports);
			Menu::MenuOption("Sport Classic", SportClassic);
			Menu::MenuOption("Offroad", Offroad);
			Menu::MenuOption("Sedans", Sedans);
			Menu::MenuOption("Coupes", Coupes);
			Menu::MenuOption("Muscle", Muscle);//ja feito
			Menu::MenuOption("Boats", Boats);
			Menu::MenuOption("Commercial", Commercial);
			Menu::MenuOption("Compacts", Compacts);
			Menu::MenuOption("Cycles", Cycles);
			Menu::MenuOption("Emergency", Emergency);
			Menu::MenuOption("Helicopters", Helicopters);//ja feito
			Menu::MenuOption("Industrial", Industrial);
			Menu::MenuOption("Military", Military);
			Menu::MenuOption("Motorcycles", Motorcycles);
			Menu::MenuOption("Planes", Planes);
			Menu::MenuOption("Service", Service);
			Menu::MenuOption("SUV", SUV);
			Menu::MenuOption("Trailer", Trailer);
			Menu::MenuOption("Trains", Trains);
			Menu::MenuOption("Utility", Utility);
			Menu::MenuOption("Vans", Vans);
		} break;
		case ARENAWAR:
			Menu::Title("Arena WAR");
			for (auto car : ARENAWARR) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case dlc1448:
			Menu::Title("1.48");
			for (auto car : NewDlc1488) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case dlc1444:
		{
			Menu::Title("dlc 1.44");
			if (Menu::Option11("Menacer", 1, "candc_battle", "menacer"))
			{
				Features::spawn_vehicle("menacer");
			}
			if (Menu::Option11("mule", 2, "candc_battle", "mule4"))
			{
				Features::spawn_vehicle("mule4");
			}
			if (Menu::Option11("new oppressor", 3, "candc_battle", "oppressor2"))
			{
				Features::spawn_vehicle("oppressor2");
			}
			if (Menu::Option11("pounder2", 4, "candc_battle", "pounder2"))
			{
				Features::spawn_vehicle("pounder2");
			}
			if (Menu::Option11("scramjet", 5, "candc_battle", "scramjet"))
			{
				Features::spawn_vehicle("scramjet");
			}
			if (Menu::Option11("strike force", 6, "candc_battle", "strikeforce"))
			{
				Features::spawn_vehicle("strikeforce");
			}
			if (Menu::Option11("blimp3", 7, "elt_dlc_battle", "blimp3"))
			{
				Features::spawn_vehicle("blimp3");
			}
			if (Menu::Option11("freecrawler", 8, "lgm_dlc_battle", "freecrawler"))
			{
				Features::spawn_vehicle("freecrawler");
			}

			if (Menu::Option11("stafford", 9, "lgm_dlc_battle", "stafford"))
			{
				Features::spawn_vehicle("stafford");
			}
			if (Menu::Option11("swinger", 10, "lgm_dlc_battle", "swinger"))
			{
				Features::spawn_vehicle("swinger");
			}
			if (Menu::Option11("patriot2", 11, "sssa_dlc_battle", "patriot2"))
			{
				Features::spawn_vehicle("patriot2");
			}
			if (Menu::Option11("bus", 12, "sssa_dlc_battle", "pbus2"))
			{
				Features::spawn_vehicle("pbus2");
			}
			if (Menu::Option11("romero", 13, "sssa_dlc_battle", "romero"))
			{
				Features::spawn_vehicle("romero");
			}
		}break;
		case SmugglerdlcRun:
		{
			//DRAW_TEXTURE2("shopui_title_sm_hangar", "shopui_title_sm_hangar", Menu::Settings::menuX, 0.1175f, 0.23f, 0.085f, 0, 255, 255, 255, 255);
			Menu::Title("Smuggler Run");
			if (Menu::Option11("bombushka", 1, "candc_smuggler", "bombushka"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("bombushka");
			}
			if (Menu::Option11("hunter", 2, "candc_smuggler", "hunter"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("hunter");
			}
			if (Menu::Option11("Lazer", 3, "candc_smuggler", "lazer"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("lazer");
			}
			if (Menu::Option11("mogul", 4, "candc_smuggler", "mogul"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("mogul");
			}
			if (Menu::Option11("molotok", 5, "candc_smuggler", "molotok"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("molotok");
			}
			if (Menu::Option11("nokota", 6, "candc_smuggler", "nokota"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("nokota");
			}
			if (Menu::Option11("pyro", 7, "candc_smuggler", "pyro"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("pyro");
			}
			if (Menu::Option11("rogue", 8, "candc_smuggler", "rogue"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("rogue");
			}
			if (Menu::Option11("starling", 9, "candc_smuggler", "starling"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("starling");
			}
			if (Menu::Option11("tula", 10, "candc_smuggler", "tula"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("tula");
			}
			if (Menu::Option11("vigilante", 11, "candc_smuggler", "vigilante"))
			{
				Features::spawn_vehicle("vigilante");
			}
			if (Menu::Option11("cyclone", 12, "lgm_dlc_smuggler", "cyclone"))
			{
				Features::spawn_vehicle("cyclone");
			}
			if (Menu::Option11("rapidgt3", 13, "lgm_dlc_smuggler", "rapidgt3"))
			{
				Features::spawn_vehicle("rapidgt3");
			}
			if (Menu::Option11("visione", 14, "lgm_dlc_smuggler", "visione"))
			{
				Features::spawn_vehicle("visione");
			}
			if (Menu::Option11("retinue", 15, "sssa_dlc_smuggler", "retinue"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("retinue");
			}
			if (Menu::Option11("alphaz1", 16, "elt_dlc_smuggler", "alphaz1"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("alphaz1");
			}
			if (Menu::Option11("havok", 17, "elt_dlc_smuggler", "havok"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("havok");
			}
			if (Menu::Option11("howard", 18, "elt_dlc_smuggler", "howard"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("howard");
			}
			if (Menu::Option11("microlight", 19, "elt_dlc_smuggler", "microlight"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("microlight");
			}
			if (Menu::Option11("seabreeze", 20, "elt_dlc_smuggler", "seabreeze"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("seabreeze");
			}
		} break;
		case SUPERCAR22:
		{
			Menu::Title("Super");
			if (Menu::Option11("Adder", 1, "lgm_default", "adder"))
			{
				Features::spawn_vehicle("adder");
			}
			if (Menu::Option11("banshee", 2, "lgm_default", "banshee"))
			{
				Features::spawn_vehicle("BANSHEE 2");
			}
			if (Menu::Option11("Bullet", 3, "lgm_default", "bullet"))
			{
				Features::spawn_vehicle("BULLET");
			}
			if (Menu::Option11("CHEETAH", 4, "lgm_default", "cheetah"))
			{
				Features::spawn_vehicle("CHEETAH");
			}
			if (Menu::Option11("ENTITY XF", 5, "lgm_default", "entityxf"))
			{
				Features::spawn_vehicle("ENTITYXF");
			}
			if (Menu::Option11("INFERNUS", 6, "lgm_default", "infernus"))
			{
				Features::spawn_vehicle("INFERNUS");
			}
			if (Menu::Option11("XA21", 7, "lgm_dlc_gunrunning", "xa21"))
			{
				Features::spawn_vehicle("XA21");
			}
			if (Menu::Option11("FMJ", 8, "lgm_dlc_executive1", "FMJ"))
			{
				Features::spawn_vehicle("FMJ");
			}
			if (Menu::Option11("SHEAVA", 9, "lgm_dlc_stunt", "sheava"))
			{
				Features::spawn_vehicle("SHEAVA");
			}
			if (Menu::Option11("NERO", 10, "lsc_dlc_import_export", "nero2_a"))
			{
				Features::spawn_vehicle("NERO");
			}
			if (Menu::Option11("NERO2", 11, "lsc_dlc_import_export", "nero2_b"))
			{
				Features::spawn_vehicle("NERO2");
			}
			if (Menu::Option11("OSIRIS", 12, "lgm_dlc_luxe", "osiris"))
			{
				Features::spawn_vehicle("OSIRIS");
			}
			if (Menu::Option11("RE7B", 13, "lgm_dlc_stunt", "le7b"))
			{
				Features::spawn_vehicle("LE7B");
			}
			if (Menu::Option11("ITALIGTB", 14, "lsc_dlc_import_export", "italigtb2_a"))
			{
				Features::spawn_vehicle("ITALIGTB");
			}
			if (Menu::Option11("ITALIGTB2", 15, "lsc_dlc_import_export", "italigtb2_b"))
			{
				Features::spawn_vehicle("ITALIGTB2");
			}
			if (Menu::Option11("PFISTER811", 16, "lgm_dlc_executive1", "pfister811"))
			{
				Features::spawn_vehicle("PFISTER811");
			}
			if (Menu::Option11("PROTOTIPO", 17, "lgm_dlc_executive1", "prototipo"))
			{
				Features::spawn_vehicle("PROTOTIPO");
			}
			if (Menu::Option11("REAPER", 18, "lgm_dlc_executive1", "reaper_b"))
			{
				Features::spawn_vehicle("REAPER");
			}
			if (Menu::Option11("SULTANRS", 19, "lsc_jan2016", "sultan2_b"))
			{
				Features::spawn_vehicle("SULTANRS");
			}
			if (Menu::Option11("Progen T20", 20, "lgm_dlc_luxe", "t20"))
			{
				Features::spawn_vehicle("T20");
			}
			if (Menu::Option11("TEMPESTA", 21, "lgm_dlc_importexport", "tempesta"))
			{
				Features::spawn_vehicle("TEMPESTA");
			}
			if (Menu::Option11("TURISMOR", 22, "lgm_dlc_business", "turismor"))
			{
				Features::spawn_vehicle("TURISMOR");
			}
			if (Menu::Option11("TYRUS", 23, "lgm_dlc_stunt", "tyrus_lms_tyrus_livery_2_b"))
			{
				Features::spawn_vehicle("TYRUS");
			}
			if (Menu::Option11("VACCA", 24, "lgm_default", "vacca_b"))
			{
				Features::spawn_vehicle("VACCA");
			}
			if (Menu::Option11("VOLTIC", 25, "lgm_default", "voltic_tless_b"))
			{
				Features::spawn_vehicle("VOLTIC");
			}
			if (Menu::Option11("VOLTIC2", 26, "candc_importexport", "voltic2"))
			{
				Features::spawn_vehicle("VOLTIC2");
			}
			if (Menu::Option11("ZENTORNO", 27, "lgm_dlc_business2", "zentorno"))
			{
				Features::spawn_vehicle("ZENTORNO");
			}
			if (Menu::Option11("PENETRATOR", 28, "lgm_dlc_importexport", "penetrator"))
			{
				Features::spawn_vehicle("PENETRATOR");
			}
			if (Menu::Option11("GP1", 29, "lgm_dlc_specialraces", "gp1_b"))
			{
				Features::spawn_vehicle("GP1");
			}
			if (Menu::Option11("ardent", 30, "lgm_dlc_gunrunning", "cheetah2"))
			{
				Features::spawn_vehicle("ardent");
			}
			if (Menu::Option11("torero", 31, "lgm_dlc_gunrunning", "torero_b"))
			{
				Features::spawn_vehicle("torero");
			}
			if (Menu::Option11("vagner", 32, "lgm_dlc_gunrunning", "vagner"))
			{
				Features::spawn_vehicle("vagner");
			}
			if (Menu::Option11("ruston", 33, "lgm_dlc_specialraces", "ruston"))
			{
				Features::spawn_vehicle("ruston");
			}
		}break;
		case Sports:
			Menu::Title("Sports");//
			for (auto car : Sports1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case SportClassic:
			Menu::Title("Sports Classic");
			for (auto car : SportsClassics1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Offroad:
			Menu::Title("Offroad");
			for (auto car : OffRoad1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Sedans:
			Menu::Title("Sedans");
			for (auto car : Sedans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Coupes:
			Menu::Title("Coupes");
			for (auto car : Coupes1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Muscle:
			Menu::Title("Muscle");
			for (auto car : Muscle1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Boats:
			Menu::Title("Boats");
			for (auto car : Boats1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Commercial:
			Menu::Title("Commercial");
			for (auto car : Commercial1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Compacts:
			Menu::Title("Compacts");
			for (auto car : Compacts1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Cycles:
			Menu::Title("Cycles");
			for (auto car : Cycles1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Emergency:
			Menu::Title("Emergency");
			for (auto car : Emergency1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Helicopters:
			Menu::Title("Helicopters");

			if (Menu::Option11("BUZZARD", 1, "candc_default", "buzzard"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("BUZZARD");
			}
			if (Menu::Option11("BUZZARD2", 2, "candc_default", "buzzard_b"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("BUZZARD2");
			}
			if (Menu::Option11("CARGOBOB", 3, "candc_default", "cargobob"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("CARGOBOB");
			}
			if (Menu::Option11("CARGOBOB2", 4, "candc_default", "cargobob_b"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("CARGOBOB2");
			}
			if (Menu::Option11("CARGOBOB3", 5, "candc_default", "cargobob"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("CARGOBOB3");
			}
			if (Menu::Option11("CARGOBOB4", 6, "candc_default", "cargobob_b"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("CARGOBOB4");
			}
			if (Menu::Option11("FROGGER2", 7, "elt_default", "frogger_b"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("FROGGER2");
			}
			if (Menu::Option11("FROGGER", 8, "elt_default", "frogger"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("FROGGER");
			}
			if (Menu::Option11("ANNIHILATOR", 9, "elt_default", "annihl"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("ANNIHILATOR");
			}
			if (Menu::Option11("MAVERICK", 10, "elt_default", "maverick"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("MAVERICK");
			}
			if (Menu::Option11("VALKYRIE", 11, "candc_default", "valkyrie"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("VALKYRIE");
			}
			if (Menu::Option11("VALKYRIE2", 12, "candc_default", "valkyrie_b"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("VALKYRIE2");
			}
			if (Menu::Option11("VOLATUS", 13, "elt_dlc_executive1", "volatus"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("VOLATUS");
			}
			if (Menu::Option11("SWIFT2", 14, "elt_dlc_luxe", "swift2"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("SWIFT2");
			}
			if (Menu::Option11("SWIFT", 15, "elt_dlc_pilot", "swift"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("SWIFT");
			}
			if (Menu::Option11("SUPERVOLITO", 16, "elt_dlc_apartments", "svolito"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("SUPERVOLITO");
			}
			if (Menu::Option11("SUPERVOLITO2", 17, "elt_dlc_apartments", "svolito2"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("SUPERVOLITO2");
			}
			if (Menu::Option11("SAVAGE", 18, "candc_default", "savage"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("SAVAGE");
			}
			if (Menu::Option11("ANNIHILATOR", 19, "elt_default", "annihl"))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("ANNIHILATOR");
			}
			if (Menu::Option11("BLIMP", 20, "", ""))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("BLIMP");
			}
			if (Menu::Option11("BLIMP2", 21, "", ""))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("BLIMP2");
			}
			if (Menu::Option11("SWIFT", 22, "", ""))
			{
				Vehiclespawnnoar();
				Features::spawn_vehicle("SWIFT");
			}break;
		case Industrial:
			Menu::Title("Industrial");
			for (auto car : Industrial1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Military:
			Menu::Title("Military");
			for (auto car : Military1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Motorcycles:
			Menu::Title("Motorcycles");
			for (auto car : Motorcycles1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Planes:
			Menu::Title("Planes");
			for (auto car : Planes1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Service:
			Menu::Title("Service");
			for (auto car : Service1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case SUV:
			Menu::Title("SUV");
			for (auto car : SUVs1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Trailer:
			Menu::Title("Trailer");
			for (auto car : Trailer1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Trains:
			Menu::Title("Trains");
			for (auto car : Trains1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Utility:
			Menu::Title("Utility");
			for (auto car : Utility1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case Vans:
			Menu::Title("Vans");
			for (auto car : Vans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			break;
		case dlcGunRuning://ARENAWARR
		{
			Menu::Title("Dlc Gun Running");
			if (Menu::Option11("apc", 1, "candc_gunrunning", "apc"))
			{
				Features::spawn_vehicle("apc");
			}
			if (Menu::Option11("ardent", 2, "candc_gunrunning", "ardent"))
			{
				Features::spawn_vehicle("ardent");
			}
			if (Menu::Option11("caddy3", 3, "candc_gunrunning", "caddy3"))
			{
				Features::spawn_vehicle("caddy3");
			}
			if (Menu::Option11("halftrack", 4, "candc_gunrunning", "halftrack"))
			{
				Features::spawn_vehicle("halftrack");
			}
			if (Menu::Option11("hauler2", 5, "candc_gunrunning", "hauler2"))
			{
				Features::spawn_vehicle("hauler2");
			}
			if (Menu::Option11("insurgent3", 6, "candc_gunrunning", "insurgent3"))
			{
				Features::spawn_vehicle("insurgent3");
			}
			if (Menu::Option11("nightshark", 7, "candc_gunrunning", "nightshark"))
			{
				Features::spawn_vehicle("nightshark");
			}
			if (Menu::Option11("oppressor", 8, "candc_gunrunning", "oppressor"))
			{
				Features::spawn_vehicle("oppressor");
			}
			if (Menu::Option11("phantom3", 9, "candc_truck", "cab_1"))
			{
				Features::spawn_vehicle("phantom3");
			}
			if (Menu::Option11("tampa3", 10, "candc_gunrunning", "tampa3"))
			{
				Features::spawn_vehicle("tampa3");
			}
			if (Menu::Option11("technical3", 11, "candc_gunrunning", "technical3"))
			{
				Features::spawn_vehicle("technical3");
			}
			if (Menu::Option11("trailersmall2", 12, "candc_gunrunning", "trsmall2"))
			{
				Features::spawn_vehicle("trailersmall2");
			}
			if (Menu::Option11("trailerlarge", 13, "candc_truck", "thumbnail"))
			{
				Features::spawn_vehicle("trailerlarge");
			}
		} break;
#pragma endregion
#pragma region Settings Menu
		case settings:
		{
			Menu::Title("Settings");
			Menu::MenuOption("Colors ~b~>", settingstheme);
			if (Menu::Int("Scroll Delay", Menu::Settings::keyPressDelay2, 1, 200))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::keyPressDelay2 = NumberKeyboard();
				}
			}
			if (Menu::Int("Int Delay", Menu::Settings::keyPressDelay3, 1, 200))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::keyPressDelay3 = NumberKeyboard();
				}
			}
			Menu::Option("~HUD_COLOUR_GOLD~Social Club Account:");
			Menu::Option(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
			Menu::MenuOption("~r~KILL GAME", exitgta);
		}
		break;
		case exitgta:
		{
			Menu::Title("Exit GTA V");
			if (Menu::Option("Yes")) exit(0);
		}
		break;
		case settingstheme:
		{
			Menu::Title("Colors");
			Menu::MenuOption("Theme Loader ~b~>", themeloader);
			Menu::MenuOption("Title Background ~b~>", settingstitlerect);
			Menu::MenuOption("Selection Box ~b~>", settingsscroller);
			Menu::MenuOption("Option Text ~b~>", settingsoptiontext);//TESTT1spritte
			if (Menu::Option("MenuX plus")) {
				if (Menu::Settings::menuX < 0.81f) Menu::Settings::menuX += 0.01f;
			}
			if (Menu::Option("MenuX minus")) {
				if (Menu::Settings::menuX > 0.17f) Menu::Settings::menuX -= 0.01f;
			}
			Menu::BoolOption("Rainbow Menu", Features::rainbowmenu, [] { Features::Rainbowmenu(Features::rainbowmenu); });
		}
		break;
		case themeloader:
		{
			Menu::Title("Theme Colors");
			if (Menu::Option("Red Theme")) 
			{
				Menu::Settings::titleRect = { 100, 0, 0, 255 };
				Menu::Settings::scroller = { 100, 0, 0, 255 };
			}
			if (Menu::Option("Blue Theme")) {
				Menu::Settings::titleRect = { 0, 0, 200, 255 };
				Menu::Settings::scroller = { 0, 0, 200, 255 };
			}
			if (Menu::Option("Green Theme")) {
				Menu::Settings::titleRect = { 0, 180, 0, 255 };
				Menu::Settings::scroller = { 0, 0, 180, 255 };
			}
			if (Menu::Option("Load Default Theme")) {
				Menu::Settings::titleText = { 255, 255, 255, 255, 7 };
				Menu::Settings::titleRect = { 100, 0, 0, 255 };
				Menu::Settings::scroller = { 100, 0, 0, 255 };
				Menu::Settings::optionText = { 255, 255, 255, 255, 0 };
				Menu::Settings::optionRect = { 0, 0, 0, 110 };
			}
		}
		break;
		case settingstitlerect:
		{
			Menu::Title("Title Rect");
			if (Menu::Int("Red", Menu::Settings::titleRect.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::titleRect.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::titleRect.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::titleRect.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::titleRect.a = NumberKeyboard();
				}
			}
		}
		break;
		case settingsoptiontext:
		{
			Menu::Title("Option Text");
			if (Menu::Int("Red", Menu::Settings::optionText.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::optionText.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::optionText.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::optionText.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::optionText.a = NumberKeyboard();
				}
			}
			Menu::MenuOption("Font ~b~>", font);
		}
		break;
		case font:
		{
			Menu::Title("Font");
			if (Menu::Option("Chalet London")) { Menu::Settings::optionText.f = 0; }
			if (Menu::Option("House Script")) { Menu::Settings::optionText.f = 1; }
			if (Menu::Option("Monospace")) { Menu::Settings::optionText.f = 2; }
			if (Menu::Option("Wing Dings")) { Menu::Settings::optionText.f = 3; }
			if (Menu::Option("Chalet Comprime Cologne")) { Menu::Settings::optionText.f = 4; }
			if (Menu::Option("Pricedown")) { Menu::Settings::optionText.f = 7; }
		}
		break;
		case settingsscroller:
		{
			Menu::Title("Scroller");
			if (Menu::Int("Red", Menu::Settings::scroller.r, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.r = NumberKeyboard();
				}
			}
			if (Menu::Int("Green", Menu::Settings::scroller.g, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.g = NumberKeyboard();
				}
			}
			if (Menu::Int("Blue", Menu::Settings::scroller.b, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.b = NumberKeyboard();
				}
			}
			if (Menu::Int("Opacity", Menu::Settings::scroller.a, 0, 255))
			{
				if (IsKeyPressed(VK_NUMPAD5) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept)) {
					Menu::Settings::scroller.a = NumberKeyboard();
				}
			}
		}
		break;
#pragma endregion
		}
		Menu::End();
		WAIT(0);
	}
}

void ScriptMain() {
	srand(GetTickCount());

	main();
}