#include <cstdio>
#include <algorithm>

const int MAX_L = 1000000;
const int MAX_N = 1000000;

int L, n;
int x[MAX_N];

void solve() {
  // 最小時間
  int min_time = 0;
  for (int i = 0; i < n; i++) {
    min_time = std::max(min_time, std::min(x[i], L - x[i]));
  }

  // 最大時間
  int max_time = 0;
  for (int i = 0; i < n; i++) {
    max_time = std::max(max_time, std::max(x[i], L - x[i]));
  }

  // 表示
  printf("min_time: %d, max_time: %d\n", min_time, max_time);
}

int main() {
  scanf("%d %d", &L, &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  solve();

  return 0;
}
