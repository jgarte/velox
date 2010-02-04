/* velox: velox/tag.h
 *
 * Copyright (c) 2009, 2010 Michael Forney <michael@obberon.com>
 *
 * This file is a part of velox.
 *
 * velox is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License version 2, as published by the Free
 * Software Foundation.
 *
 * velox is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along
 * with velox.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef VELOX_TAG_H
#define VELOX_TAG_H

#include <xcb/xcb.h>

#include <libvelox/loop.h>
#include <velox/layout.h>

struct velox_tag
{
    uint64_t id;
    const char * name;
    struct velox_loop * layout;
    struct velox_loop * windows;
    struct velox_loop * focus;
    struct velox_layout_state state;
};

extern struct velox_list * tags;

void setup_tags();
void cleanup_tags();

void set_tag_1();
void set_tag_2();
void set_tag_3();
void set_tag_4();
void set_tag_5();
void set_tag_6();
void set_tag_7();
void set_tag_8();
void set_tag_9();

void move_focus_to_tag_1();
void move_focus_to_tag_2();
void move_focus_to_tag_3();
void move_focus_to_tag_4();
void move_focus_to_tag_5();
void move_focus_to_tag_6();
void move_focus_to_tag_7();
void move_focus_to_tag_8();
void move_focus_to_tag_9();

#endif

// vim: fdm=syntax fo=croql et sw=4 sts=4 ts=8
