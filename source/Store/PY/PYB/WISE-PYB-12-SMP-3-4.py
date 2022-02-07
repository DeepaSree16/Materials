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








