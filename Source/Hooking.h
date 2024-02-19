#pragma once

typedef bool(__cdecl* fpIsDLCPresent)(Hash dlchash);

typedef bool(__cdecl*	fpIsEntityDead)(Entity entity);
//typedef BOOL	(__cdecl*	fpIsPlayerOnline)(void*);
typedef BOOL(__cdecl*	fpIsPlayerPlaying)(Player player);
typedef Player(__cdecl*	fpPlayerId)();
typedef Ped(__cdecl*	fpGetPlayerPed)(Player player);
typedef int(__cdecl*	fpGetPlayerTeam)(Player player);
typedef Vehicle(__cdecl*	fpGetVehiclePedIsUsing)(Ped ped);
typedef Ped(__cdecl*	fpGetPedInVehicleSeat)(Vehicle vehicle, int index);
typedef BOOL(__cdecl*	fpIsAimCamActive)();
typedef BOOL(__cdecl*	fpGetEntityPlayerIsFreeAimingAt)(Player player, Entity* entity);
typedef BOOL(__cdecl*	fpNetworkIsSessionStarted)();
typedef float(__cdecl*	fpGetEntitySpeed)(Vehicle vehicle);
typedef char*	(__cdecl*	fpGetPlayerName)(Player player);
typedef void(__cdecl*	fpDrawRect)(float x, float y, float width, float height, int r, int g, int b, int a);
typedef void(__cdecl*	fpDrawLine)(Vector3* pos1, Vector3* pos2, int r, int g, int b, int a);
typedef BOOL(__cdecl*	fpGetGroundZFor3dCoord)(Vector3* pos, float* out, int64_t unk1, BOOL unk2);
typedef Vehicle(__cdecl*	fpCreateVehicle)(Hash model, Vector3* pos, float heading, BOOL networked, BOOL unk2);
typedef void(__cdecl*	fpSetEntityCoordsNoOffset)(Entity entity, Vector3* pos, BOOL x, BOOL y, BOOL z);
typedef float(__cdecl*	fpGetEntityHeading)(Entity entity);
typedef Vector3*(__cdecl*	fpGetGameplayCamRot)(Vector3* out, uint32_t unk1);
typedef Vector3*(__cdecl*	fpGetGameplayCamCoord)(Vector3* out);
typedef int(__cdecl*	fpGetPlayerGroup)(Player player);
typedef int(__cdecl*	fpSetPlayerModel)(Player player, Hash model);
typedef int(__cdecl*	fpSetPedRandomComponentVariatian)(Ped ped);
typedef int(__cdecl*	fpSetPedDefaultComponentVariation)(Ped ped);
typedef bool(__cdecl*	fpIsPedInAnyVehicle)(Ped ped, BOOL atGetIn);
typedef Ped(__cdecl*	fpCreatePed)(int type, Hash model, Vector3* pos, float heading, bool isNetworked, bool unk1);
typedef int(__cdecl*	fpSetPedIntoVehicle)(Ped ped, Vehicle vehicle, int seat);
typedef BOOL(__cdecl*	fpSetPedConfigFlag)(Ped ped, int flag, bool value);
typedef int(__cdecl*	fpClearPedBloodDamage)(Ped* ped);
typedef int(__cdecl*	fpClearPedWetness)(Ped ped);
typedef BOOL(__cdecl*	fpCreateObject)(Hash model, float x, float y, float z, bool offset, int unk0, int unk1, Object* out, bool isNetworked, bool unk2, bool dynamic);	//unk0 = 1; unk1 = -1
																																											//typedef uint32_t(__cdecl*	fpGetPedNearbyVehicles)(Ped ped, int* sizeAndVehs);
																																											//typedef uint32_t(__cdecl*	fpGetPedNearbyPeds)(Ped ped, int* sizeAndPeds, int ignore);
typedef int(__cdecl*	fpGetPedGroupIndex)(Ped ped);
typedef Ped(__cdecl*	fpClonePed)(Ped ped, float heading, BOOL isNetworked, BOOL unk0);
typedef BOOL(__cdecl*	fpNetworkShopCheckoutStart)(DWORD transID);
typedef BOOL(__cdecl*	fpNetworkShopBeginService)(DWORD* transID, int p1, int p2, int p3, int p4, int p5);
typedef BOOL(__cdecl*	fpStatSetInt)(DWORD hash, int value, BOOL save);
typedef BOOL(__cdecl*	fpStatSetFloat)(DWORD hash, float value, BOOL save);
typedef BOOL(__cdecl*	fpStatSetBool)(DWORD hash, BOOL value, BOOL save);
typedef BOOL(__cdecl*	fpStatSetDate)(DWORD hash, DWORD* value, int size, BOOL save);
typedef BOOL(__cdecl*	fpStatGetInt)(DWORD hash, int* out, int unk0);
typedef void(__cdecl*	fpAddExplosion)(Vector3* pos, int type, float damage, bool audible, bool invis, float shake, bool nodmg);
typedef void(__cdecl*	fpGiveDelayedWeaponToPed)(Ped ped, DWORD hash, int time, BOOL equipNow);
typedef BOOL(__cdecl*	fpRemoveAllPedWeapons)(Ped ped);
typedef BOOL(__cdecl*	fpRemoveWeaponFromPed)(Ped ped, DWORD hash);
typedef BOOL(__cdecl*	fpSetMobileRadio)(BOOL toggle);	//SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY
typedef int(__cdecl*	fpGetPlayerRadioStationIndex)();
typedef char*	(__cdecl*	fpGetRadioStationName)(int id);
typedef bool(__cdecl*	fpNetworkHasControlOfEntity)(Entity entity);
typedef BOOL(__cdecl*	fpAddOwnedExplosion)(Ped ped, Vector3* pos, int type, float dmgScale, bool isAudible, bool isInvis, float fCamShake);
typedef bool(__cdecl*	fpNetworkRequestControlOfEntity)(Entity entity);
typedef int(__cdecl*	fpNetworkGetNetworkIdFromEntity)(Entity entity);
typedef bool(__cdecl*	fpNetworkHasControlOfNetworkId)(int netId);
typedef bool(__cdecl*	fpNetworkRequestControlOfNetworkId)(int netId);
typedef void(__cdecl*	fpSetNetworkIdCanMigrate)(int netId, bool toggle);
typedef int(__cdecl*	fpNetworkCreateSynchronisedScene)(Vector3* pos, Vector3* rot, int unk0, int unk1, int unk2, float unk3, float unk4, float unk5);
typedef int(__cdecl*	fpNetworkAddPedToSynchronisedScene)(Ped ped, int scene, char* dict, char* anim, float speed, float speedMult, int duration, int flag, float playRate, int unk1, int unk2);
typedef int(__cdecl*	fpNetworkStartSynchronisedScene)(int scene);
typedef int(__cdecl*	fpClearPedTasksImmediately)(Ped ped);
typedef int(__cdecl*	fpSetEntityVisible)(Entity e, bool toggle, bool unk0);
typedef bool(__cdecl*	fpSetPedAsGroupMember)(Ped ped, int group);
typedef bool(__cdecl*	fpIsPedGroupMember)(Ped ped, int group);
typedef void(__cdecl*	fpSetPedGravity)(Ped ped, bool toggle);
typedef BOOL(__cdecl*	fpSetEntityHasGravity)(Entity entity, bool toggle);
typedef bool(__cdecl*	fpIsVehicleDrivable)(Vehicle vehicle, bool unk0);
typedef bool(__cdecl*	fpIsModelAHeli)(DWORD hash);
typedef bool(__cdecl*	fpIsModelAPlane)(DWORD hash);
typedef bool(__cdecl*	fpIsModelACar)(DWORD hash);
typedef BOOL(__cdecl*	fpSetHeliBladesFullSpeed)(Vehicle vehicle, float speed);	//speed 0.f - 1.f
typedef BOOL(__cdecl*	fpSetVehicleForwardSpeed)(Vehicle* pVeh, float speed);
typedef bool(__cdecl*	fpSetVehicleNumberPlateText)(Vehicle vehicle, char* text);
typedef bool(__cdecl*	fpSetPedToRagdoll)(Ped ped, int time1, int time2, int type, bool unk0, bool unk1, bool unk2);
typedef void(__cdecl*	fpGetPedBoneCoords)(Vector3* out, Ped ped, DWORD boneId, Vector3* offset);
typedef bool(__cdecl*	fpSetEntityAsMissionEntity)(Entity entity, bool unk0, bool owned);
typedef bool(__cdecl*	fpApplyForceToEntity)(Entity entity, int forceType, Vector3* pos, Vector3* rot, int unk0, bool isRel, bool unk2, bool highForce, bool unk3, bool unk4);
typedef BOOL(__cdecl*	fpSetEntityRotation)(Entity entity, Vector3* rot, int unk0);
typedef bool(__cdecl*	fpSetEntityHeading)(Entity entity, float heading);
typedef BOOL(__cdecl*	fpFreezeEntityPosition)(Entity entity, bool toggle);
typedef BOOL(__cdecl*	fpShootSingleBulletBetweenCoords)(Vector3* pos1, Vector3* pos2, int damage, bool unk0, DWORD hash, Ped owner, bool isAudible, bool isVisible, float speed, int unk1, bool unk2, bool unk3, int unk4);
typedef void(__cdecl*	fpSetPedNeverLeavesGroup)(Ped ped, bool toggle);
typedef BOOL(__cdecl*	fpSetGroupFormation)(int group, int formation);
typedef int(__cdecl*	fpGetPedBoneIndex)(Ped ped, int boneId);
typedef BOOL(__cdecl*	fpSetPedComponentVariation)(Ped ped, int componentId, int drawableId, int textureId, int paletteId);
typedef BOOL(__cdecl*	fpClearAllPedProps)(Ped ped);
typedef BOOL(__cdecl*	fpSetPedPropIndex)(Ped ped, int componentId, int drawableId, int textureId, bool attach);
typedef bool(__cdecl*	fpIsEntityInAir)(Entity entity);
typedef BOOL(__cdecl*	fpSetEntityVelocity)(Entity entity, Vector3* velocity);
typedef Entity(__cdecl*	fpGetEntityAttachedTo)(Entity entity);
typedef bool(__cdecl*	fpDetachEntity)(Entity entity, bool unk0, bool collision);
typedef bool(__cdecl*	fpDeleteEntity)(Entity* entity);
typedef bool(__cdecl*	fpIsEntityAttached)(Entity entity);
typedef BOOL(__cdecl*	fpSetEntityAsNoLongerNeeded)(Entity* entity);
typedef BOOL(__cdecl*	fpGetEntityVelocity)(Vector3* out, Entity entity);
typedef BOOL(__cdecl*	fpGetEntityRotation)(Vector3* out, Entity entity, int rotationOrder);
typedef DWORD(__cdecl*	fpGetEntityModel)(Entity entity);
typedef bool(__cdecl*	fpSetVehicleOnGroundProperly)(Vehicle vehicle, int unk0);
typedef void(__cdecl*	fpSetVehicleUndriveable)(Vehicle vehicle, bool toggle);
typedef void(__cdecl*	fpSetVehicleFixed)(Vehicle vehicle);
typedef void(__cdecl*	fpSetVehicleDeformationFixed)(Vehicle* pVehicle);
typedef bool(__cdecl*	fpIsVehicleSeatFree)(Vehicle vehicle, int seatId, bool unk0);
typedef bool(__cdecl*	fpSetVehicleModKit)(Vehicle vehicle, int modKit);
typedef void(__cdecl*	fpSetVehicleNumberPlateIndex)(Vehicle* vehicle, int plateId);
typedef BOOL(__cdecl*	fpToggleVehicleMod)(Vehicle vehicle, int modType, bool toggle);
typedef BOOL(__cdecl*	fpSetVehicleMod)(Vehicle vehicle, int modType, int modIndex, bool customTires);
typedef BOOL(__cdecl*	fpSetVehicleWheelType)(Vehicle vehicle, int wheelType);
typedef int(__cdecl*	fpGetNumVehicleMod)(Vehicle vehicle, int modType);
typedef BOOL(__cdecl*	fpAddTextCompSubstrPlayerName)(char* text);
typedef BOOL(__cdecl*	fpEndTextCmdDisplayText)(float x, float y, int unk1);
typedef BOOL(__cdecl*	fpBeginTextCmdDisplayText)(char* text);
typedef BOOL(__cdecl*	fpSetNotificationTextEntiry)(char* text);
typedef BOOL(__cdecl*	fpDrawNotification)(bool blink, bool unk0, bool unk1);
typedef BOOL(__cdecl*	fpSetWeatherTypeNowPersist)(char* weather);
typedef BOOL(__cdecl*	fpDisplayOnscreenKeyboard)(int64_t unk0, char* title, char* unk1, char* defaultText, char* defConcat, char* defConCat2, char* defConcat3, int maxLength);
typedef BOOL(__cdecl*	fpUpdateOnscreenKeyboard)();
typedef BOOL(__cdecl*	fpSetLocalPlayerVisibleLocally)(bool unk0);
typedef BOOL(__cdecl*	fpNetworkOverrideClockTime)(int hour, int minute, int second, bool unk0);
typedef uint64_t(__cdecl*	fpGetNetworkTime)();
typedef BOOL(__cdecl*	fpAiTaskWanderStandard)(Ped ped, float unk0, bool unk1);
typedef BOOL(__cdecl*	fpAiTaskPlayAnim)(Ped ped, char* dict, char* anim, float speed, float speedMult, int duration, int flg, float playRate, bool unk0, BOOL lockX, BOOL lockY, BOOL lockZ, bool unk1);
typedef bool(__cdecl*	fpIsModelInCdimage)(DWORD hash);
typedef bool(__cdecl*	fpIsModelValid)(DWORD hash);
typedef bool(__cdecl*	fpIsModelAVehicle)(DWORD hash);
typedef BOOL(__cdecl*	fpRequestModel)(DWORD hash);
typedef bool(__cdecl*	fpHasModelLoaded)(DWORD hash);
typedef BOOL(__cdecl*	fpRequestAnimDict)(char* dict);
typedef bool(__cdecl*	fpHasAnimDictLoaded)(char* dict);
typedef void(__cdecl*	fpDecorRegister)(char* name, int type);
typedef bool(__cdecl*	fpDecorSetInt)(Entity entity, char* name, int value);
typedef BOOL(__cdecl*	fpCreateAmbientDrop)(DWORD pickupHash, Vector3* pos, int unk0, int value, DWORD modelHash, bool unk1, bool unk2);
typedef	BOOL(__cdecl*	fpIsPlayerFreeAiming)(Player player);
typedef bool(__cdecl*	fpGetPedLastWeaponImpactCoord)(Ped ped, Vector3* out);
typedef int(__cdecl*	fpStartRayCast)(Vector3* pos1, Vector3* pos2, int flags, Entity entity, bool unk0);	//_START_SHAPE_TEST_RAY
typedef int(__cdecl*	fpGetRayCast)(int handle, BOOL* hit, Vector3* end, Vector3* surface, Hash* material, Entity* entity);
typedef Entity(__cdecl*	fpPtrToHandle)(void* entity);
typedef BOOL(__cdecl*	fpNetworkSetInSpectatorMode)(bool toggle, Ped ped);
typedef BOOL(__cdecl*	fpSetPedCombatAbility)(Ped* pPed, BYTE ability);
typedef BOOL(__cdecl*	fpAiTaskCombatPed)(Ped ped, Ped target, int unk0, int unk1);
typedef int(__cdecl*	fpTriggerScriptEvent)(bool unk0, uint64_t* args, int argCount, int bitFlags);
typedef BOOL(__cdecl*	fpApplyVehicleColors)(Vehicle* vehicle, bool unk0);	//unk0 = 1;
typedef BOOL(__cdecl*	fpSetPedRelationshipGroupHash)(Ped ped, DWORD hash);
typedef BOOL(__cdecl*	fpSetPlayerVisibleLocally)(Player player, bool toggle);
typedef BOOL(__cdecl*	fpSetModelAsNoLongerNeeded)(DWORD hash);
typedef BOOL(__cdecl*	fpSetRadioToStationName)(void* gameInfo, char* station);
typedef void(__cdecl*	fpSetVehicleEngineOn)(Vehicle vehicle, bool unk0, bool instant, bool unk1);
typedef BOOL(__cdecl*	fpAttachEntityToEntity)(Entity subject, Entity target, int boneIndex, Vector3* offset, Vector3* rot, bool unk0, bool softPinning, bool collision, bool isPed, int vertexIndex, bool fixedRot, bool unk1);
typedef BOOL(__cdecl*	fpSetEntityCollision)(Entity entity, bool toggle, bool physics, bool unk0);
typedef uint32_t(__cdecl*	fpGetPedNearbyVehicles)(Ped ped, int* sizeAndVehs);
typedef uint32_t(__cdecl*	fpGetPedNearbyPeds)(Ped ped, int* sizeAndPeds, int ignore);

class Hooking
{
private:
	static BOOL InitializeHooks();
	static void FindPatterns();
	static void FailPatterns(const char* name);

public:
	static std::vector<LPVOID>		m_hooks;
	static uint64_t*				m_frameCount;
	static fpIsDLCPresent			is_DLC_present;
	static fpStatSetInt			    stat_set_int;

	static void Start(HMODULE hmoduleDLL);
	static void Cleanup();
	static eGameState GetGameState();
	static uint64_t getWorldPtr();
	static void onTickInit();
	static bool HookNatives();
	static __int64** getGlobalPtr();
	static __int64* getGlobalPtr1(int index);
	static __int64* setTunable(int Tunable);
	static void defuseEvent(RockstarEvent e, bool toggle);

	// Native function handler type
	typedef void(__cdecl * NativeHandler)(scrNativeCallContext * context);
	struct NativeRegistrationNew
	{
		uint64_t nextRegistration1;
		uint64_t nextRegistration2;
		Hooking::NativeHandler handlers[7];
		uint32_t numEntries1;
		uint32_t numEntries2;
		uint64_t hashes;

		inline NativeRegistrationNew* getNextRegistration()
		{
			uintptr_t result;
			auto v5 = reinterpret_cast<uintptr_t>(&nextRegistration1);
			auto v12 = 2i64;
			auto v13 = v5 ^ nextRegistration2;
			auto v14 = (char *)&result - v5;
			do
			{
				*(DWORD*)&v14[v5] = v13 ^ *(DWORD*)v5;
				v5 += 4i64;
				--v12;
			} while (v12);

			return reinterpret_cast<NativeRegistrationNew*>(result);
		}

		inline uint32_t getNumEntries()
		{
			return ((uintptr_t)&numEntries1) ^ numEntries1 ^ numEntries2;
		}

		inline uint64_t getHash(uint32_t index)
		{

			auto naddr = 16 * index + reinterpret_cast<uintptr_t>(&nextRegistration1) + 0x54;
			auto v8 = 2i64;
			uint64_t nResult;
			auto v11 = (char *)&nResult - naddr;
			auto v10 = naddr ^  *(DWORD*)(naddr + 8);
			do
			{
				*(DWORD *)&v11[naddr] = v10 ^ *(DWORD*)(naddr);
				naddr += 4i64;
				--v8;
			} while (v8);

			return nResult;
		}
	};
	static NativeHandler GetNativeHandler(uint64_t origHash);
};

void WAIT(DWORD ms);

extern bool rdev;
enum eThreadState
{
	ThreadStateIdle = 0x0,
	ThreadStateRunning = 0x1,
	ThreadStateKilled = 0x2,
	ThreadState3 = 0x3,
	ThreadState4 = 0x4,
};

struct scrThreadContext
{
	int ThreadID;
	int ScriptHash;
	eThreadState State;
	int _IP;
	int FrameSP;
	int _SPP;
	float TimerA;
	float TimerB;
	int TimerC;
	int _mUnk1;
	int _mUnk2;
	int _f2C;
	int _f30;
	int _f34;
	int _f38;
	int _f3C;
	int _f40;
	int _f44;
	int _f48;
	int _f4C;
	int _f50;
	int pad1;
	int pad2;
	int pad3;
	int _set1;
	int pad[17];
};

struct scrThread
{
	void *vTable;
	scrThreadContext m_ctx;
	void *m_pStack;
	void *pad;
	void *pad2;
	const char *m_pszExitMessage;
};

struct ScriptThread : scrThread
{
	const char Name[64];
	void *m_pScriptHandler;
	const char gta_pad2[40];
	const char flag1;
	const char m_networkFlag;
	bool bool1;
	bool bool2;
	bool bool3;
	bool bool4;
	bool bool5;
	bool bool6;
	bool bool7;
	bool bool8;
	bool bool9;
	bool bool10;
	bool bool11;
	bool bool12;
	const char gta_pad3[10];
};

/*
//CPatternResult
*/

class CPatternResult
{
public:
	CPatternResult(void* pVoid);
	CPatternResult(void* pVoid, void* pBegin, void* pEnd);
	~CPatternResult();

	template <typename rT>
	rT*	get(int offset = 0)
	{
		rT*	ret = nullptr;
		if (m_pVoid != nullptr)
			ret = reinterpret_cast<rT*>(reinterpret_cast<char*>(m_pVoid) + offset);
		return ret;
	}

	template <typename rT>
	rT* get_rel(int offset = 0)
	{
		rT*		result = nullptr;
		int32_t	rel;
		char*	ptr = get<char>(offset);

		if (ptr == nullptr)
			goto LABEL_RETURN;

		rel = *(int32_t*)ptr;
		result = reinterpret_cast<rT*>(ptr + rel + sizeof(rel));

	LABEL_RETURN:
		return result;
	}

	template <typename rT>
	rT*	section_begin()
	{
		return reinterpret_cast<rT*>(m_pBegin);
	}

	template <typename rT>
	rT*	section_end()
	{
		return reinterpret_cast<rT*>(m_pEnd);
	}

protected:
	void*	m_pVoid = nullptr;
	void*	m_pBegin = nullptr;
	void*	m_pEnd = nullptr;
};

class CMetaData
{
public:
	static uint64_t	begin();
	static uint64_t	end();
	static DWORD	size();
	static void		init();
private:
	static uint64_t	m_begin;
	static uint64_t	m_end;
	static DWORD	m_size;
};

/*
//CPattern
*/

typedef	std::vector<CPatternResult>	vec_result;
class CPattern
{
public:
	CPattern(char* szByte, char* szMask);
	~CPattern();

	CPattern&		find(int i = 0, uint64_t startAddress = 0);		//scans for i patterns
	CPattern&		virtual_find(int i = 0, uint64_t startAddress = 0);
	CPatternResult	get(int i);				//returns result i

protected:
	char*			m_szByte;
	char*			m_szMask;
	bool			m_bSet;
	vec_result		m_result;

	bool		match(int i = 0, uint64_t startAddress = 0, bool virt = false);
	bool		byte_compare(const BYTE* pData, const BYTE* btMask, const char* szMask);
	uint64_t	find_pattern(uint64_t i64Address, uint64_t end, BYTE *btMask, char *szMask);
	uint64_t	virtual_find_pattern(uint64_t address, BYTE *btMask, char *szMask);
};