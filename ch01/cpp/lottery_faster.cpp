#include <cstdio>
#include <algorithm>

const int MAX_N = 1000;

int n, m;
int k[MAX_N];

bool binary_search(int x) {
  // x の存在しうる範囲は k[l], k[l + 1], ... , k[r - 1]
  int l = 0, r = n;

  // 上記の範囲に何も含まれるなるまで繰り返す
  while (r - l >= 1) {
    int i = (l + r) / 2;
    if (k[i] == x) return true;
    else if (k[i] < x) l = i + 1;
    else r = i;
  }

  // 見つからなければ false を返す
  return false;
}

void solve() {
  // ソートする
  std::sort(k, k + n);

  // 和が m になる組み合わせがあるか？
  bool f = false;

  // ブルートフォース
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      for (int c = 0; c < n; c++) {
        // 二分探索
        if (binary_search(m - k[a] - k[b] - k[c])) {
          f = true;
        }
      }
    }
  }

  // 結果を出力
  if (f) puts("YES!");
  else puts("NO...");
}

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k[i]);
  }

  solve();

  return 0;
}
