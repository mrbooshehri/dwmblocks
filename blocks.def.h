//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",	 "~/scripts/dwmblocks/checkupdate.sh",			3600,		0},
	{"", "~/scripts/dwmblocks/battery.sh",				300,		0},
	{"", "~/scripts/dwmblocks/backlight.sh",			0,		11},
	{" ", "~/scripts/dwmblocks/volume.sh",				0,		10},
	{"  ", "date '+%b %d'",					60,		0},
	{" ", "date '+%H:%M'",						60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
// 
static unsigned int delimLen = 5;
