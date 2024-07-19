// Last Modified Date: 5/8/2024


#include <iostream>
#include <string>

using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to prompt the user and validate input
bool promptAndValidateInput(string& input) {
    cout << "Enter a string (up to 50 characters): ";
    getline(cin, input);

    if (input.length() > 50) {
        cout << "Input too long. Please enter up to 50 characters." << endl;
        return false;  // Input is not valide
    }
    return true;  // Input is valid
}

int main() {
    string input;
    if (!promptAndValidateInput(input)) {
        return 1;  // Exit if input is not valid
    }

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
