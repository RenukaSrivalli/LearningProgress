#lex_auth_01269444961482342489

def sms_encoding(data):
    #start writing your code here
    vowels="aeiouAEIOU"
    st="";
    word=data.split();
    for i in word:
       if(len(i)==1):
          st=st+i;
       else:
         for j in i:
            if j not in set(vowels):
                st=st+j;
       st=st+" "
    return st[0:-1]
data="I love Python"
print(sms_encoding(data))
