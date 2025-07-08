// Check if sum of two numbers is odd and greater than 50
// Input: Two integers
// Approach:
// sum = a + b;  
// if (sum % 2 != 0 && sum > 50)
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Calculate the sum
    int sum = a + b;

    // Check if the sum is odd and greater than 50
    if (sum % 2 != 0 && sum > 50) {
        cout << "The sum of " << a << " and " << b << " is odd and greater than 50." << endl;
    } else {
        cout << "The sum of " << a << " and " << b << " is not odd or not greater than 50." << endl;
    }

    return 0;
}