//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",	 "~/Repos/github.com/mrbooshehri/dot/scripts/checkupdate",			3600,		0},
	{"", "~/Repos/github.com/mrbooshehri/dot/scripts/battery",				300,		0},
	{"", "~/Repos/github.com/mrbooshehri/dot/scripts/backlight",			0,		11},
	{"", "~/Repos/github.com/mrbooshehri/dot/scripts/volume",				0,		10},
	{"  ", "date '+%b %d'",					60,		0},
	{" ", "date '+%H:%M'",						60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
// 
static unsigned int delimLen = 5;
