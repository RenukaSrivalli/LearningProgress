from collections import namedtuple
x=namedtuple('courses',['name','language','year'])
y=x('Datascince','python',3)
#Accesing by index
print(y[0])
#Accesing by name
print(y.name)
#Accesing by getattr
print(getattr(y,'name'))


