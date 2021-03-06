/*
 * Header for subtitles converter to SSA/ASS
 *
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_SUBASSCONVERT_H
#define MPLAYER_SUBASSCONVERT_H

#include <sys/types.h>

void subassconvert_subrip(const char *orig, char *dest, size_t dest_buffer_size);
void subassconvert_microdvd(const char *orig, char *dest, size_t dest_buffer_size);

#endif
