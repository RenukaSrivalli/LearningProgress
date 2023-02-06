#lex_auth_012693797166096384149

def find_leap_years(given_year):
   list=[]
   count=1;
   i=given_year
   while(count<=15):
      
      if(i%4==0):
         if(i%100==0):
            if(i%400==0):
               list.append(i);
               count+=1;
               i+=1;
            else:
              i+=1;
         else:
           list.append(i);
           count+=1;
           i+=1;
      else:
        i+=1;
   return list;
           
      
           
   
    # Write your logic here

    

list_of_leap_years=find_leap_years(2000)
print(list_of_leap_years)
