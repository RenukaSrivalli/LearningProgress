ar=[1,2,1,2,1,3]
count=0
count1=0;
mylist=set(ar);
for i in mylist:
        count=0;
        for j in ar:
            if(i==j):
                count+=1;
                if count%2==0:
                     count1+=1;
print( count1);

