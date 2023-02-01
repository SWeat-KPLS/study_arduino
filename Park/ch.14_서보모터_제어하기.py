from Arduino import Arduino
import time

servoPin = 9

board = Arduino("9600", port = "COM5")
board.Servos.attach(servoPin)

while True:
    board.Servos.write(servoPin, 0)
    time.sleep(1)
    board.Servos.write(servoPin, 90)
    time.sleep(1)
    board.Servos.write(servoPin, 180)
    time.sleep(1)
    board.Servos.write(servoPin, 90)
    time.sleep(1)