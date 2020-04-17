# 20143175 조성호 과제 1#
import turtle

score = []
score.append(int(input("국어 점수는: ")))
score.append(int(input("수학 점수는: ")))
score.append(int(input("영어 점수는: ")))
score.append(int(input("과학 점수는: ")))
score.append(int(input("사회 점수는: ")))

print("입력 자료: ", score)

score.sort()
score_sorted = score
score_sorted.reverse()
score_avg = sum(score_sorted) / len(score_sorted)


print("정렬 자료: ", score_sorted)
print("평균 점수: ", score_avg)

# 20143175 조성호 과제 2#
t = turtle.Turtle()
tri_color = ["red", "green", "blue"]
tri_side_len = 100
tri_angle = 60

t.fillcolor(tri_color[0])
t.begin_fill()
t.left(tri_angle)
t.forward(tri_side_len)
t.right(tri_angle * 2)
t.forward(tri_side_len)
t.right(tri_angle * 2)
t.forward(tri_side_len)
t.end_fill()
t.left(tri_angle * 3)
t.forward(tri_side_len)

t.fillcolor(tri_color[1])
t.begin_fill()
t.left(tri_angle)
t.forward(tri_side_len)
t.right(tri_angle * 2)
t.forward(tri_side_len)
t.right(tri_angle * 2)
t.forward(tri_side_len)
t.end_fill()
t.left(tri_angle * 3)
t.forward(tri_side_len)

t.fillcolor(tri_color[2])
t.begin_fill()
t.left(tri_angle)
t.forward(tri_side_len)
t.right(tri_angle * 2)
t.forward(tri_side_len)
t.right(tri_angle * 2)
t.forward(tri_side_len)
t.end_fill()
