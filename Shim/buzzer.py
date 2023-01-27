from Arduino import Arduino
import time

buzzerPin1 = 9

board = Arduino("9600")
board.pinMode(buzzerPin1, "OUTPUT")

while True:
    i = 0
    while i < 10000:
        board.digitalWrite(buzzerPin1, "HIGH")
        time.sleep(0.000955)
        board.digitalWrite(buzzerPin1, "LOW")
        time.sleep(0.000955)
        i += 1
        time.sleep(0.0001)
    while i > 0:
        board.digitalWrite(buzzerPin1, "HIGH")
        time.sleep(0.003822)
        board.digitalWrite(buzzerPin1, "LOW")
        time.sleep(0.003822)
        i -= 1
        time.sleep(0.0001)
    
    