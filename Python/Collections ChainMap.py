from collections import ChainMap
dict1={'name':'siva','age':19,'gender':'male'}
dict2={'name':12,'stream':'MPC'}
cm=ChainMap(dict1,dict2)
print(list(cm))

