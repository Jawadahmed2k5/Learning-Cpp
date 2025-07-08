// Check if a number is exactly divisible by the sum of its digits (2-digit)
// Input: n
// Approach:
// Extract digits: a = n / 10, b = n % 10
// Check n % (a + b) == 0
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a 2-digit number: ";
    cin >> n;

    // Extract digits
    int a = n / 10;  // Tens place
    int b = n % 10;  // Units place

    // Calculate the sum of digits
    int sum_of_digits = a + b;

    // Check if n is divisible by the sum of its digits
    if (n % sum_of_digits == 0) {
        cout << "The number " << n << " is exactly divisible by the sum of its digits (" << sum_of_digits << ")." << endl;
    } else {
        cout << "The number " << n << " is not exactly divisible by the sum of its digits (" << sum_of_digits << ")." << endl;
    }

    return 0;
}