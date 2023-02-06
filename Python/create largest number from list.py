#lex_auth_01269441913243238467

def create_largest_number(number_list):
    number_list.sort(reverse=True)
 
    string=""
    #remove pass and write your logic here
    for i in range(0,len(number_list)):
      string=string+str(number_list[i]);
    return int(string);
number_list=[23,45,67]
largest_number=create_largest_number(number_list)
print(largest_number)
