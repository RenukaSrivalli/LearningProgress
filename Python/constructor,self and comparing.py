class Computer:
    def __init__(self):
         self.name="renu"
         self.age=28
    def update(self):
        self.age=20;
    def compare(self,c2):
        if(self.age==c2.age):
            print("Same")
        else:
            print("Unequal")
c1=Computer()
print(c1.name)
print(c1.age)

c2=Computer()
c2.update()
print(c2.name)
print(c2.age)
c1.compare(c2)
