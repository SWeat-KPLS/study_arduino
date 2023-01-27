from Arduino import Arduino
import time

tempPin = 0

board = Arduino("9600", port = "COM5")

while True:
    value = board.analogRead(tempPin)
    print("value: ", value)

    millivolts = (value / 1024.0) * 5000.0
    celsius = millivolts / 10.0

    print("celsius: ", celsius)
    time.sleep(1)