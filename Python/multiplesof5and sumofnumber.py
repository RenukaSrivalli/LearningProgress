#lex_auth_012693813706604544157

def find_max(num1, num2):
    max_num=-1
    lists=[]
    sum=0;
    # Write your logic here
    for i in range(num1+1,num2+1):
      n=i;
      if(len(str(i))==2):
          sum=0;
          while(n>0):
               rem=n%10;
               sum=sum+rem;
               n=n//10;
          
          if(sum%3==0 and i%5==0 ):
            lists.append(i);
    if(len(lists)>=1):
      max_num=max(lists);
    
    return max_num

#Provide different values for num1 and num2 and test your program.
max_num=find_max(10,15)
print(max_num)
