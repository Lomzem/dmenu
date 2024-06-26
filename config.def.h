/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMonoNL Nerd Font,JetBrainsMonoNL NF:style=Regular:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

#include "/home/lomzem/.cache/wal/colors-wal-dmenu.h"

// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { "#bbbbbb", "#222222" },
// 	[SchemeSel] = { "#eeeeee", "#005577" },
// 	[SchemeSelHighlight] = { "#ffc978", "#005577" },
// 	[SchemeNormHighlight] = { "#ffc978", "#222222" },
// 	[SchemeOut] = { "#000000", "#00ffff" },
// };

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 30;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
