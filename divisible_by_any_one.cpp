//Problem:Check if a number is divisible by 11 or 13 but not both
//Input: Integer
//Approach:
//if ((num % 11 == 0 || num % 13 == 0) && num % (11 * 13) != 0)
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check divisibility by 11 or 13 but not both
    if ((num % 11 == 0 || num % 13 == 0) && num % (11 * 13) != 0) {
        cout << "The number is divisible by 11 or 13 but not both." << endl;
    } else {
        cout << "The number is not divisible by 11 or 13, or it is divisible by both." << endl;
    }

    return 0;
}