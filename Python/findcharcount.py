#lex_auth_01269438070259712046

def count_names(name_list):
    count1=0
    count2=0
    for i in range(0,len(name_list)):
       if("at" in name_list[i]  and len(name_list[i])==3):
            count1+=1;
       else:
          if "at" in name_list[i]:
             count2+=1;
    count2=count1+count2;
    
    #start writing your code here
    #Populate the variables: count1 and count2

    # Use the below given print statements to display the output
    # Also, do not modify them for verification to work
    print("_at -> ",count1)
    print("%at% -> ",count2)


#Provide different names in the list and test your program
name_list=["Hat","Cat","rabbit","matter"]
count_names(name_list)
