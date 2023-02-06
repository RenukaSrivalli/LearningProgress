def calculate_bill_amount(food_type,quantity_ordered,distance_in_kms):
    bill_amount=0
    #write your logic here
    if(quantity_ordered<=0 or distance_in_kms<=0):
        bill_amount=-1
    if(food_type=="N" and quantity_ordered>=1 and distance_in_kms>=1 ):
       if(distance_in_kms>0 and distance_in_kms<4 ):
          bill_amount=bill_amount+(150*quantity_ordered)+0;
       elif(distance_in_kms>3 and distance_in_kms<7 ):
          bill_amount=bill_amount+(150*quantity_ordered)+((distance_in_kms-3))*3;
       elif(distance_in_kms>6):
           bill_amount=bill_amount+(150*quantity_ordered)+((distance_in_kms-6)*6)+9
    if(food_type=="V" and quantity_ordered>=1 and distance_in_kms>=1):
       if(distance_in_kms>0 and distance_in_kms<4 ):
          bill_amount=bill_amount+(120*quantity_ordered)+0;
       elif(distance_in_kms>3 and distance_in_kms<7 ):
          bill_amount=bill_amount+(120*quantity_ordered)+((distance_in_kms-3))*3;
       elif(distance_in_kms>6):
           bill_amount=bill_amount+(120*quantity_ordered)+((distance_in_kms-6)+6)+9
        
    return bill_amount
bill_amount=calculate_bill_amount("N",1,7)
print(bill_amount)
