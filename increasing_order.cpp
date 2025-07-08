//Problem:Check if the digits of a 3-digit number are in increasing order
//Input: 3-digit integer
//Approach:
//Extract digits:
//a = num / 100;  
//b = (num / 10) % 10;  
//c = num % 10;  
//if (a < b && b < c)

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

    // Check if the digits are in increasing order
    if (a < b && b < c) {
        cout << "The digits are in increasing order." << endl;
    } else {
        cout << "The digits are not in increasing order." << endl;
    }

    return 0;
}