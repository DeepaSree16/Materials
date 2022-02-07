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

