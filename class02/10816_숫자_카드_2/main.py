"""
문제
숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 몇 개 가지고 있는 숫자 카드인지 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 M개의 수에 대해서, 각 수가 적힌 숫자 카드를 상근이가 몇 개 가지고 있는지를 공백으로 구분해 출력한다.

예제 입력 1 
10
6 3 2 10 10 10 -10 -10 7 3
8
10 9 -5 2 3 4 5 -10
예제 출력 1 
3 0 0 1 2 0 0 2
"""

# 딕셔너리로 갯수 저장
lstSize = int(input())
lst = list(map(int, input().split()))

searchSize = int(input())
searchLst = list(map(int, input().split()))

lstToDict = {}
for node in lst:
    if node in lstToDict:
        lstToDict[node] += 1
    else:
        lstToDict[node] = 1

result = []
for node in searchLst:
    result.append(lstToDict.get(node, 0))

print(str(result).removeprefix("[").removesuffix("]").replace(",", ""))



# 이진탐색
# def lower_bound(array, target, start, end):
#     while start < end:
#         mid = (start + end) // 2
#         if array[mid] >= target:
#             end = mid
#         else:
#             start = mid + 1
#     return end

# def upper_bound(array, target, start, end):
#     while start < end:
#         mid = (start + end) // 2
#         if array[mid] > target:
#             end = mid
#         else:
#             start = mid + 1
#     return end

# lstSize = int(input())
# lst = list(map(int, input().split()))
# lst.sort()

# searchSize = int(input())
# searchLst = list(map(int, input().split()))

# result = []
# for node in searchLst:
#     lower = lower_bound(lst, node, 0, lstSize)
#     upper = upper_bound(lst, node, 0, lstSize)
#     result.append(upper - lower)

# print(" ".join(map(str, result)))