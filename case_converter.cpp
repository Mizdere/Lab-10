
// Last Modified Date: 5/8/2024

#include <iostream>
using namespace std;

int main() {
    char last[10];  // Array to hold the last name, space for 10 characters

    cout << "Please enter your last name (up to 9 characters): ";
    cin.getline(last, 10);  // Read up to 9 characters + null terminator

    // Output the name back to the user
    cout << "You entered: " << last << endl;

    return 0;
}
