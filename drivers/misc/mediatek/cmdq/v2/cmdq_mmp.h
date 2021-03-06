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

#ifndef __CMDQ_MMP_H__
#define __CMDQ_MMP_H__

#include <linux/mmprofile.h>
#include "cmdq_core.h"

typedef struct {
	MMP_Event CMDQ;
	MMP_Event CMDQ_IRQ;
	MMP_Event thread_en;
	MMP_Event warning;
	MMP_Event loopBeat;
	MMP_Event autoRelease_add;
	MMP_Event autoRelease_done;
	MMP_Event consume_add;
	MMP_Event consume_done;
	MMP_Event alloc_task;
	MMP_Event wait_task;
	MMP_Event wait_thread;
	MMP_Event MDP_reset;
	MMP_Event thread_suspend;
	MMP_Event thread_resume;
} CMDQ_MMP_Events_t;

void cmdq_mmp_init(void);
CMDQ_MMP_Events_t *cmdq_mmp_get_event(void);

#endif				/* __CMDQ_MMP_H__ */
