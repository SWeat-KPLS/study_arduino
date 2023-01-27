from Arduino import Arduino
import time

buzzerPin = 9

board = Arduino("9600", port="COM3")
board.pinMode(buzzerPin, "OUTPUT")

while True:
    board.digitalWrite(buzzerPin, "HIGH")
    time.sleep(0.001911)
    board.digitalWrite(buzzerPin, "LOW")
    time.sleep(0.001911)