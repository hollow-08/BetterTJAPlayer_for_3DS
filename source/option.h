﻿#pragma once

typedef struct {

	int lang,buffer_size;
	bool isAuto, isStelth,isSwap,dispFps;
	double speed, random;
	int KEY_A, KEY_B, KEY_DRIGHT, KEY_DLEFT, KEY_DUP, KEY_DDOWN, KEY_R, KEY_L, KEY_X, KEY_Y,
		KEY_ZL, KEY_ZR, KEY_CSTICK_RIGHT, KEY_CSTICK_LEFT, KEY_CSTICK_UP, KEY_CSTICK_DOWN,
		KEY_CPAD_RIGHT, KEY_CPAD_LEFT, KEY_CPAD_UP, KEY_CPAD_DOWN;
} OPTION_T;

enum Lang_knd {
	LANG_JP = 0,
	LANG_EN,
};

enum KEY_KND {
	KEY_NONE = 0,
	KEY_DON,
	KEY_KATSU,
};

enum Text_knd {
	TEXT_ON,
	TEXT_OFF,
	TEXT_EASY,
	TEXT_NORMAL,
	TEXT_HARD,
	TEXT_ONI,
	TEXT_AUTO,
	TEXT_SPEED,
	TEXT_X1,
	TEXT_X2,
	TEXT_X3,
	TEXT_X4,
	TEXT_STELTH,
	TEXT_SWAP,
	TEXT_RANDOM,
	TEXT_R25,
	TEXT_R50,
	TEXT_LANG,
	TEXT_JP,
	TEXT_EN,
	TEXT_BUFFERSIZE,
	TEXT_RESET,
	TEXT_DISP_FPS,
	TEXT_BUTTON_MAPPING,
	TEXT_SCORE,
	TEXT_MAXCOMBO,
	TEXT_PERFECT,
	TEXT_NICE,
	TEXT_BAD,
	TEXT_ROLLCOUNT,
	TEXT_PRESSSTART,
	TEXT_CONTINUE,
	TEXT_STARTOVER,
	TEXT_RETURNSELECT,
};

const char Text[2][64][64] = {
	{
		"ON",
		"OFF",
		"かんたん",
		"ふつう",
		"むずかしい",
		"おに",
		"オート",
		"はやさ",
		"x1",
		"x2",
		"x3",
		"x4",
		"ステルス",
		"あべこべ",
		"ランダム",
		"25%",
		"50%",
		"Lang.",
		"日本語",
		"English",
		"ﾊﾞｯﾌｧｻｲｽﾞ",
		"リセット",
		"fps表示",
		"ボタン割り当て",
		"スコア",
		"最大ｺﾝﾎﾞ数",
		"良",
		"可",
		"不可",
		"連打数",
		"STARTボタンを押して戻る",
		"演奏を続ける",
		"はじめからやり直す",
		"曲選択に戻る"
	},
	{
		"ON",
		"OFF",
		"Easy",
		"Normal",
		"Hard",
		"Extreme",
		"Auto",
		"Speed",
		"x1",
		"x2",
		"x3",
		"x4",
		"Vanish",
		"Inverse",
		"Random",
		"25%",
		"50%",
		"Lang.",
		"日本語",
		"English",
		"BufferSize",
		"Reset",
		"Display fps",
		"Button mapping",
		"Score",
		"MAX Combo",
		"GOOD",
		"OK",
		"BAD",
		"Drumroll",
		"Press START",
		"Continue",
		"Retry",
		"Back to Select song"
	}
};

int get_lang();
void draw_option(u16 px, u16 py, unsigned int key , C2D_Sprite sprites[Sprite_Number]);
void toggle_auto();
void get_option(OPTION_T *TMP);
void init_option();
void load_option(),exit_option(),save_option();