#include <iostream>
#include <vector>

using namespace std;

long long int gridWays(long long int n, long long int m) {
    if (n == 1 && m == 1) {
        return 1;
    }
    if (n == 0 || m == 0) {
        return 0;
    }
    return gridWays(n - 1, m) + gridWays(n, m - 1);
}

long long int gridWays2(long long int n, long long int m) {
    vector<vector<long long int>> dp(n + 1, vector<long long int>(m + 1, 0));

    // Base case: There is only one way to reach the top-left corner (start point).
    dp[1][1] = 1;
    

    // Fill the dp vector using a bottom-up approach
    for (auto i = 2; i <= n; i++) {
        for (auto j = 2; j <= m; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[n][m]; // The result is the number of ways to reach the bottom-right corner.
}


int main() {
    long long int n, m;
    cin >> n >> m; // Separate the input values with space or newline

    cout << gridWays2(n, m);
    return 0;
}

