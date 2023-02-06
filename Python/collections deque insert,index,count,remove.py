from collections import deque
li=deque([1,2,3,4])
#index
print(li.index(3,2,4))
#insert()
li.insert(4,3)
print(li)
#remove()
li.remove(3)
print(li)

#count()
print(li.count(3))
