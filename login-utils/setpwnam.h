/*
 *  setpwnam.h --
 *  define several paths
 *
 *  (c) 1994 Martin Schulze <joey@infodrom.north.de>
 *  This file is based on setpwnam.c which is
 *  (c) 1994 Salvatore Valente <svalente@mit.edu>
 *
 *  This file is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 */

#include "pathnames.h"

#ifndef DEBUG
# define PASSWD_FILE	_PATH_PASSWD
# define GROUP_FILE	_PATH_GROUP
# define SHADOW_FILE	_PATH_SHADOW_PASSWD
# define SGROUP_FILE	_PATH_SHADOW_GROUP
#else
# define PASSWD_FILE	"/tmp/passwd"
# define GROUP_FILE	"/tmp/group"
# define SHADOW_FILE	"/tmp/shadow"
# define SGROUP_FILE	"/tmp/gshadow"
#endif

extern int setpwnam (struct passwd *pwd);
