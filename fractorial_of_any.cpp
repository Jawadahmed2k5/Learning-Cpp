// Check if a number is a factorial of any number (1 to 6)
// Input: Integer
// Approach:
// Compare input with known factorials: 1, 2, 6, 24, 120, 720 using if statements.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if n is a factorial of any number from 1 to 6
    if (n == 1) {
        cout << n << " is the factorial of 0 or 1." << endl;
    } else if (n == 2) {
        cout << n << " is the factorial of 2." << endl;
    } else if (n == 6) {
        cout << n << " is the factorial of 3." << endl;
    } else if (n == 24) {
        cout << n << " is the factorial of 4." << endl;
    } else if (n == 120) {
        cout << n << " is the factorial of 5." << endl;
    } else if (n == 720) {
        cout << n << " is the factorial of 6." << endl;
    } else {
        cout << n << " is not a factorial of any number from 0 to 6." << endl;
    }

    return 0;
}