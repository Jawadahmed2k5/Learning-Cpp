// Check if a number lies between the square and cube of another number
// Input: Two integers a and b
// Approach:
// if (b > a * a && b < a * a * a)
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    // Check if b lies between the square and cube of a
    if (b > a * a && b < a * a * a) {
        cout << "The number " << b << " lies between the square (" << a * a << ") and cube (" << a * a * a << ") of " << a << "." << endl;
    } else {
        cout << "The number " << b << " does not lie between the square (" << a * a << ") and cube (" << a * a * a << ") of " << a << "." << endl;
    }

    return 0;
}