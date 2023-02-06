
r=int(input("Enter no of rows"))
c=int(input("Enter no of columns"))
matrix1=[]
matrix2=[];
sum=[[0,0,0],[0,0,0],[0,0,0]]
print("Enter matrix 1 elements")
for i in range(r):
    a=[]
    for j in range(c):
       a.append(int(input()))
    matrix1.append(a)
print("Enter matrux2 elements")
for i in range(r):
    b=[]
    for j in range(c):
       b.append(int(input()))
    matrix2.append(b)
print("Matrix-1 is");
for i in range(r):
    for j in range(c):
        print(matrix1[i][j],end=" ");
    print()
print("matrix-2 is");
for i in range(r):
    for j in range(c):
        print(matrix2[i][j],end=" ");
    print()


for i in range(r):
    for j in range(c):
        sum[i][j]=matrix1[i][j]+matrix2[i][j];
print("sum is")
for i in range(r):
    for j in range(c):
        print(sum[i][j],end=" ");
    print()

