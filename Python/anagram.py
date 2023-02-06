#anagram
from collections import Counter;
s="aaabbb"
count=0;
if(len(s)%2!=0):
    print('-1');
else:
        list1=[];
        list2=[];
        for i in range(0,len(s)//2):
            list1.append(s[i])
        for i in range(len(s)//2,len(s)):
            list2.append(s[i]);
        c1=Counter(list1);
        c2=Counter(list2);
        a=c1-c2;
        for i in a.values():
            count=count+i;        
        print(count);
#else:
 #   c=Counter(s[0:len(s)//2])-Counter(s[len(s)//2:])
  #  print(sum(c.values()))b
