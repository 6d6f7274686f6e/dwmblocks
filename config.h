static const Block blocks[] = {
  /*Icon*/  /*Command*/                               /*Update Interval*/ /*Update Signal*/
  {"",     "/usr/local/bin/scripts/dwm/bar/music",       5,                  11},
  {"  ",  "/usr/local/bin/scripts/dwm/bar/volume",      60,                 12},
  {" ⚡ ", "/usr/local/bin/scripts/dwm/bar/battery",     5,                  13},
  {"  ",  "/usr/local/bin/scripts/dwm/bar/temperature", 5,                  14},
  {"  ",  "/usr/local/bin/scripts/dwm/bar/calendar",    600,                15},
  {"  ",  "/usr/local/bin/scripts/dwm/bar/time",        1,                  16},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " |";
static char *adminscriptspath = "/usr/local/sbin/scripts";
static char *dwmscriptspath   = "/usr/local/bin/scripts/dwm";
