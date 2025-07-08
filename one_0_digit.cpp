// Check if a number has exactly one zero digit (3-digit number)
// Input: 3-digit number
// Approach:
// Extract digits → Count how many are 0
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter a 3-digit number: ";
    cin >> num;

    // Make sure it's a 3-digit number
    if (num < 100 || num > 999) {
        cout << "Invalid input. Please enter a 3-digit number." << endl;
        return 0;
    }

    // Extract digits
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    // Count how many digits are 0
    int zeroCount = 0;
    if (hundreds == 0) zeroCount++;
    if (tens == 0) zeroCount++;
    if (units == 0) zeroCount++;

    if (zeroCount == 1) {
        cout << "The number has exactly one zero digit." << endl;
    } else {
        cout << "The number does NOT have exactly one zero digit." << endl;
    }

    return 0;
}
