# Problem 1

## Problem Statement

Write a program to get the size of the screen using curses.

## Solution

### Python

````python

import curses
scr = curses.initscr()
rows, columns = scr.getmaxyx()
curses.endwin()
print("Rows:", rows)
print("Coloumns:", columns)

````
# Problem 2

## Problem Statement

Write a program to capture user entered data from the window using curses.

## Solution

### Python

````python

import curses
scr = curses.initscr()
CharUserInput = scr.getch()
StringUserInput = scr.getstr()
curses.endwin()

print("char user input:", chr(CharUserInput))
print("String user input:", StringUserInput)

````

# Problem 3

## Problem Statement

Write a program to display tic-tac-toe grid and caputure the position entered by the user and then display grid with "x" added in the position given by the user.

## Solution

### Python

````python
import curses
import time
stdscr = curses.initscr() # Intilization of curses
board = [" ", " ", " ", "x", " ", " ", " ", " ", " ", " "]
ascii_to_number = {49: 1, 50: 2, 51: 3, 52: 4, 53: 5, 54: 6, 55: 7, 56: 8, 57: 9 }

def display_board(stdscr, board):
    stdscr.addstr (3, 4,"   |   |   ")
    stdscr.addstr (4, 4, " "+board[1]+" | "+board[2]+" | "+board[3]+"  ")
    stdscr.addstr (5, 4, "   |   |   ")
    stdscr.addstr (6, 4, "---|---|---")
    stdscr.addstr (7, 4,"   |   |   ")
    stdscr.addstr (8, 4, " "+board[4]+" | "+board[5]+" | "+board[6]+"  ")
    stdscr.addstr (9, 4, "   |   |   ")
    stdscr.addstr (10, 4, "---|---|---")
    stdscr.addstr (11, 4, "   |   |   ")                
    stdscr.addstr (12, 4, " "+board[7]+" | "+board[8]+" | "+board[9]+"  ")
    stdscr.addstr (13, 4, "   |   |   ") 

display_board(stdscr, board)
curses.echo()
stdscr.addstr(18, 0, "Enter grid number to place x value (grid numbering starts from 1)")
uinput = (ascii_to_number[stdscr.getch()])
if board[uinput] == "x":
    stdscr.addstr(15, 4,"Place is already occupied")
board[uinput] = "x"
display_board(stdscr, board)
stdscr.refresh()
time.sleep(1)
curses.endwin() # Terminating a curser

````
