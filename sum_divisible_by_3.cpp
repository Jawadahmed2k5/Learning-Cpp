//  Check if sum of digits is divisible by 3
// Input: Integer
// Approach:
// Extract digits and sum them → Check sum % 3 == 0
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please enter an integer: ";
    cin >> num;

    // Backup of original number
    int original = num;

    // Make sure the number is positive for digit extraction
    if (num < 0) {
        num = -num;
    }

    // Sum the digits
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  // Add last digit
        num /= 10;        // Remove last digit
    }

    // Check if the sum is divisible by 3
    if (sum % 3 == 0) {
        cout << "The sum of digits of " << original << " is divisible by 3." << endl;
    } else {
        cout << "The sum of digits of " << original << " is NOT divisible by 3." << endl;
    }

    return 0;
}
