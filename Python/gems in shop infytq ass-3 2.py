#lex_auth_012693795044450304151
import math
def calculate_bill_amount(gems_list, price_list, reqd_gems,reqd_quantity):
    bill_amount=0
    #Write your logic here
    for i in range(0,len(reqd_gems)):
      if reqd_gems[i] not in gems_list:
        bill_amount=-1;
        break;
      else:
     
         bill_amount=bill_amount+(reqd_quantity[i]*price_list[gems_list.index(reqd_gems[i])])
         
    if(bill_amount>30000):
           bill_amount=bill_amount-(bill_amount*5)/100;
  
    return bill_amount

#List of gems available in the store
gems_list=['Amber', 'Aquamarine', 'Opal', 'Topaz']

#Price of gems available in the store. gems_list and price_list have one-to-one correspondence
price_list=[4392, 1342, 8734, 6421]

#List of gems required by the customer
reqd_gems=['Amber', 'Opal', 'Topaz']

#Quantity of gems required by the customer. reqd_gems and reqd_quantity have one-to-one correspondence
reqd_quantity=[2, 1, 3]

bill_amount=calculate_bill_amount(gems_list, price_list, reqd_gems, reqd_quantity)
print(bill_amount)
