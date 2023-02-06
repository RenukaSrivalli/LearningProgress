#lex_auth_01269442027919769669

#Global variables
child_id=(10,20,30,40,50)
chocolates_received=[12,5,3,4,6]

def calculate_total_chocolates():
    num=0
    for i in range(0,len(chocolates_received)):
      num=num+chocolates_received[i];
    return num
    #Remove pass and write your logic here to find and return the total number of chocolates

def reward_child(child_id_rewarded,extra_chocolates):
     if(extra_chocolates<1):
        print("Extra chocolates is less than 1");
        
     elif(child_id_rewarded not in child_id):
       print( "Child id is invalid");
       
     else:
         choco=extra_chocolates+chocolates_received[child_id.index(child_id_rewarded)]
         chocolates_received[child_id.index(child_id_rewarded)]=choco
         print(chocolates_received)
    #Remove pass and write your logic here


    # Use the below given print statements to display the output
    # Also, do not modify them for verification to work

    #print("Extra chocolates is less than 1")
    #print("Child id is invalid")
    #print(chocolates_received)


print(calculate_total_chocolates())
#Test your code by passing different values for child_id_rewarded,extra_chocolates
reward_child(20,2)
