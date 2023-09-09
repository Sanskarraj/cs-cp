#include <bits/stdc++.h>
using namespace std;

int main() {
    string word1 = "intention";
    string word2 = "execution";

    for (int i = 0; i < word2.size(); i++) {
        int j = 0;  // Moved the initialization of j outside of the inner loop
        while (j < word1.size()) {
            if (word1[j] == word2[i]) {
                word1.erase(j, 1);
                cout << word1 << "\n";
            } else {
                j++; // Move to the next character
            }
        }
    }

    cout << "Modified word1: " << word1 << "\n";

    return 0;
}

