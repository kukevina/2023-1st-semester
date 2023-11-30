'''
처음 생각했을 땐 cursor를 움직이면서 진행하면 될거라 생각했다.
그러나 index값이 커질 수록 연산에 드는 시간이 많이 걸리기 때문에 다르게 생각을 해야 했다.
cursor를 만들지말고 , cursor를 기준으로 left와 right로 나누어 연산하면 시간복잡도가 줄어든다.

import sys
from collections import deque

result = deque()
init = sys.stdin.readline().strip("\n")
for i in range(len(init)):
    result.append(init[i])

commandNum = int(sys.stdin.readline())

cursor = len(result)

for i in range(commandNum):
    command = list(sys.stdin.readline().split(' '))

    if command[0] == 'P':
        result.insert(cursor, str(command[1].strip("\n")))
        cursor += 1
    elif command[0] == 'L\n':
        cursor -= 1
        if cursor < 0:
            cursor = 0
    elif command[0] == 'D\n':
        cursor += 1
        if cursor >= len(result) + 1:
            cursor = len(result)
    elif command[0] == 'B\n':
        if cursor > 0:
            cursor -= 1
            del result[cursor]

for i in range(len(result)):
    print(result[i], end="")

'''

from collections import deque
import sys

left = deque(sys.stdin.readline().strip("\n"))
right = deque()
commandNum = int(sys.stdin.readline())

for i in range(commandNum):
    command = list(sys.stdin.readline().split(' '))

    if command[0] == 'L\n':
        if len(left) > 0:
            right.appendleft(left.pop())
    elif command[0] == 'D\n':
        if len(right) > 0:
            left.append(right.popleft())
    elif command[0] == 'B\n':
        if len(left) > 0:
            left.pop()
    else:
        left.append(str(command[1]).strip("\n"))

print(''.join(left) , end = "")
print(''.join(right))
