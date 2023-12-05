    MOD = 10**9 + 7


def findDistinctStrings(s):
    MOD = pow(10,9)+7
    dp={}
    last={}
    dp[-1] = 1 #no strings
    for i in range(len(s)):
        if(s[i] in last): # s[i] has been seen before, in last[s[i]]
            dp[i] = (2*dp[i-1] - dp[last[s[i]]-1] + MOD)%MOD
        else: #this character s[i] has not been seen before
            dp[i] = (2*dp[i-1])%MOD
        last[s[i]] = i
    return dp[len(s)-1]-1-1 #excluding the empty string

# Taking input
s = input().strip()

# Running the code
result = findDistinctStrings(s)
print(result)

