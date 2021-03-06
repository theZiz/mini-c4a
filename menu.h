 /* This file is part of Sparrow-C4A-Manager.
  * Sparrow3d is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  * 
  * Sparrow3d is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  * 
  * You should have received a copy of the GNU General Public License
  * along with Foobar.  If not, see <http://www.gnu.org/licenses/>
  * 
  * For feedback and questions about my Files and Projects please mail me,
  * Alexander Matthes (Ziz) , zizsdl_at_googlemail.com */

#ifndef _MENU_H
#define _MENU_H
#include <sparrow3d.h>

void draw_menu(spFontPointer font,spFontPointer font_small,spFontPointer font_very_small);
int calc_menu(Uint32 steps);
void start_menu(spFontPointer font,spFontPointer font_small,spFontPointer font_very_small);
void finish_menu();
void set_error_mode(int e);

#endif
