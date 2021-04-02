static const Block blocks[] = {
  /*Icon*/  /*Command*/                               /*Update Interval*/ /*Update Signal*/
  {"\11 ",    "/usr/local/bin/scripts/dwm/bar/music",       10,                 11},
  {"\12 ",   "/usr/local/bin/scripts/dwm/bar/volume",      60,                 12},
  {"⚡ ",  "/usr/local/bin/scripts/dwm/bar/battery",     10,                 13},
  {" ",   "/usr/local/bin/scripts/dwm/bar/temperature", 10,                 14},
  {" ",   "date '+\%Y-\%m-\%d'",                        600,                15},
  {" ",   "date '+\%H:\%M:\%S'",                        1,                  16},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
