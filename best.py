def bestSum(n,ls,dp=None):
   if dp is None:
      dp={}
     
   if n in dp:
     return dp[n]
     
   if n==0:
     return []
     
   if n<0:
     return None
     
   arr=None
   
     
   for i in ls:
      if bestSum(n-i,ls,dp) != None:
         z=bestSum(n-i,ls,dp)+[i]
         if arr==None or len(arr)>len(z):
            arr=z
         
   dp[n]=arr
   return arr
         

print(bestSum(7, [2, 3]))  # Output: True (Possible: 2 + 2 + 3)
print(bestSum(7, [5, 3, 4, 7]))  # Output: True (Possible: 7)
print(bestSum(7, [2, 4]))  # Output: False (Not possible)
print(bestSum(8, [2, 3, 5]))  # Output: True (Possible: 3 + 5)
print(bestSum(300, [7, 14]))  # Output: False (Not possible)
print(bestSum(8, [5, 1,6]))  # Output: False (Not possible)
print(bestSum(100, [7,5,10]))  # Output: False (Not possible)
