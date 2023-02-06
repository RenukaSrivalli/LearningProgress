import creatingmodule
ans=creatingmodule.add(2,3)
from creatingmodule import *#all will be imported
from creatingmodule import add#only add function will be imported
ans=add(2,3) no need of . if we imported like above 2
print(ans)
