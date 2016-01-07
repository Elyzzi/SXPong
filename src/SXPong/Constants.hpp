#pragma once

#include "stdafx.h"

// Network related constants
#define PORT 8763
#define BUFFERSIZE 512
#define CONNECTIONBROADCASTMSG 101
#define FOUNDYOUMSG 102
#define WAITINGFORSTARTMSG 103
#define YOUTAKEBALLMSG 104
#define IHAVEBALLMSG 105
#define YOUSCOREDMSG 106
#define YOUWONMSG 107
#define MULTICASTADDRESS "239.0.13.37"

// Game mechanic-related constants
#define BALL_STARTING_X 50
#define BALL_STARTING_Y 50
#define BALL_WIDTH 2
#define BALL_HEIGHT 3
#define BALL_R 0.3
#define LEFTPLAYER_X 10
#define RIGHTPLAYER_X 90
#define PLAYER_STARTING_Y 40
#define PLAYER_WIDTH 1.5
#define PLAYER_HEIGHT 17
#define MAXBOUNCEANGLE 1.22173
#define BALLMAXSPEED 90
#define BALLMINIMUMSPEED 10
#define ROUNDS_TO_WIN 5
#define PLAYERSPEED 100

// GUI related constants
#define SCREEN_WIDTH  800
#define SCREEN_HEIGHT 600
#define ONE_PERCENT_X (static_cast<double>(SCREEN_WIDTH) / 100)
#define ONE_PERCENT_Y (static_cast<double>(SCREEN_HEIGHT) / 100)
#define ASPECTRATIOQUOTE (static_cast<double>(SCREEN_WIDTH) / SCREEN_HEIGHT)
#define SEACROSS_ICON_WIDTH 15
#define SEACROSS_ICON_HEIGHT 20
#define BOARD_TOP 6
#define BOARD_BOTTOM 94
#define BOARD_THICKNESS 2

#define LEFTPLAYER_BUTTON_ID 200
#define RIGHTPLAYER_BUTTON_ID 201
#define MAINMENU_BUTTON_ID 202
#define RESTART_BUTTON_ID 203

#define NUMOFBALLVERTICES 94

# define PI 3.14159265358979323846
