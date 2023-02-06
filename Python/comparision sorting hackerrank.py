def countingSort(arr):
    # Write your code here
    res=[0]*100;
    for i in range(0,len(arr)):
        res[arr[i]]+=1;
    return res;
arr=[1,1,3,2,1]
ans=countingSort(arr)
print(ans);
