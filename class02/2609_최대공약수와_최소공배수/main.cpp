/*
문제
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을
작성하시오.

입력
첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한
칸의 공백이 주어진다.

출력
첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두
수의 최소 공배수를 출력한다.
*/

#include <iostream>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m, tmp;
    std::cin >> n >> m;
    if (n < m) {
        tmp = m;
        m = n;
        n = tmp;
    }
    
    int gcd {}, lcm {};
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    lcm = n * m / gcd;

    std::cout << gcd << ' ' << lcm << '\n';

    return 0;
}