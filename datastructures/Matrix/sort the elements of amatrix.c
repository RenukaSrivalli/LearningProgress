//sort the elements of a matrix
size=int(input());
arr=[[10,20,30,40],[15,25,35,45],[27,29,37,48],[32,33,39,50]];

temp=[0]*(size*size);
k=0;
for i in range(0,size):
    for j in range(0,size):
        temp[k]=arr[i][j];
        k+=1;
temp.sort();
k=0;
for i in range(0,size):
    for j in range(0,size):
        arr[i][j]=temp[k];
        k+=1;
for i in range(0,size):
    for j in range(0,size):
        print(arr[i][j],end=" ");
    print("\n");
