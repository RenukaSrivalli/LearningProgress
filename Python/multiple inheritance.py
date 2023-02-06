class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age

class Child(Person):
    print("I am a child");
class Student(Child):
    print("I am a student")
s=Student("renu",54)
