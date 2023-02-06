def find_correct(word_dict):
    #start writing your code here
    lists=[];
    count=0;
    equal=0;
    unequal=0;
    almost=0;
    for i,k in word_dict.items():
     count=0;
     if(i==k):
       equal+=1;
     elif(abs(len(i)-len(k))>=1):
      unequal+=1;
   
     else:
      
       for j in range(0,len(i)):
        if(i[j]==k[j]):
         continue;
        else:
         count+=1;
       if(count<=2):
        almost+=1;
       else:
        unequal+=1;
    lists.append(equal);
    lists.append(almost);
    lists.append(unequal);
    return lists;
      
word_dict={'MIND': 'MUND', 'CHECK': 'CHEK', 'RADIO': 'RADICAL', 'ALWAYS': 'ALLISWELL', 'VENDOR': 'VENDING'}
print(find_correct(word_dict))
