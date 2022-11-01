from tkinter import *
from tkinter import ttk
import random
from colors import *

# Main window 
window = Tk()
window.title("Sorting Algorithms Visualization")
window.maxsize(1000, 700)
window.config(bg = WHITE)


algorithm_name = StringVar()
# algo_list is to select which alforithm we want to use to sort
algo_list = ['Bubble Sort', 'Merge Sort']


speed_name = StringVar()
# speed_list is for selecting sorting speed
speed_list = ['Fast', 'Medium', 'Slow']

# This empty list will be filled with random values every time we generate a new array
data = []

# This function will draw randomly generated list data[] on the canvas as vertical bars
def drawData(data, colorArray):
    pass

# This function will generate array with random values every time we hit the generate button
def generate():
    pass

# This function will set sorting speed
def set_speed():
    pass

# This funciton will trigger a selected algorithm and start sorting
def sort():
    pass


UI_frame = Frame(window, width= 900, height=300, bg=WHITE)
UI_frame.grid(row=0, column=0, padx=10, pady=5)

# dropdown to select sorting algorithm 
l1 = Label(UI_frame, text="Algorithm: ", bg=WHITE)
l1.grid(row=0, column=0, padx=10, pady=5, sticky=W)
algo_menu = ttk.Combobox(UI_frame, textvariable=algorithm_name, values=algo_list)
algo_menu.grid(row=0, column=1, padx=5, pady=5)
algo_menu.current(0)

# dropdown to select sorting speed 
l2 = Label(UI_frame, text="Sorting Speed: ", bg=WHITE)
l2.grid(row=1, column=0, padx=10, pady=5, sticky=W)
speed_menu = ttk.Combobox(UI_frame, textvariable=speed_name, values=speed_list)
speed_menu.grid(row=1, column=1, padx=5, pady=5)
speed_menu.current(0)


window.mainloop()