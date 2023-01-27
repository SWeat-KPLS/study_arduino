from Arduino import Arduino
import time

board = Arduino('9600')
board.pinMode(13, "OUTPUT")
board.pinMode(12, "OUTPUT")
board.pinMode(11, "OUTPUT")

while True:
    board.digitalWrite(13, "HIGH")
    time.sleep(1)
    board.digitalWrite(13, "LOW")
    time.sleep(1)
    board.digitalWrite(12, "HIGH")
    time.sleep(1)
    board.digitalWrite(12, "LOW")
    time.sleep(1)
    board.digitalWrite(11, "HIGH")
    time.sleep(1)
    board.digitalWrite(11, "LOW")
    time.sleep(1)