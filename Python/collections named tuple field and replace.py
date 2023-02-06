from collections import namedtuple
x=namedtuple('student',['name','age','gender'])
y=x('harshi',19,'female')
#gets all the keys
print(y._fields)
#replaces one value
print(y._replace(name='anu'))
