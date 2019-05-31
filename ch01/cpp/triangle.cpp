#include <cstdio>
#include <algorithm>

const int MAX_N = 100;
int n, edge[MAX_N];

int solve() {
  int max_perimeter = 0;

  // 棒は重複して選ばないようにする
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int perimeter = edge[i] + edge[j] + edge[k];  // 周囲の長さ
        int longest_edge = std::max(edge[i], std::max(edge[j], edge[k])); // 最長の辺
        int rest = perimeter - longest_edge;  // その他2辺の和
        
        if (rest > longest_edge) {
          max_perimeter = std::max(max_perimeter, perimeter);
        }
      }
    }
  }

  return max_perimeter;
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &edge[i]);
  }

  int max_perimeter = solve();

  printf("%d\n", max_perimeter);

  return 0;
}
