from Arduino import Arduino
import time

cdsPin = 0
ledPin = 11

board = Arduino("9600", port = "COM8")
board.pinMode(ledPin, "OUTPUT")

while True:
    cdsValue = board.analogRead(cdsPin)
    print(cdsValue)
    if cdsValue < 80:
        board.digitalWrite(ledPin, "HIGH")
    else:
        board.digitalWrite(ledPin, "LOW")
    time.sleep(0.01)