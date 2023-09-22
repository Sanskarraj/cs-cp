#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

int main() {
    ordered_map<char, int> mp;
    mp['g'] = 2;
    mp['h'] = 0;
    mp['z'] = 1;

    // Map ke values ko ek vector mein copy karein
    //std::vector<std::pair<char, int>> vec(mp.begin(), mp.end());

    // Values ke according descending order mein sort karein
    //std::sort(vec.begin(), vec.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
      //  return a.second > b.second;
    //});

    // Descending order mein sorted values ko print karein
    for (const auto& p : mp) {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    return 0;
}

