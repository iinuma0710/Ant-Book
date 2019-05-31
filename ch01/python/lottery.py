MAX_N = 10

# 標準入力から値を取得
n = int(input())
m = int(input())
k = []
for i in range(n):
    k.append(int(input()))

# 条件を満たす組み合わせがあるか？
f = False

# ブルートフォース
for a in range(n):
    for b in range(n):
        for c in range(n):
            for d in range(n):
                if k[a] + k[b] + k[c] + k[d] == m:
                    f = True

if (f):
    print("YES!")
else:
    print("NO...")
