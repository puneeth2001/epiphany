/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 *  Copyright © 2016 Gabriel Ivascu <ivascu.gabriel59@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EPHY_PASSWORD_NOTIFICATION_H
#define EPHY_PASSWORD_NOTIFICATION_H

#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

#define EPHY_TYPE_PASSWORD_NOTIFICATION (ephy_password_notification_get_type ())

G_DECLARE_FINAL_TYPE (EphyPasswordNotification, ephy_password_notification, EPHY, PASSWORD_NOTIFICATION, GtkGrid)

EphyPasswordNotification *ephy_password_notification_new  (const char *user);

void                      ephy_password_notification_show (EphyPasswordNotification *self);

G_END_DECLS

#endif