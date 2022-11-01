import keyboard
import time
import pyautogui

seconds = float(0)
true = 1
time.sleep(1)
pyautogui.click(2095,602)

pyautogui.keyDown("s")
time.sleep(0.01)
pyautogui.keyDown("d")
time.sleep(0.01)
pyautogui.keyUp("s")
time.sleep(0.01)
pyautogui.keyDown(";")
pyautogui.keyUp(";")
pyautogui.keyUp("d")

while true == 0:
    
    input("put in your move")

    if input == ("v"):
        gunflame()

        
def gunflame():
    pyautogui.keyDown("s")
    time.sleep(0.01)
    pyautogui.keyDown("d")
    time.sleep(0.01)
    pyautogui.keyUp("s")
    time.sleep(0.01)
    pyautogui.keyDown(";")
    pyautogui.keyUp(";")
    pyautogui.keyUp("d")
    




