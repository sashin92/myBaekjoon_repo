/*
시간 제한	            메모리 제한
0.5 초 (추가 시간 없음)	256 MB
문제
정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을
작성하시오.

명령은 총 다섯 가지이다.

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는
정수가 없는 경우에는 -1을 출력한다. size: 스택에 들어있는 정수의 개수를
출력한다. empty: 스택이 비어있으면 1, 아니면 0을 출력한다. top: 스택의 가장 위에
있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
입력
첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘째 줄부터 N개의
줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다
작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.

출력
출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
*/


// 구현해야 되는 것
#include <ios>
#include <iostream>
#include <stack>
#include <string>
#include <vector>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::stack<int> stk;
    std::vector<int> vec;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        int tmp;
        if (str == "push") {
            std::cin >> tmp;
            stk.push(tmp);
        }
        else if (str == "pop") {
            if (stk.empty())
                vec.push_back(-1);
            else {
                tmp = stk.top();
                stk.pop();
                vec.push_back(tmp);
            }
        }
        else if (str == "size") {
            tmp = stk.size();
            vec.push_back(tmp);
        }
        else if (str == "empty") {
            if (stk.empty())
                vec.push_back(1);
            else
                vec.push_back(0);
        }
        else if (str == "top") {
            if (stk.empty())
                vec.push_back(-1);
            else {
                tmp = stk.top();
                vec.push_back(tmp);
            }
        }
    }
    for (auto node: vec)
        std::cout << node << '\n';
    return 0;
}