static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "memory", 5, 16},
	{"", "clock", 60, 1},
	{"", "battery", 1, 10},
	{"", "volume", 1, 11},
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
