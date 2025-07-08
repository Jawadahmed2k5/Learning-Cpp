//  Check if a number is between two other numbers (inclusive)
// Input: a, b, num
// Approach:
// if (num >= a && num <= b) || (num >= b && num <= a)
#include <iostream>
using namespace std;

int main() {
    int a, b, num;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    cout << "Enter the number to check (num): ";
    cin >> num;

    // Check if num is between a and b (inclusive)
    if ((num >= a && num <= b) || (num >= b && num <= a)) {
        cout << num << " is between " << a << " and " << b << "." << endl;
    } else {
        cout << num << " is NOT between " << a << " and " << b << "." << endl;
    }

    return 0;
}
