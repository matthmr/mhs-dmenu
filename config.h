/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrains Mono:size=12:antialias=true"
};
static const char dprompt[]    = "run: ";
static const char *prompt      = (const char*)dprompt;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#8e8e8e", "#1a1a1a" },
	[SchemeSelHighlight] = { "#eeeeee", "#303030" },
	[SchemeNormHighlight] = { "#eeeeee", "#1a1a1a" },
	[SchemeSel] = { "#eeeeee", "#303030" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

// static int centered = 0;                    * -c option; centers dmenu on screen *
static int min_width = 700;                    /* minimum width when centered */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]{}:;";
static unsigned int border_width = 2;

static int chosen = 1;
static int out_of = 0;
static int out_ofcp = 0;
