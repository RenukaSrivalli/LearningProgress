from collections import deque
li=deque([1,2,3,4,5,6])
li.extend([7,8,9])
li.extendleft([10,11,12])
print(li)
li.rotate(1)
print(li)
li.reverse();
print(li)
