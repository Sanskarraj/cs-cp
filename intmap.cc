#include <iostream>
#include <map>

int main() {
    // Ek map declare karein, jisme keys integers aur values strings hain, descending order mein
    std::map<int, std::string, std::greater<int>> myMap;

    // Map mein key-value pairs insert karein
    myMap[3] = "Three";
    myMap[2] = "Two";
    myMap[1] = "One";

    // Map mein existing key ki value update karein
    myMap[2] = "NewTwo";
    myMap[4]="A";

    // Map ke keys aur unke corresponding values ko iterate karein
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}

