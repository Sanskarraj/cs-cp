def canSum(n, ls, dp=None):
    if dp is None:
        dp = {}

    if n in dp:
        return dp[n]

    if n == 0:
        return True

    if n < 0:
        return False

    for i in ls:
        if canSum(n - i, ls, dp):
            dp[n] = True
            return True

    dp[n] = False
    return False

if __name__ == "__main__":
    print(canSum(7, [2, 4]))  # Output: False
    print(canSum(7, [2, 3]))  # Output: True
    print(canSum(7, [5, 4, 3, 7]))  # Output: True
    print(canSum(300, [7, 21]))  # Output: False

