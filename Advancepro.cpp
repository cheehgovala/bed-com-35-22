#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // for std::toupper

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u')
            count++;
    }
    return count;
}

// Function to count words in a string
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (std::isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

// Function to reverse a string
std::string Reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalize) {
                c = std::toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    std::ifstream file("textfile.txt");
    std::string fileData;

    // Check if the file is open
    if (file.is_open()) {
        // Read the entire file into fileData
        std::getline(file, fileData);

        // Close the file
        file.close();

        // Output the number of vowels
        std::cout << "Number of vowels: " << countVowels(fileData) << std::endl;

        // Output the number of words
        std::cout << "Number of words: " << countWords(fileData) << std::endl;

        // Output the statement in reverse
        std::cout << "Reversed statement: " << Reverse(fileData) << std::endl;

        // Output the statement with the second letter capitalized
        std::cout << "Statement with second letter capitalized: " << capitalizeSecondLetter(fileData) << std::endl;
    } else {
        std::cerr << "Unable to open file." << std::endl;
        return 1; // Return error code
    }

    return 0;
}
