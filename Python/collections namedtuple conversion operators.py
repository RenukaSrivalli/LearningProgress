from collections import namedtuple
x=namedtuple('student',['name','age','gender'])
y=x('renu',19,'female')
#using _make() whicj converts normal list to namedtuple
li=['anil',20,'male']

print(x._make(li))
#using _asdict() which converts namedtuple to dict
print(y._asdict())
#using ** which converts dictionary to named tuple
dict={'name':'siva','age':18,'gender':'male'}
print(x(**dict))



