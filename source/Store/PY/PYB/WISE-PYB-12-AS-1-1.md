# Problem  1

## Problem Statement

Write a program to display tic-tac-toe grid and caputure the position entered by the user and then display grid with "x" added in the position given by the user.

## Solution 

### Python

````python

import PySimpleGUI as psg
board = [" ", " ", " ", "x", " ", " ", " ", " ", " ", " "]
def display_board(board):
    layout = [ [psg.Text("   |   |   ")], [psg.Text(" "+board[1]+" | "+board[2]+" | "+board[3]+"  ")], [psg.Text("   |   |   ")], [psg.Text("---|---|---")], [psg.Text("   |   |   ")], [psg.Text(" "+board[4]+" | "+board[5]+" | "+board[6]+"  ")], [psg.Text("   |   |   ") ], [psg.Text("---|---|---")], [psg.Text("   |   |   ")], [psg.Text(" "+board[7]+" | "+board[8]+" | "+board[9]+"  ")], [psg.Text("   |   |   ")],[psg.Text("Enter number between (1- 9) to place x in the grid and to exit from the program")], [psg.InputText('')], [psg.CloseButton("SUBMIT")] ] 
    window = psg.Window('Tic Tac Toe Grid', layout)
    event, values = window.read()
    board[int(values[0])] = "x"
    return board, int(values[0])

value = 0
board, value = display_board(board)
while value != 0:
    board, value = display_board(board)

````

### python - Using Buttons

````python

import PySimpleGUI as sg

move = 'x'
board = [[' ', ' ', ' '], [' ', ' ', ' '], [' ', ' ', ' ']]
layout = [[sg.Button(' ', size=(4, 2), key=(row, col)) for col in range(3)] for row in range(3)] + [[sg.Exit()]]

window = sg.Window('Tic Tac Toe').Layout(layout)
while True:
    event, values = window.Read()
    if event in (None, "Exit"):
        break
    else:
        button = window.Element(event)
        board[event[0]][event[1]] = move
        button.Update(board[event[0]][event[1]])
window.Close()

````
