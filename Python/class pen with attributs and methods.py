class pen:
    price=10;
    color="red"
    cname="softek"
    def draw(self):
         print("Drawing");
    def write(self):
        print("Writing");
p=pen();
print(p.price)
print(p.color)
print(p.cname)
p.draw();
p.write();
p1=pen();
p.draw()
