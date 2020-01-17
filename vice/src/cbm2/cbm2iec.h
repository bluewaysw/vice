/*
 * cbm2iec.h - IEC bus handling.
 *
 * Written by
 *  Andreas Boose <viceteam@t-online.de>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_CBM2IEC_H
#define VICE_CBM2IEC_H

extern void cbm2iec_init(void);

# if (defined(DEBUG) || defined(WIN32_COMPILE) || defined(OS2_COMPILE))
void debug_iec_drv_read(unsigned int data);
void debug_iec_drv_write(unsigned int data);
void debug_iec_bus_read(unsigned int data);
void debug_iec_bus_write(unsigned int data);
# endif

#endif
