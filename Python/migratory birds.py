from collections import Counter
arr=[1,4,4,4,5,3]
list=[]
c=Counter(arr)
ans=max(c.values())
for i,j in c.items():
        if(j==ans):
            list.append(i);
    
print(min(list));
