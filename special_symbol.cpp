// Check if a character is a special symbol (not digit or letter)
// Input: char ch
// Approach:if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z') && !(ch >= '0' && ch <= '9'))
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is a special symbol
    if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && 'z') && !(ch >= '0' && ch <= '9')) {
        cout << "The character '" << ch << "' is a special symbol." << endl;
    } else {
        cout << "The character '" << ch << "' is not a special symbol." << endl;
    }
    return 0;
}

