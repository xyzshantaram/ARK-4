/*
 * This file is part of PRO CFW.

 * PRO CFW is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * PRO CFW is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PRO CFW. If not, see <http://www.gnu.org/licenses/ .
 */

#ifndef _REBOOTEX_H_
#define _REBOOTEX_H_

#include <rebootconfig.h>

// Reboot Buffer Configuration
extern RebootConfigARK rebootex_config;

extern int (* OrigLoadReboot)(void * arg1, unsigned int arg2, void * arg3, unsigned int arg4);
int LoadReboot(void * arg1, unsigned int arg2, void * arg3, unsigned int arg4);

// Backup Reboot Buffer
void backupRebootBuffer(void);

// Restore Reboot Buffer
void restoreRebootBuffer(void);

#endif

