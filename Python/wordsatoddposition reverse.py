#lex_auth_01269444195664691284

def encrypt_sentence(sentence):
    #start writing your code here
    l=sentence.split(' ');
    st=""
    s=""
    v="aeiouAEIOU"
    k=1;
    for i in l:
        if(k%2!=0):
            rev=i[::-1]
            
            st=st+rev
            if(k==1):
              st=st+" "
            k+=1;
            
        
            
        else:
           for j in range(0,len(i)):
              
              if i[j] not in set(v):
                 s=s+i[j]
          
                 
           for j in range(0,len(i)):
              if i[j] not in s:
                 s=s+i[j]
                 
           s=s+" "
           st=st+s;
           s=" "

            
              
           k+=1;
    st=st.strip()
    
    return st;
    

sentence="The sun rises in the east"
encrypted_sentence=encrypt_sentence(sentence)
print(encrypted_sentence)
