//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	 "~/scripts/dwmblocks/spotify.sh",			30,		0},
	{"  ",	 "~/scripts/dwmblocks/keyboard.sh",			0,		0},
	{"", "~/scripts/dwmblocks/battery.sh",				300,		0},
	{"", "~/scripts/dwmblocks/backlight.sh",			0,		11},
	{"墳  ", "~/scripts/dwmblocks/volume.sh",			0,		10},
	{"", "date '+%b %d %H:%M'",					60,		0},
/*	{"", "~/scripts/dwmblocks/bluetooth.sh",			0,		0},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
