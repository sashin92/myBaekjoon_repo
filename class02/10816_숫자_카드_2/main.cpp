/*
문제
숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고
있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고
있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다.
둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적혀있는 수는
-10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 몇 개 가지고
있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져
있다. 이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가
몇 개 가지고 있는지를 공백으로 구분해 출력한다.
*/

#include <ios>
#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <vector>
int main() {
    std::cin.tie(0);
    std::ios_base::sync_with_stdio(false);

    std::multiset<int> mulSet;
    
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        mulSet.insert(tmp);
    }
    int m;
    std::cin >> m;
    std::vector<int> vec;
    std::string str{};
    for (int i = 0; i < m; i++) {
        int tmp;
        std::cin >> tmp;
        if (mulSet.find(tmp) != mulSet.end()) {
            auto range = mulSet.equal_range(tmp);
            int val = std::distance(range.first, range.second);
            vec.push_back(val);
        }
        else
            vec.push_back(0);
        str.append(" ");
    }
    for (auto node: vec) {
        std::cout << node << ' ';
    }
        std::cout << '\n';

    return 0;
}