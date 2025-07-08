//Problem:Check if a number is greater than the average of three numbers
//Input: Three integers
//Approach:
//Calculate average:
//avg = (a + b + c) / 3;  
//if (a > avg)
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Calculate average
    double avg = (a + b + c) / 3.0;

    // Check if the first number is greater than the average
    if (a > avg) {
        cout << "The first number " << a << " is greater than the average " << avg << "." << endl;
    } else {
        cout << "The first number " << a << " is not greater than the average " << avg << "." << endl;
    }

    return 0;
}