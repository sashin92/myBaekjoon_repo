/*
문제
2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, x좌표가
같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는
i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상
정수이고, 위치가 같은 두 점은 없다.

출력
첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.
*/

#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> vec_pair;

  for (int i = 0; i < n; i++) {
    std::pair<int, int> node;
    std::cin >> node.first >> node.second;
    vec_pair.push_back(node);
  }
  std::sort(vec_pair.begin(), vec_pair.end(),
            [](std::pair<int, int> node1, std::pair<int, int> node2) {
              if (node1.first == node2.first) {
                return node1.second < node2.second;
              }
              return node1.first < node2.first;
            });
    for (auto node: vec_pair) {
        std::cout << node.first << ' ' << node.second << '\n';
    }

  return 0;
}