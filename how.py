def howSum (n,ls):
    if n==0:
       return []
       
    if n<0:
       return None
       
    for i in ls:
       if howSum(n-i,ls) != None:
          return howSum(n-i,ls)+[i]
          
    return None
    
def howSum2(n,ls,dp=None):
    
    if dp is None:
       dp={}
    
    if n in dp:
       return dp[n]
       
    if n==0:
       return []
       
    if n<0:
       return None
       
    for i in ls:
       if howSum2(n-i,ls,dp) != None:
          dp[n]=howSum2(n-i,ls,dp)+[i]
          return howSum2(n-i,ls,dp)+[i]
    
    dp[n]=None
    return None
    
print(howSum2(7, [2, 3]))  # Output: True (Possible: 2 + 2 + 3)
print(howSum2(7, [5, 3, 4, 7]))  # Output: True (Possible: 7)
print(howSum2(7, [2, 4]))  # Output: False (Not possible)
print(howSum2(8, [2, 3, 5]))  # Output: True (Possible: 3 + 5)
print(howSum2(300, [7, 14]))  # Output: False (Not possible)

