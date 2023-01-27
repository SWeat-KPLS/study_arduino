from Arduino import Arduino
import time

LED_PIN = 13

board = Arduino('9600', port='COM13') # 알맞는 port를 전달해주세요
board.pinMode(LED_PIN, 'OUTPUT')

while True:
    board.digitalWrite(LED_PIN, 'LOW')
    time.sleep(1)
    board.digitalWrite(LED_PIN, 'HIGH')
    time.sleep(1)