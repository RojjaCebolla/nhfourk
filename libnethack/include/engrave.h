/* vim:set cin ft=c sw=4 sts=4 ts=8 et ai cino=Ls\:0t0(0 : -*- mode:c;fill-column:80;tab-width:8;c-basic-offset:4;indent-tabs-mode:nil;c-file-style:"k&r" -*-*/
/* Last modified by Jonadab the Unsightly One, 2017-Nov-15 */
/* Copyright (c) Stichting Mathematisch Centrum, Amsterdam, 1985. */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef ENGRAVE_H
# define ENGRAVE_H

# include "global.h"

struct engr {
    struct engr *nxt_engr;
    char *engr_txt;
    unsigned engr_lth;  /* for save & restore; not length of text */
    long engr_time;     /* moment engraving was (will be) finished */
    xchar engr_x, engr_y;
    xchar engr_type;
# define DUST       1
# define ENGRAVE    2
# define BURN       3
# define MARK       4
# define ENGR_BLOOD 5
# define HEADSTONE  6
# define MAX_RND_ENGR 6 /* ones below here don't occur at random or via poly */
# define ENGR_LIGHTS  7
# define N_ENGRAVE    7
};

# define newengr(lth) malloc((unsigned)(lth) + sizeof(struct engr))
# define dealloc_engr(engr) free((engr))

#endif /* ENGRAVE_H */

