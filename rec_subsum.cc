#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void func(int index, int sum, vector<int>& arr, int N, vector<int>& subsum) {
        if (index == N) {
            subsum.push_back(sum);
            return;
        }
        func(index + 1, sum + arr[index], arr, N, subsum);
        func(index + 1, sum, arr, N, subsum);
    }

public:
    vector<int> subSums(vector<int>& arr, int N) {
        vector<int> subsum;
        func(0, 0, arr, N, subsum);
        sort(subsum.begin(), subsum.end());
        return subsum;
    }
};

int main() {
    vector<int> a = {3,4,2};
    Solution obj;
    vector<int> z = obj.subSums(a, 3);

    for (auto i : z) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

