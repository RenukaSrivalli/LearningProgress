a=[[1, 3, 5], [2, 6, 9], [3, 6, 9]]
temp=[0]*(len(a)*len(a));
k=0;
for i in range(len(a)):
    for j in range(len(a)):
        temp[k]=a[i][j];
        k+=1;
temp.sort();
print(temp);
if((len(a)%2)!=0):
    print(a[len(a)//2]);
else:
     print(a[(len(a)+1)//2]);
    
