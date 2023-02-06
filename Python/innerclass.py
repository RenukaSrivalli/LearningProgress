class Student:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    class Education:
        def __init__(self):
            self.clas="B.Tech"
            self.college="Sasi"
        
            
name=input();
age=int(input());
s=Student(name,age)
print(s.name)
print(s.age)
e=Student.Education()
print(e.clas)
print(e.college)
