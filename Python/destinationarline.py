#lex_auth_012693763253788672132

def generate_ticket(airline,source,destination,no_of_passengers):
    list=[]
    #Write your logic here
   
    k=(no_of_passengers+101)-5
   
    if(no_of_passengers>=5):
     for i in range(k,k+5):
        string="";
        string=string+airline[0:2]+":"+source[0:3]+":"+destination[0:3]+":"+str(i)
        list.append(string);
    else:
     for i in range(101,101+no_of_passengers):
        string="";
        string=string+airline[0:2]+":"+source[0:3]+":"+destination[0:3]+":"+str(i)
        list.append(string);
        

    #Use the below return statement wherever applicable
    return list

#Provide different values for airline,source,destination,no_of_passengers and test your program
print(generate_ticket("AI","Bangalore","London",7))
