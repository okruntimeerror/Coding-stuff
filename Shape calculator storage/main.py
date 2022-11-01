from tkinter import *




#window for program
window = Tk()
window.title("Shape calculator")
window = tk.Canvas (window, width = 400, height = 300) 
window.config(bg = "white")

n = int(0)

Options = [
    "add one",
    "subtract one",
    ]



variable = StringVar(window1)


w = OptionMenu(window1, variable, *Options)
w.pack()

def ok():
    print("value is:" + variable.get())

def plus():
    print(n + 1)

def minus():
    print(n - 1)

button = Button(window1, text = "OK", command = ok)
button.pack()

button = Button(window1, text = "+1", command = plus)
button.pack()

button = Button(window1, text = "-1", command = minus)
button.pack() 



mainloop() 
