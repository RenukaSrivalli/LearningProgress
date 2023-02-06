#lex_auth_0127382283825971201450
from collections import Counter
def max_frequency_word_counter(data):
  
   datafin=data.lower()
   lists=[];
   maxlength=0;
   ind=0;
   for i in datafin.split(' '):
     lists.append(i);
   ans=Counter(lists);
   val=list(ans.values());
   key=list(ans.keys());
   maxval=max(val)
   indexes=val.index(maxval)
   if(val.count(maxval)>1):
     for i in range(0,len(val)):
       if(maxval==val[i]):
          length=len(key[i]);
          if(length>maxlength):
            maxlength=length
           
            ind=i;
     print(key[ind],maxval)
   else:
     print(key[indexes],maxval)
   
   
    
    
    
    

    #start writing your code here
    #Populate the variables: word and frequency


    # Use the below given print statements to display the output
    # Also, do not modify them for verification to work
   


#Provide different values for data and test your program.
data="data-Hands to clap and eyes to see"
max_frequency_word_counter(data)
