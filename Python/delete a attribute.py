class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
p=Person("renu",12);
print(p.name)
print(p.age)
del p
print(p.name)
print(p.age)
