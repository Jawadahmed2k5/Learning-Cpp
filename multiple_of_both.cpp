// Problem:Check if a number is a multiple of both its digits (2-digit number)
// Input: Integer n (10–99)
// Approach:
// Extract digits: a = n / 10, b = n % 10
// Check n % a == 0 && n % b == 0
// Ensure b != 0 to avoid division by zero
#include <iostream>
using namespace std;   
int main() {
    int n;
    cout << "Enter a 2-digit number (10-99): ";
    cin >> n;

    // Extract digits
    int a = n / 10;  // Tens place
    int b = n % 10;  // Units place

    // Check if both digits are non-zero to avoid division by zero
    if (b != 0 && n % a == 0 && n % b == 0) {
        cout << "The number " << n << " is a multiple of both its digits " << a << " and " << b << "." << endl;
    } else {
        cout << "The number " << n << " is not a multiple of both its digits." << endl;
    }

    return 0;
}