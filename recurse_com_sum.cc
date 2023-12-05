#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombination(int index, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {

        if (index == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        if (arr[index] <= target) {
            ds.push_back(arr[index]);
            findCombination(index, target - arr[index], arr, ans, ds);
            ds.pop_back();
        }
        findCombination(index + 1, target, arr, ans, ds);

    }

public:
    vector<vector<int>> comSum(vector<int>& cand, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, cand, ans, ds);
        return ans;
    }
};

int main() {
    vector<int> a = { 1,2, 3, 6, 7};
    Solution obj;
    vector<vector<int>> z = obj.comSum(a, 8);

    for (auto i : z) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

