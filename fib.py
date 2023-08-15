def fib(n):
   if n>=3:
     return fib(n-1)+fib(n-2)
   else:
      return 1
      
      
def fib2(n):
  dp=[]
  dp.append(1)
  dp.append(1)
  for i in range(2,n+1):
     dp.append(dp[i-1]+dp[i-2])
  return dp[n-1]
  
  
print(fib2(int(input())))
