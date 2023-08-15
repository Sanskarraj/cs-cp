#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> find(vector<string> Arr, int N, int K) {
    sort(Arr.begin(), Arr.end(), greater<string>());
    return Arr;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<string> Arr;
    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        Arr.push_back(input);
    }
    
    vector<string> Arr1 = find(Arr, N, K);
    for (int i = 0; i < K; i++) {
        cout << Arr1[i] << " ";
    }
    
    return 0;
}

