
def caesarCipher(s, k):
    temp=[];
   
    for i in s:
        temp.append(ord(i));
    for i in range(len(s)):
        if 65<=temp[i]<=90:
            temp[i]=(65+(temp[i]-65+k)%26)
        if 97<=temp[i]<=122:
            temp[i]=(97+(temp[i]-97+k)%26)
        
    a=''.join(map(chr,temp));
    return a;
s=" abcdefghijklmnopqrstuvwxyz"
k=int(input())
print(caesarCipher(s,k))
