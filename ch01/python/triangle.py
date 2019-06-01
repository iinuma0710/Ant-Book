MAX_N = 100

# 標準入力から n, edge を取得
n = int(input())
edge = []
for i in range(n):
    edge.append(int(input()))

# 最大周長の初期化
max_perimeter = 0

for i in range(0, n):
    for j in range(i + 1, n):
        for k in range(j + 1, n):
            perimeter = edge[i] + edge[j] + edge[k]
            longest = max(edge)
            rest = perimeter - longest

            if rest > longest:
                max_perimeter = max([max_perimeter, perimeter])

print(max_perimeter)
