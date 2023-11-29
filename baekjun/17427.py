import sys

num = int(sys.stdin.readline())

result = 0

for i in range(1, num + 1):
    result += (num // i) * i
print(result)

#잘 생각 해보면 문제를 먼저 수학적으로 분석하는 것이 중요하다.
#주어진 시간을 보고 0.5 초 이면 nlog(n)도 안되는 것이다. 단지 o(n)만 가능

#밑에는 기존에 생각한 알고리즘
# import math

# num = int(input())


# def f(x):
#     li = []
#     repeat = math.sqrt(x)
#     for i in range(1, int(repeat) + 1):
#         if x % i == 0:
#             li.append(i)
#             if i != x / i:
#                 li.append(int(x / i))
#     return sum(li)


# out = [0 for i in range(num)]

# for i in range(1, num + 1):
#     result = f(i)
#     out[i - 1] = result

# print(sum(out))
