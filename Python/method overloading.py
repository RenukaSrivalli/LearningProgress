class A:
    def show(self):
        print("In A");
class B(A):
    def show(self):
        print("In B")
        super().show()
b=B()
b.show()
