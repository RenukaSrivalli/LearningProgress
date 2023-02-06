import math
import os
import random
import re
import sys



def timeConversion(s):
    # Write your code here
    if s[-2:]=="AM" and s[:2]=='12':
        return '00'+s[2:-2]
    elif(s[-2:]=="AM"):
        return s[:-2];
    elif(s[-2:]=="PM" and s[:2]=='12'):
        return s[:-2];
    else:
      return str( int(s[0:2])+12)+s[2:-2]
s = input()

result = timeConversion(s)
print(result);

  
