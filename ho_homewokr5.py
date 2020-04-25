import turtle
import math
import random

##20143175 조성호 과제1##
a = int(input("a 입력 : "))
b = int(input("b 입력 : "))

if a == b:
    print("a와 b는 같다")
elif a > b:
    print("a가 b 보다", a - b, "만큼 더 크다")
else:
    print("b가 a 보다 ", b - a, "만큼 더 크다")

##20143175 조성호 과제2##
choice_list = ["가위", "바위", "보"]
ai = random.choice(choice_list)
user = input("무엇을 내시겠습니까?")
result = ""
if user in choice_list:
    if user == ai:
        result = "무승부"
    elif user == choice_list[0]:
        if ai == choice_list[2]:
            result = "승리"
        else:
            result = "패배"
    elif user == choice_list[1]:
        if ai == choice_list[0]:
            result = "승리"
        else:
            result = "패배"
    elif user == choice_list[2]:
        if ai == choice_list[1]:
            result = "승리"
        else:
            result = "패배"
    else:
        result = "Error"
    print("컴퓨터는 ", ai, "를 냈고")
    print("결과는", result, "입니다")
else:
    print("잘못입력하셨습니다", choice_list, "중에서 하나를 선택해주세요")
###20143175 조성호 과제3###
t = turtle.Turtle()
a = int(turtle.textinput("입력창", "변1:"))
b = int(turtle.textinput("입력창", "변2:"))
c = int(turtle.textinput("입력창", "변3:"))
angle_upper = math.degrees(math.atan(b / a))
angle_under = 90 - angle_upper
if a * a + b * b == c * c:
    a = 10 * a
    b = 10 * b
    c = 10 * c
    t.forward(a)
    t.left(90)
    t.forward(b)
    t.left(90 + angle_upper)
    t.forward(c)
    t.left(90 + angle_under)
else:
    t.write("직각삼각형이 아닙니다.")
