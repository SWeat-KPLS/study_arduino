from Arduino import Arduino
import time

board = Arduino('9600')
board.pinMode(8, "INPUT")

while True:
    val = board.analogRead(8)
    print(val)
    time.sleep(0.5)