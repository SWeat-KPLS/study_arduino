from Arduino import Arduino
import time

ledPin = 13
buttonPin = 11

board = Arduino("9600")
board.pinMode(ledPin, "OUTPUT")
board.pinMode(buttonPin, "INPUT")

while True:
    buttonState = board.digitalRead(buttonPin)
    if buttonState:
        board.digitalWrite(ledPin, "HIGH")
        print("Push")
    else:
        board.digitalWrite(ledPin, "LOW")
    time.sleep(0.1)