import PySimpleGUI as psg

def read_input():

    layout = [[psg.InputText('')], [psg.CloseButton("OK"), psg.CloseButton("Cancel")]]
    event, values = psg.Window('Enter a number example', layout).Read()
    print(values[0])

read_input()
