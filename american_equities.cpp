// This program tests a password for the American Equities
// web page to see if the format is correct

// Last Modified Date: 5/8/2024

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function prototypes
bool testPassWord(char[]);
int countLowercaseLetters(char*);
int countDigits(char*);

int main() {
    char passWord[20];  // Array to store the password

    // Update prompt for password to new requirements
    cout << "Enter a password consisting of exactly 4 "
         << "lowercase letters and 6 digits:" << endl;
    cin.getline(passWord, 20);  // Read the password

    // Validate the password
    if (testPassWord(passWord))
        cout << "Please wait - your password is being verified" << endl;
    else {
        cout << "Invalid password. Please enter a password "
             << "with exactly 4 lowercase letters and 6 digits" << endl;
        cout << "For example, 1234abcd5678 is valid" << endl;
    }

    // Call countLowercaseLetters and countDigits, and print the results
    int numLetters = countLowercaseLetters(passWord);
    int numDigits = countDigits(passWord);

    cout << "Your password contains " << numLetters << " lowercase letters and "
         << numDigits << " digits." << endl;

    return 0;
}

//**************************************************************
// testPassWord
//
// task: determines if the word in the
// character array passed to it, contains
// exactly 4 lowercase letters and 6 digits.
// data in: a word contained in a character array
// data returned: true if the word contains 4 lowercase letters & 6
// digits, false otherwise
//
//**************************************************************
bool testPassWord(char custPass[]) {
    int numLetters, numDigits, length;

    length = strlen(custPass);  // Get the length of the password
    numLetters = countLowercaseLetters(custPass);  // Count lowercase letters
    numDigits = countDigits(custPass);  // Count digits

    // Check for exactly 4 lowercase letters, 6 digits, and total length of 10
    if (numLetters == 4 && numDigits == 6 && length == 10)
        return true;
    else
        return false;
}

//*******************************************************************
// countLowercaseLetters
//
// task: This function counts the number of lowercase letters
// in the string
// data in: pointer that points to an array of characters
// data returned: number of lowercase letters in the array of characters
//
//*******************************************************************
int countLowercaseLetters(char *strPtr) {
    int occurs = 0;
    while (*strPtr != '\0') {  // Loop until end of string
        if (islower(*strPtr))  // Check if the character is a lowercase letter
            occurs++;
        strPtr++;
    }
    return occurs;
}

//*******************************************************************
// countDigits
//
// task: This function counts the number of digits
// in the string
// data in: pointer that points to an array of characters
// data returned: number of digits in the array of characters
//
//*******************************************************************
int countDigits(char *strPtr) {
    int occurs = 0;
    while (*strPtr != '\0') {  // Loop until end of string
        if (isdigit(*strPtr))  // Check if the character is a digit
            occurs++;
        strPtr++;
    }
    return occurs;
}
