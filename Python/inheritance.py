class Persons:
    def __init__(self,name,age):
        self.name=name;
        self.age=age;
    def fun(self):
        print("My name is "+self.name);
class Employee(Persons):
     def fun1(self):
         print("I am a Employee")
obj=Employee("renu",18)
obj.fun()
obj.fun1()
