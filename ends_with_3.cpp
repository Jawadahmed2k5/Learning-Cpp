// Check if a number ends with the digit 3
// Input: Integer
// Approach:
// if (num % 10 == 3)
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 10 == 3) {
        cout << "The number ends with the digit 3." << endl;
    } else {
        cout << "The number does NOT end with the digit 3." << endl;
    }

    return 0;
}
