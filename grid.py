def gridWays(n,m):
    if n==1 and m==1:
       return 1
    if n==0 or m==0:
       return 0
    else:
       return gridWays(n-1,m)+gridWays(n,m-1)


def gridWays2(n,m,dp={}):
    key=str(n)+','+str(m)
    if key in dp:
       return dp[key]
    if m==1 and n==1:
       return 1
    if m==0 or n==0:
       return 0
    
    dp[key]=gridWays2(n,m-1,dp)+gridWays2(n-1,m,dp)
    return dp[key]
    
    
n,m=map(int,input().split())
print(gridWays2(n,m))
