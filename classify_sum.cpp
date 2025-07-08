//Problem:Classify the sum of two numbers (positive, negative, zero)
//Input: Two integers
//Approach:
//sum = a + b;
//if (sum > 0) // positive
//else if (sum < 0) // negative
//else // zero
#include <iostream>
using namespace std;    
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int sum = a + b;

    if (sum > 0) {
        cout << "The sum is positive." << endl;
    } else if (sum < 0) {
        cout << "The sum is negative." << endl;
    } else {
        cout << "The sum is zero." << endl;
    }

    return 0;
}