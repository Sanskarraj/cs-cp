#include <iostream>
#include <unordered_map>
#include <vector>

bool canSum(int n, const std::vector<int>& ls, std::unordered_map<int, bool>& dp) {
    if (dp.find(n) != dp.end()) {
        return dp[n];
    }

    if (n == 0) {
        return true;
    }

    if (n < 0) {
        return false;
    }

    for (int i : ls) {
        if (canSum(n - i, ls, dp)) {
            dp[n] = true;
            return true;
        }
    }

    dp[n] = false;
    return false;
}


bool canSum2(int n, const std::vector<int>& ls) {
    if (n == 0) {
        return true;
    }

    if (n < 0) {
        return false;
    }

    for (int i : ls) {
        if (canSum2(n - i, ls)) {
            return true;
        }
    }

  
    return false;
}




int main() {
    
    //std::cout << std::boolalpha;  // To print 'true' or 'false' instead of '1' or '0'

    int arr1[] = {2, 4};
    int arr2[] = {2, 3};
    int arr3[] = {5, 4, 3, 7};
    int arr4[] = {7, 21};

    std::cout << canSum2(7, std::vector<int>(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]))) << std::endl;  // Output: false
    //dp.clear();
    std::cout << canSum2(7, std::vector<int>(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]))) << std::endl;  // Output: true
    //dp.clear();
    std::cout << canSum2(7, std::vector<int>(arr3, arr3 + sizeof(arr3) / sizeof(arr3[0]))) << std::endl;  // Output: true
    //dp.clear();
    std::cout << canSum2(900, std::vector<int>(arr4, arr4 + sizeof(arr4) / sizeof(arr4[0]))) << std::endl;  // Output: false

    return 0;
}

