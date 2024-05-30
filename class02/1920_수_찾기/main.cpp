/*
문제
N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지
알아내는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 N(1 ≤ N ≤ 100,000)이 주어진다. 다음 줄에는 N개의 정수 A[1],
A[2], …, A[N]이 주어진다. 다음 줄에는 M(1 ≤ M ≤ 100,000)이 주어진다. 다음 줄에는
M개의 수들이 주어지는데, 이 수들이 A안에 존재하는지 알아내면 된다. 모든 정수의
범위는 -231 보다 크거나 같고 231보다 작다.

출력
M개의 줄에 답을 출력한다. 존재하면 1을, 존재하지 않으면 0을 출력한다.
*/

#include <iostream>
#include <set>
#include <vector>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::vector<int> vecNum;
    std::vector<bool> vecBool;
    std::set<int> setNum;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        setNum.insert(tmp);
    }
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp;
        std::cin >> tmp;
        if (setNum.find(tmp) != setNum.end())
            vecBool.push_back(true);
        else
            vecBool.push_back(false);
    }
    for (auto node: vecBool) {
        std::cout << node << '\n';
    }
    return 0;
}

// set이 이렇게 좋습니다.