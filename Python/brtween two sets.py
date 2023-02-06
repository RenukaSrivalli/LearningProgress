from collections import Counter
def btwtwosets(a,b):
    list=[]
    sum=0;
    for j in a:
        for i in range(1,101):
            if(i%j==0):
                list.append(i);
    #print(list);
    for j in b:
        for i in range(1,101):
            if(j%i==0):
                list.append(i);
    #print(list)
    c=Counter(list);
    #print(c)
    for i in c.values():
        if i==len(a)+len(b):
            sum+=1;
    
   
    return sum;
a=[1];b=[100]
print(btwtwosets(a,b));
