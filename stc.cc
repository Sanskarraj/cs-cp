#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<std::string> words;
    size_t start = 0;
    size_t end = input.find('.');
    while (end != std::string::npos) {
        words.push_back(input.substr(start, end - start));
        start = end + 1;
        end = input.find('.', start);
    }
    words.push_back(input.substr(start));

    std::reverse(words.begin(), words.end());

    std::string output = "";
    for (const std::string& word : words) {
        output += word;
        if (word != words.back()) {
            output += '.';
        }
    }

    std::cout << output << std::endl;

    return 0;
}

