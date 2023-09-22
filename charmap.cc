#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::map<char, int> mp;
    mp['g'] = 2;
    mp['h'] = 0;
    mp['z'] = 1;

 
    std::vector<char> keys;
    for (const auto& pair : mp) {
        keys.push_back(pair.first);
    }

  
    std::sort(keys.begin(), keys.end(), [&mp](char a, char b) {
        return mp[a] > mp[b];
    });

    for (char key : keys) {
        std::cout << key << ": " << mp[key] << std::endl;
    }

    return 0;
}

