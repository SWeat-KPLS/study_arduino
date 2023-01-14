from Arduino import Arduino
import time

BLED = 9
LIGHT = 0
val = 0

board = Arduino('9600')
board.pinMode(BLED, 'OUTPUT')
board.pinMode(LIGHT, 'INPUT')

while True :
    val = board.analogRead(LIGHT)
    print(val)
    board.analogWrite(BLED, int((val*255)/600))
    time.sleep(0.05)