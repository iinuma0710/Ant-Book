MAX_L = 1000000
MAX_N = 1000000

# 標準入力から n, edge を取得
L = int(input())
n = int(input())
x = []
for i in range(n):
    x.append(int(input()))

min_time = 0
max_time = 0
for i in range(n):
    min_time = max([min_time, min(x[i], L - x[i])])
    max_time = max([max_time, max(x[i], L - x[i])])

print("min_time: ", min_time, ", max_time: ", max_time)
