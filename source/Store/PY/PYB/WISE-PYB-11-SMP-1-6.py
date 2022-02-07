#!/usr/bin/env python
import curses

scr = curses.initscr() # Intilization of curses
scr.keypad(0) # To ensure curses is doing its work
curses.noecho() # to be able to read keys and only display them under certain circumstances.

scr.addstr("hello world") # takes a Python string or bytestring as the value to be displayed.
scr.refresh() #  to update the physical screen display.
scr.getch() # To get input from the window

curses.endwin() # Terminating a curser
