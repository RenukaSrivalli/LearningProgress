class Students:
    college="sasi"
    def __init__(self,name,age):
        self.name=name;
        self.age=age;
s1=Students("renu",18)
s2=Students("renu",18)
print(s1.name);
print(s1.age);
s1.name="anil"
print(s1.name);
print(s2.name)
s1.college="vasavi"
print(s1.college);
print(s2.college)


