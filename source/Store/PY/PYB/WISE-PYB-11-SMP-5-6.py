import curses
scr = curses.initscr()
CharUserInput = scr.getch()
StringUserInput = scr.getstr()
curses.endwin()

print("char user input:", chr(CharUserInput))
print("String user input:", StringUserInput)
