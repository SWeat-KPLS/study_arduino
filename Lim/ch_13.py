from Arduino import Arduino
import time

tempPin = 0

board = Arduino("9600", port="COM3")

while True:
    value = board.analogRead(tempPin)
    print "value: ", value

    millivolts = (value / 1024.0) * 5000.0
    celsius = (millivolts - 500.0) / 10.0

    print "celsius: ", celsius
    time.sleep(1)