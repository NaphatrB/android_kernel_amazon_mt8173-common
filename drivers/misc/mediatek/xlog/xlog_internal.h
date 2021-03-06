/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#if !defined(_XLOG_INTERNAL_H)
#define _XLOG_INTERNAL_H

#define XLOG_MODULE_MAX 1024
#define XLOG_MODULE_NAME_MAX_LEN 64

/* Default mask
 * Layer   XLOG    LOG
 * Kernel: VERBOSE VERBOSE
 * Native: DEBUG   VERBOSE
 * Java  : VERBOSE VERBOSE
 */
#define XLOGF_DEFAULT_LEVEL 0x00223222

#define XLOGF_FIND_MODULE   11
#define XLOGF_SET_LEVEL     12
#define XLOGF_GET_LEVEL     13
#define XLOGF_TAG_SET_LEVEL 14

struct xlogf_tag_offset {
	char name[XLOG_MODULE_NAME_MAX_LEN];
	int offset;
};

struct xlogf_tag_entry {
	char name[XLOG_MODULE_NAME_MAX_LEN];
	u32 level;
};

struct avl {
	struct avl *left;
	struct avl *right;
	struct avl *parent;
	char name[XLOG_MODULE_NAME_MAX_LEN];
	int offset;
	int depth;
};

int xLog_isOn(const char *name, int level);

void xLog_set(const char *name, int level, int status);

#define LOGGER_LOG_KSYSTEM      "log_ksystem"	/* MTK kernel messages */

#endif
