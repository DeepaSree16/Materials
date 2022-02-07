import PySimpleGUI as psg

layout = [[psg.Text("Hello World!!!")]]
event, values = psg.Window('Enter a number example', layout).Read()
psg.Popup(event, values[0])
