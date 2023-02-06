
num=[1,2,3,4]

list=[]
sort_index=[]

for i in range(0,len(num)):
    res=num[i];
    j=1;
    count=0;
    while(j<=4):
        rem=res%2;
        res=res//2;
        if(rem==1):
          count+=1;
        j+=1;
    list.append(count);
list2=sorted(list1)
for x in list:
      sort_index.append(index[x])
print(sort_index)
    


    
