def canSum(n,ls):
   if n==0 : 
       return True
   if n<0:
       return False
   for i in ls:
        if canSum(n-i,ls) ==True:
           return True
          
   return False
   
import copy

def canSum2(n, ls, dp={}):
    if n in dp:
        return dp[n]

    if n == 0:
        return True

    if n < 0:
        return False

    for i in ls:
        new_dp = copy.copy(dp)  # Create a new copy of the dp dictionary for each recursive call
        if canSum2(n - i, ls, new_dp):
            dp[n] = True
            return True

    dp[n] = False
    return False


print(canSum(7, [2, 3]))  # Output: True (Possible: 2 + 2 + 3)
print(canSum(7, [5, 3, 4, 7]))  # Output: True (Possible: 7)
print(canSum(7, [2, 4]))  # Output: False (Not possible)
print(canSum(8, [2, 3, 5]))  # Output: True (Possible: 3 + 5)
print(canSum(300, [7, 14]))  # Output: False (Not possible)

