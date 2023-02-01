from Arduino import Arduino
import time

bufferPin = 9

board = Arduino("9600", port = "COM3")
board.pinMode(bufferPin, "OUTPUT")

while True:
    board.digitalWrite(bufferPin, "High")
    time.sleep(0.0001911)
    board.digitalWrite(bufferPin, "LOW")
    time.sleep(0.0001911)