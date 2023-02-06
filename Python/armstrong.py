import math
num=153
sum=0;
temp=num
num1=num
count=0;
while(num1!=0):
    #rem1=num1%10;
    count+=1;
    num1=num1//10;
num=temp;
while(num!=0):
    rem=num%10;
    sum=sum+math.pow(rem,count)
    num=num//10;
if(sum==temp):
    print("Armstrong")
else:
    print("Not an Armstring")
