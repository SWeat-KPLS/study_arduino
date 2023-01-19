from Arduino import Arduino
import time

cdsPin = 0
ledPin = 13

board = Arduino("9600")
board.pinMode(ledPin, "OUTPUT")

while True:
    cdsValue = board.analogRead(cdsPin)
    if cdsValue < 500:
        board.digitalWrite(ledPin, "HIGH")
    else:
        board.digitalWrite(ledPin, "LOW")
    time.sleep(0.01)