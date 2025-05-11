#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
std::string toTitleCase(std::string inputString) {
    std::stringstream ss(inputString);
    std::string word;
    std::string result = "";
    bool firstWord = false;

    while (ss >> word) {
        // Capitalize the first letter
        if (!word.empty()) {
            word[0] = std::toupper(word[0]);
            // Lowercase the rest of the letters
            for (size_t i = 1; i < word.length(); ++i) {
                word[i] = std::tolower(word[i]);
            }
        }

        if (!firstWord) {
            result += "   ";
        }
        result += word;
        firstWord = false;
    }
    return result;
}

int main() {
    std::string strings[] = {
        "Hello World",
        "This Is A CODECHEF Problem",
        "WELCOME To The JUNGLE",
        "The Quick BROWN Fox",
        "Programming In PYTHON"
    };
    int n = sizeof(strings) / sizeof(strings[0]);

    std::cout << "Original Strings:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << strings[i] << std::endl;
    }

    std::cout << "\nTitle Case Strings:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << toTitleCase(strings[i]) << std::endl;
    }

    return 0;
}