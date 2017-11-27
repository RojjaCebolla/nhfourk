/* vim:set cin ft=c sw=4 sts=4 ts=8 et ai cino=Ls\:0t0(0 : -*- mode:c;fill-column:80;tab-width:8;c-basic-offset:4;indent-tabs-mode:nil;c-file-style:"k&r" -*-*/
/* Last modified by Jonadab the Unsightly One, 2017-Nov-21 */
/* Copyright (c) Stichting Mathematisch Centrum, Amsterdam, 1985. */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef UNIXCONF_H
# define UNIXCONF_H

# ifdef AIMAKE_BUILDOS_MSWin32
#  error !AIMAKE_FAIL_SILENTLY! This file is only of use on UNIX-like systems.
# endif

# include <time.h>

# include "system.h"

# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <strings.h>

# define strncmpi(a,b,c) strncasecmp(a,b,c)

#endif/* UNIXCONF_H */

