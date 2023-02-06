class Persons:
    def __init__(self,name,age):
        self.name=name;
        self.age=age
    def fun(self):
      print("My name is"+self.name);
      print("My age is"+str(self.age));
class Student(Persons):
    def __init__(self,name,age):
        Persons.__init__(self,name,age)
    def stu(self):
        print("I am a student");
s=Student("renu",20)
s.fun()
s.stu()
