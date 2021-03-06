#pragma once

enum eButtons
{
	BUTTON_L2 = 0x5,
	BUTTON_R2 = 0x7,
	BUTTON_L1 = 0x4,
	BUTTON_R1 = 0x6,
	BUTTON_TRIANGLE = 0xF,
	BUTTON_O = 0x11,
	BUTTON_X = 0x10,
	BUTTON_SQUARE = 0xE,
	BUTTON_SELECT = 0xD,
	BUTTON_L3 = 0x12,
	BUTTON_R3 = 0x13,
	BUTTON_START = 0xC,
	DPAD_UP = 0x8,
	DPAD_RIGHT = 0xB,
	DPAD_DOWN = 0x9,
	DPAD_LEFT = 0xA,
};

enum eInput
{
	INPUT_PHONE_ACCEPT,
	INPUT_PHONE_CANCEL,
	INPUT_NEXT_CAMERA,
	INPUT_SPRINT,
	INPUT_JUMP,
	INPUT_ENTER,
	INPUT_ATTACK,
	INPUT_ATTACK2,
	INPUT_AIM,
	INPUT_LOOK_BEHIND,
	INPUT_NEXT_WEAPON,
	INPUT_PREV_WEAPON,
	INPUT_NEXT_TARGET_LEFT,
	INPUT_NEXT_TARGET_RIGHT,
	INPUT_MOVE_LEFT,
	INPUT_MOVE_RIGHT,
	INPUT_MOVE_UP,
	INPUT_MOVE_DOWN,
	INPUT_LOOK_LEFT,
	INPUT_LOOK_RIGHT,
	INPUT_LOOK_UP,
	INPUT_LOOK_DOWN,
	INPUT_DUCK,
	INPUT_PHONE_TAKE_OUT,
	INPUT_PHONE_PUT_AWAY,
	INPUT_PICKUP,
	INPUT_SNIPER_ZOOM_IN,
	INPUT_SNIPER_ZOOM_OUT,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE,
	INPUT_COVER,
	INPUT_RELOAD,
	INPUT_VEH_MOVE_LEFT,
	INPUT_VEH_MOVE_RIGHT,
	INPUT_VEH_MOVE_UP,
	INPUT_VEH_MOVE_DOWN,
	INPUT_VEH_GUN_LEFT,
	INPUT_VEH_GUN_RIGHT,
	INPUT_VEH_GUN_UP,
	INPUT_VEH_GUN_DOWN,
	INPUT_VEH_ATTACK,
	INPUT_VEH_ATTACK2,
	INPUT_VEH_ACCELERATE,
	INPUT_VEH_BRAKE,
	INPUT_VEH_HEADLIGHT,
	INPUT_VEH_EXIT,
	INPUT_VEH_HANDBRAKE,
	INPUT_VEH_HANDBRAKE_ALT,
	INPUT_VEH_HOTWIRE_LEFT,
	INPUT_VEH_HOTWIRE_RIGHT,
	INPUT_VEH_LOOK_LEFT,
	INPUT_VEH_LOOK_RIGHT,
	INPUT_VEH_LOOK_BEHIND,
	INPUT_VEH_CIN_CAM,
	INPUT_VEH_NEXT_RADIO,
	INPUT_VEH_PREV_RADIO,
	INPUT_VEH_HORN,
	INPUT_VEH_FLY_THROTTLE_UP,
	INPUT_VEH_FLY_THROTTLE_DOWN,
	INPUT_VEH_FLY_YAW_LEFT,
	INPUT_VEH_FLY_YAW_RIGHT,
	INPUT_MELEE_ATTACK1,
	INPUT_MELEE_ATTACK2,
	INPUT_MELEE_ATTACK3,
	INPUT_MELEE_ATTACK4,
	INPUT_MELEE_KICK,
	INPUT_MELEE_BLOCK,
	INPUT_FRONTEND_DOWN,
	INPUT_FRONTEND_UP,
	INPUT_FRONTEND_LEFT,
	INPUT_FRONTEND_RIGHT,
	INPUT_FRONTEND_RDOWN,
	INPUT_FRONTEND_RUP,
	INPUT_FRONTEND_RLEFT,
	INPUT_FRONTEND_RRIGHT,
	INPUT_FRONTEND_AXIS_X,
	INPUT_FRONTEND_AXIS_Y,
	INPUT_FRONTEND_RIGHT_AXIS_X,
	INPUT_FRONTEND_RIGHT_AXIS_Y,
	INPUT_FRONTEND_PAUSE,
	INPUT_FRONTEND_ACCEPT,
	INPUT_FRONTEND_CANCEL,
	INPUT_FRONTEND_X,
	INPUT_FRONTEND_Y,
	INPUT_FRONTEND_LB,
	INPUT_FRONTEND_RB,
	INPUT_FRONTEND_LT,
	INPUT_FRONTEND_RT,
	INPUT_F_X,
	INPUT_F_ACCEPT,
	INPUT_F_CANCEL,
	INPUT_F_Y,

};

enum ePads
{
	PAD_DPAD_UPDOWN,
	PAD_DPAD_ALL,
	PAD_DPAD_LR,
	PAD_LT_RT,
	PAD_START,
	PAD_BACK,
};

enum eScaleButtons
{
	p_circle,
	p_triangle,
	p_square,
	p_cross,
	p_r1,
	p_r2,
	p_r3,
	rstick_up,
	rstick_right,
	rstick_down,
	rstick_left,
	rstick_leftright,
	rstick_updown,
	rstick_all,
	p_l1,
	p_l2,
	p_l3,
	lstick_up,
	lstick_right,
	lstick_down,
	lstick_left,
	lstick_leftright,
	lstick_updown,
	lstick_all,
	dpad_up,
	dpad_right,
	dpad_down,
	dpad_left,
	dpad_leftright,
	dpad_updown,
	dpad_all,
	dpad_none,
	start_butt,
	p_select,
	sixaxis_drive,
	sixaxis_pitch,
	sixaxis_reload,
	sixaxis_roll,
	up_arrow,
	right_arrow,
	down_arrow,
	left_arrow
};


enum eBlips
{
	BLIP_DESTINATION,
	BLIP_DESTINATION_1,
	BLIP_DESTINATION_2,
	BLIP_OBJECTIVE,
	BLIP_OBJECTIVE_4,
	BLIP_OBJECTIVE_5,
	BLIP_PLAYER,
	BLIP_NORTH,
	BLIP_WAYPOINT,
	BLIP_PISTOL,
	BLIP_SHOTGUN,
	BLIP_SMG,
	BLIP_RIFLE,
	BLIP_ROCKET,
	BLIP_GRENADE,
	BLIP_MOLOTOV,
	BLIP_SNIPER,
	BLIP_BASEBALL_BAT,
	BLIP_KNIFE,
	BLIP_HEALTH,
	BLIP_ARMOR,
	BLIP_BURGER_SHOT,
	BLIP_CLUCKIN_BELL,
	BLIP_VLAD,
	BLIP_INTERNET,
	BLIP_MANNY,
	BLIP_LITTLE_JACOB,
	BLIP_ROMAN,
	BLIP_FAUSTIN,
	BLIP_SAFEHOUSE,
	BLIP_TAXI_RANK,
	BLIP_BERNIE,
	BLIP_BRUCIE,
	BLIP_UNKNOWN_CONTACT,
	BLIP_DWAYNE,
	BLIP_ELIZABETA,
	BLIP_GAMBETTI,
	BLIP_JIMMY_PEGORINO,
	BLIP_DERRICK,
	BLIP_FRANCIS,
	BLIP_GERRY,
	BLIP_KATIE,
	BLIP_PACKIE,
	BLIP_PHIL_BELL,
	BLIP_PLAYBOY_X,
	BLIP_RAY_BOCCINO,
	BLIP_8_BALL,
	BLIP_BAR,
	BLIP_BOAT_TOUR,
	BLIP_BOWLING,
	BLIP_CLOTHES_SHOP,
	BLIP_CLUB,
	BLIP_DARTS,
	BLIP_DWAYNE_RED,
	BLIP_DATE,
	BLIP_PLAYBOY_X_RED,
	BLIP_HELITOUR,
	BLIP_RESTAURANT,
	BLIP_STATION,
	BLIP_WEAPONS,
	BLIP_POLICE_STATION,
	BLIP_FIRE_STATION,
	BLIP_HOSPITAL,
	BLIP_MALE,
	BLIP_FEMALE,
	BLIP_FINISH_LINE,
	BLIP_STRIP_CLUB,
	BLIP_CONSOLE_GAME,
	BLIP_COP_CAR,
	BLIP_DIMITRI,
	BLIP_COMEDY_CLUB,
	BLIP_CABARET_CLUB,
	BLIP_RANSOM,
	BLIP_COP_CHOPPER,
	BLIP_MICHELLE,
	BLIP_PAY_N_SPRAY,
	BLIP_ASSASSIN,
	BLIP_REVENGE,
	BLIP_DEAL,
	BLIP_GARAGE,
	BLIP_LAWYER,
	BLIP_TROPHY,
	BLIP_MULTIPLAYER_TUTORIAL,
	BLIP_STATION_3,
	BLIP_STATION_8,
	BLIP_STATION_A,
	BLIP_STATION_B,
	BLIP_STATION_C,
	BLIP_STATION_E,
	BLIP_STATION_J,
	BLIP_STATION_K,
	BLIP_CAR_WASH,
	BLIP_UNITED_LIBERTY_PAPER,
	BLIP_BOSS,
	BLIP_BASE
};

enum eBlipColor
{
	BLIP_COLOR_WHITE,
	BLIP_COLOR_DARK_RED,
	BLIP_COLOR_DARK_GREEN,
	BLIP_COLOR_CYAN,
	BLIP_COLOR_GREY,
	BLIP_COLOR_YELLOW,
	BLIP_COLOR_ORANGE,
	BLIP_COLOR_PURPLE,
	BLIP_COLOR_GREEN,
	BLIP_COLOR_RED,
	BLIP_COLOR_LIGHT_RED,
	BLIP_COLOR_LIGHT_ORANGE,
	BLIP_COLOR_DARK_TURQUOISE,
	BLIP_COLOR_TURQUOISE,
	BLIP_COLOR_LIGHT_YELLOW
};

enum eWeather
{
	WEATHER_EXTRA_SUNNY,
	WEATHER_SUNNY,
	WEATHER_SUNNY_WINDY,
	WEATHER_CLOUDY,
	WEATHER_RAINING,
	WEATHER_DRIZZLE,
	WEATHER_FOGGY,
	WEATHER_LIGHTNING,
	WEATHER_EXTRA_SUNNY_2,
	WEATHER_SUNNY_WINDY_2
};

enum eWeapon
{
	WEAPON_UNARMED = 0xA2719263,
	WEAPON_BASEBALLBAT = 0x640F3759,
	WEAPON_POOLCUE = 0x94117305,
	WEAPON_KNIFE = 0x99B507EA,
	WEAPON_GRENADE = 0x93E220BD,
	WEAPON_MOLOTOV = 0x24B17070,
	WEAPON_ROCKET = 0x03526E8C,
	WEAPON_PISTOL = 0x1B06D571,
	WEAPON_UNUSED0 = 0x09E6BAF2,
	WEAPON_DEAGLE = 0xCB243EE1,
	WEAPON_SHOTGUN = 0xC7C74268,
	WEAPON_BARETTA = 0x434F897F,
	WEAPON_MICRO_UZI = 0x53B159F3,
	WEAPON_MP5 = 0xDA2D803E,
	WEAPON_AK47 = 0x83318CF4,
	WEAPON_M4 = 0x4716CB7F,
	WEAPON_SNIPERRIFLE = 0x05FC3C11,
	WEAPON_M40A1 = 0xC602D852,
	WEAPON_RLAUNCHER = 0x2DDF0462,
	WEAPON_FTHROWER = 0xC895C3D5,
	WEAPON_MINIGUN = 0x42BF8A85,
	WEAPON_EPISODIC_1 = 0x753F14C7,//Grenade Launcher TLAD/TBOGT
	WEAPON_EPISODIC_2 = 0xA30CF062,//Sweeper Shotgun TLAD
	WEAPON_EPISODIC_3 = 0x97F9DA3C, //unknown
	WEAPON_EPISODIC_4 = 0x477FB949,//POOL CUE TLAD
	WEAPON_EPISODIC_5 = 0xAE4286D1,//Grenade From the Grenade Launcher TLAD/TBOGT
	WEAPON_EPISODIC_6 = 0xDBF46234,//Sawnoff Shotgun TLAD
	WEAPON_EPISODIC_7 = 0xD2CF4FEA,//Automatic 9mm TLAD
	WEAPON_EPISODIC_8 = 0x809B2B7F,//Pipe Bomb TLAD
	WEAPON_EPISODIC_9 = 0x03B031AB,//.44 Pistol TBOGT
	WEAPON_EPISODIC_10 = 0x8C99205C,//Explosive AA12 TBOGT
	WEAPON_EPISODIC_11 = 0x7DDB82E1,//AA12 TBOGT
	WEAPON_EPISODIC_12 = 0xF119695B,//P-90 TBOGT
	WEAPON_EPISODIC_13 = 0x72C3ECB2,//Golden Uzi TBOGT
	WEAPON_EPISODIC_14 = 0x546BB002,//M249 TBOGT
	WEAPON_EPISODIC_15 = 0x4792164F,//Explosive Sniper TBOGT
	WEAPON_EPISODIC_16 = 0xBA61FBED,//Sticky Bombs TBOGT
	WEAPON_EPISODIC_17 = 0x0D53A1CF,//BUZZARD (heli) rocket launcher/null TBOGT
	WEAPON_EPISODIC_18 = 0xFD840230,//BUZZARD (heli) rocket for BUZZARD rocket launcher/freeze TBOGT
	WEAPON_EPISODIC_19 = 0x70DEE8E4,//BUZZARD (heli) minigun TBOGT
	WEAPON_EPISODIC_20 = 0xD6A8B536,//APC cannon TBOGT
	WEAPON_EPISODIC_21 = 0xE85BD89C,//Parachute TBOGT
	WEAPON_EPISODIC_22 = 0xFA467C71,//unknown
	WEAPON_EPISODIC_23 = 0xFDD88395,//unknown
	WEAPON_EPISODIC_24 = 0x0FAA2738,//unknown
	WEAPON_CAMERA = 0xA09E1AA9,
	WEAPON_OBJECT = 0x9B9450A6,
	WEAPON_WEAPONTYPE_LAST_WEAPONTYPE = 0x505722D3,
	WEAPON_ARMOUR = 0x31CB2E04,
	WEAPON_RAMMEDBYCAR = 0xDE9B76F7,
	WEAPON_RUNOVERBYCAR = 0xFD2EC17F,
	WEAPON_EXPLOSION = 0x2024F4E8,
	WEAPON_UZI_DRIVEBY = 0x6EE15FCE,
	WEAPON_DROWNING = 0xFF58C4FB,
	WEAPON_FALL = 0xCDC174B0,
	WEAPON_UNIDENTIFIED = 0xEBDA84BE,
	WEAPON_ANYMELEE = 0xB669558A,
	WEAPON_ANYWEAPON = 0x3F1516C5
};

enum eWeaponSlot
{
	WEAPON_SLOT_UNARMED,
	WEAPON_SLOT_MELEE,
	WEAPON_SLOT_HANDGUN,
	WEAPON_SLOT_SHOTGUN,
	WEAPON_SLOT_SMG,
	WEAPON_SLOT_RIFLE,
	WEAPON_SLOT_SNIPER,
	WEAPON_SLOT_HEAVY,
	WEAPON_SLOT_THROWN,
	WEAPON_SLOT_SPECIAL,
	WEAPON_SLOT_GIFT,
	WEAPON_SLOT_PARACHUTE,
	WEAPON_SLOT_DETONATORUNKNOWN
};

enum eExplosion
{
	EXPLOSION_GRENADE,
	EXPLOSION_MOLOTOV,
	EXPLOSION_ROCKET,
	EXPLOSION_HI_OCTANE,
	EXPLOSION_CAR,
	EXPLOSION_PLANE,
	EXPLOSION_PETROL_PUMP,
	EXPLOSION_BIKE,
	EXPLOSION_DIR_STEAM,
	EXPLOSION_DIR_FLAME,
	EXPLOSION_DIR_WATER_HYDRANT,
	EXPLOSION_DIR_GAS_CANISTER,
	EXPLOSION_BOAT,
	EXPLOSION_SHIP_DESTROY,
	EXPLOSION_TRUCK,
	EXPLOSION_EPISODIC_1,//Grenade launcher
	EXPLOSION_EPISODIC_2,//explosive shotgun
	EXPLOSION_EPISODIC_3,//Anhialator bullets
	EXPLOSION_EPISODIC_4,//APC explosive rounds
	EXPLOSION_EPISODIC_5,//Buzzard heli rockets
	EXPLOSION_EPISODIC_6,//Non-sorted explosions for Sexy Time mission/red explosion
	EXPLOSION_EPISODIC_7,//Sitcky bomb explosions
	EXPLOSION_EPISODIC_8,//Super punch cheat explosions
	EXPLOSION_EPISODIC_9,//invisible and will lag out explosions
	EXPLOSION_EPISODIC_10,//invisible and will lag out explosions
	EXPLOSION_UNKNOWN,//freezes/invisible and will lag out explosions
};

enum eHudColour
{
	HUD_COLOUR_WHITE,
	HUD_COLOUR_RED,
	HUD_COLOUR_REDLIGHT,
	HUD_COLOUR_REDDARK,
	HUD_COLOUR_BLUE,
	HUD_COLOUR_BLUELIGHT,
	HUD_COLOUR_BLUEDARK,
	HUD_COLOUR_YELLOW,
	HUD_COLOUR_YELLOWLIGHT,
	HUD_COLOUR_YELLOWDARK,
	HUD_COLOUR_ORANGE,
	HUD_COLOUR_ORANGELIGHT,
	HUD_COLOUR_ORANGEDARK,
	HUD_COLOUR_GREEN,
	HUD_COLOUR_GREENLIGHT,
	HUD_COLOUR_GREENDARK,
	HUD_COLOUR_PURPLE,
	HUD_COLOUR_PURPLELIGHT,
	HUD_COLOUR_PURPLEDARK,
	HUD_COLOUR_PINK,
	HUD_COLOUR_STAR,
	HUD_COLOUR_STARLIGHT,
	HUD_COLOUR_STARDARK,
	HUD_COLOUR_NET_PLAYER1,
	HUD_COLOUR_NET_PLAYER2,
	HUD_COLOUR_NET_PLAYER3,
	HUD_COLOUR_NET_PLAYER4,
	HUD_COLOUR_NET_PLAYER5,
	HUD_COLOUR_NET_PLAYER6,
	HUD_COLOUR_NET_PLAYER7,
	HUD_COLOUR_NET_PLAYER8,
	HUD_COLOUR_NET_PLAYER9,
	HUD_COLOUR_NET_PLAYER10,
	HUD_COLOUR_NET_PLAYER11,
	HUD_COLOUR_NET_PLAYER12,
	HUD_COLOUR_NET_PLAYER13,
	HUD_COLOUR_NET_PLAYER14,
	HUD_COLOUR_NET_PLAYER15,
	HUD_COLOUR_NET_PLAYER16,
	HUD_COLOUR_SIMPLEBLIP_DEFAULT,
	HUD_COLOUR_MENU_BLUE,
	HUD_COLOUR_MENU_GREY_LIGHT,
	HUD_COLOUR_MENU_BLUE_EXTRA_DARK,
	HUD_COLOUR_MENU_YELLOW,
	HUD_COLOUR_MENU_YELLOW_DARK,
	HUD_COLOUR_MENU_GREEN,
	HUD_COLOUR_MENU_GREY,
	HUD_COLOUR_MENU_GREY_DARK,
	HUD_COLOUR_MENU_HIGHLIGHT,
	HUD_COLOUR_MENU_STANDARD,
	HUD_COLOUR_MENU_DIMMED,
	HUD_COLOUR_MENU_EXTRA_DIMMED,
	HUD_COLOUR_BRIEF_TITLE,
	HUD_COLOUR_MID_GREY_MP
};

enum eBlipDisplay
{
	DISPLAY_FRONTEND_MAP_BLIPS,

};

typedef enum eRelationshipGroup
{
	RELATIONSHIP_GROUP_PLAYER,
	RELATIONSHIP_GROUP_CIVILLIAN_MALE,
	RELATIONSHIP_GROUP_CIVILLIAN_FEMALE,
	RELATIONSHIP_GROUP_COP,
	RELATIONSHIP_GROUP_GANG_ALBANIAN,
	RELATIONSHIP_GROUP_GANG_BIKER1,
	RELATIONSHIP_GROUP_GANG_BIKER2,
	RELATIONSHIP_GROUP_GANG_ITALIAN,
	RELATIONSHIP_GROUP_GANG_RUSSIAN1,
	RELATIONSHIP_GROUP_GANG_RUSSIAN2,
	RELATIONSHIP_GROUP_GANG_IRISH,
	RELATIONSHIP_GROUP_GANG_JAMAICAN,
	RELATIONSHIP_GROUP_GANG_AFRICAN_AMERICAN,
	RELATIONSHIP_GROUP_GANG_KOREAN,
	RELATIONSHIP_GROUP_GANG_CHINESE_JAPANESE,
	RELATIONSHIP_GROUP_GANG_PUERTO_RICAN,
	RELATIONSHIP_GROUP_DEALER,
	RELATIONSHIP_GROUP_MEDIC,
	RELATIONSHIP_GROUP_FIREMAN,
	RELATIONSHIP_GROUP_CRIMINAL,
	RELATIONSHIP_GROUP_BUM,
	RELATIONSHIP_GROUP_PROSTITUTE,
	RELATIONSHIP_GROUP_SPECIAL,
	RELATIONSHIP_GROUP_MISSION_1,
	RELATIONSHIP_GROUP_MISSION_2,
	RELATIONSHIP_GROUP_MISSION_3,
	RELATIONSHIP_GROUP_MISSION_4,
	RELATIONSHIP_GROUP_MISSION_5,
	RELATIONSHIP_GROUP_MISSION_6,
	RELATIONSHIP_GROUP_MISSION_7,
	RELATIONSHIP_GROUP_MISSION_8,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_01,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_02,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_03,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_04,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_05,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_06,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_07,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_08,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_09,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_10,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_11,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_12,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_13,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_14,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_15,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_16,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_17,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_18,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_19,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_20,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_21,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_22,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_23,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_24,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_25,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_26,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_27,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_28,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_29,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_30,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_31,
	RELATIONSHIP_GROUP_NETWORK_PLAYER_32,
	RELATIONSHIP_GROUP_NETWORK_TEAM_1,
	RELATIONSHIP_GROUP_NETWORK_TEAM_2,
	RELATIONSHIP_GROUP_NETWORK_TEAM_3,
	RELATIONSHIP_GROUP_NETWORK_TEAM_4,
	RELATIONSHIP_GROUP_NETWORK_TEAM_5,
	RELATIONSHIP_GROUP_NETWORK_TEAM_6,
	RELATIONSHIP_GROUP_NETWORK_TEAM_7,
	RELATIONSHIP_GROUP_NETWORK_TEAM_8
} eRelationshipGroup;


