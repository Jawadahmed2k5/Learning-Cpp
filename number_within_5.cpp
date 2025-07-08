//Problem: Determine if a number is within 5 of any multiple of 10
//Input: Integer
//Approach:
//if (num % 10 <= 5 || num % 10 >= 5)
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is within 5 of any multiple of 10
    if (num % 10 <= 5 || num % 10 >= 5) {
        cout << "The number is within 5 of a multiple of 10." << endl;
    } else {
        cout << "The number is not within 5 of a multiple of 10." << endl;
    }

    return 0;
}