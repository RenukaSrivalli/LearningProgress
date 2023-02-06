count=0;
c={1:2,2:2,3:1}
ans=max(c.values())
print(ans)
for i in c.values():
    if(ans==i):
        count+=1;
print(count)
