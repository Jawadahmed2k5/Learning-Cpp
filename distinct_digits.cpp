// Check if a number has distinct digits (3-digit number)
// Input: Integer
// Approach:
// Extract digits and compare:
// a = num / 100;  
// b = (num / 10) % 10;  
// c = num % 10;  
// if (a != b && b != c && a != c)
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Extract digits
    int a = num / 100;          // Hundreds place
    int b = (num / 10) % 10;    // Tens place
    int c = num % 10;           // Units place

    // Check if all digits are distinct
    if (a != b && b != c && a != c) {
        cout << "The number " << num << " has distinct digits." << endl;
    } else {
        cout << "The number " << num << " does not have distinct digits." << endl;
    }

    return 0;
}