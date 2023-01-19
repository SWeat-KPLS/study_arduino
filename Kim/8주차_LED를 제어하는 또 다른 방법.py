from Arduino import Arduino
import time

ledPin = 11

board = Arduino("9600", port = "COM8")
board.pinMode(ledPin, "OUTPUT")

while True:
    brightness = 0
    while brightness < 255:
        board.analogWrite(ledPin, brightness)
        brightness = brightness + 1
        time.sleep(0.01)
    while brightness > 0:
        board.analogWrite(ledPin, brightness) 
        brightness = brightness - 1
        time.sleep(0.01)