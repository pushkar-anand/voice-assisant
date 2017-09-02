#!/usr/bin/env python
#
# Copyright 2009-2012 Canonical Ltd.
#
# Authors: Neil Jagdish Patel <neil.patel@canonical.com>
#          Jono Bacon <jono@ubuntu.com>
#          David Planella <david.planella@ubuntu.com>
#
# This program is free software: you can redistribute it and/or modify it
# under the terms of either or both of the following licenses:
#
# 1) the GNU Lesser General Public License version 3, as published by the
# Free Software Foundation; and/or
# 2) the GNU Lesser General Public License version 2.1, as published by
# the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranties of
# MERCHANTABILITY, SATISFACTORY QUALITY or FITNESS FOR A PARTICULAR
# PURPOSE.  See the applicable version of the GNU Lesser General Public
# License for more details.
#
# You should have received a copy of both the GNU Lesser General Public
# License version 3 and version 2.1 along with this program.  If not, see
# <http://www.gnu.org/licenses/>
#
import gi
gi.require_version('Gtk', '3.0')
gi.require_version('AppIndicator3', '0.1')
from gi.repository import Gtk
from gi.repository import AppIndicator3 as appindicator


def build_menu():
    menu = Gtk.Menu()

    item_start = Gtk.MenuItem('Start')
    item_start.connect('activate', start)
    menu.append(item_start)

    item_stop = Gtk.MenuItem('Stop')
    item_stop.connect('activate', stop)
    menu.append(item_stop)

    item_quit = Gtk.MenuItem('Quit')
    item_quit.connect('activate', quit)
    menu.append(item_quit)

    menu.show_all()
    return menu

def start(_):
    #start audio listener
    print "Start"

def stop(_):
    #stop audio listener
    print "Stop"

def quit(_):
    Gtk.main_quit()

if __name__ == "__main__":
  ind = appindicator.Indicator.new (
                        "voice-assistant",
                        "indicator-messages",
                        appindicator.IndicatorCategory.APPLICATION_STATUS)
  ind.set_status (appindicator.IndicatorStatus.ACTIVE)
  ind.set_attention_icon ("user-available")


  ind.set_menu(build_menu())

  Gtk.main()
