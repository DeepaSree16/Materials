import curses
scr = curses.initscr()
rows, columns = scr.getmaxyx()
curses.endwin()
print("Rows:", rows)
print("Coloumns:", columns)
