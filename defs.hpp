//
// codename Morning Star
//
// Copyright (C) 2010 - 2012 by Ignacio Riquelme Morelle <shadowm2006@gmail.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//

#ifndef DEFS_HPP
#define DEFS_HPP

#include "wesnothrc.hpp"

extern QStringList			mos_color_range_names;
extern QList<color_range>	mos_color_ranges;

extern QList<QRgb>			mos_pal_magenta;
extern QList<QRgb>			mos_pal_flag_green;
extern QList<QRgb>			mos_pal_ellipse_red;

extern QString mos_color_range_id_to_name(int n);
extern const color_range& mos_color_range_from_id(int n);

#endif // DEFS_HPP
