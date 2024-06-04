/*
문제
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000)
M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

출력
한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
*/

#include <cmath>
#include <ios>
#include <iostream>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int min, max;
    std::cin >> min >> max;

    while (min <= max) {
        bool flag = true;
        if (min == 1) {
            flag = false;
            min++;
            continue ;
        }
        int tmpMax = std::sqrt(min);
        for (int i = 2; i <= tmpMax; i++) {
            if (min % i == 0) {
                flag = false;
                break ;
            }
        }
        if (flag)
            std::cout << min << '\n';
        min++;
    }
    return 0;
}

/*
소수 구하는 공식?
2 이상 자신 미만의 수로 나누었을 때 나뉘지 않아야 한다.
*/