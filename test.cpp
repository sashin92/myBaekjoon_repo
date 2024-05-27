#include <ios>
#include <iostream>
#include <vector>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::vector<int> vec;


  int test_count = 0;
  std::cin >> test_count;
  int h, w, n;
  for (int i = 0; i < test_count; i++) {
    std::cin >> h >> w >> n;
    int result = 0;
    result = (n - 1) / h + 1;
    result += ((n - 1) % h + 1) * 100;
    vec.push_back(result);
  }
  for (int node: vec) {
    std::cout << node << '\n';
  }
}
