from Arduino import Arduino
import time

ledPin = 13
buttonPin = 11

board = Arduino("9600", port = "COM8") # 보드의 통신 속도, 포트 설정
board.pinMode(ledPin, "OUTPUT") #13번은 출력
board.pinMode(buttonPin, "INPUT") #11번은 입력

while True:
    buttonState = board.digitalRead(buttonPin) #13번 버튼 읽기
    if buttonState: # 13번 버튼 1이면
        board.digitalWrite(ledPin, "HIGH")
        print("Push!")
    else:
        board.digitalWrite(ledPin, "LOW")
    time.sleep(0.01) # 종료 -> 0.01초동안 기다린 후, 다시 
