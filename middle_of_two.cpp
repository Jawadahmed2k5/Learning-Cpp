//Problem:
      //  Determine if a number lies exactly in the middle of two others
//Input: Three integers: a, b, c
//Approach:
//If b is the middle:
//if ((b > a && b < c) || (b < a && b > c))

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if ((b > a && b < c) || (b < a && b > c)) {
        cout << "The number " << b << " is in the middle of " << a << " and " << c << "." << endl;
    } else {
        cout << "The number " << b << " is not in the middle of " << a << " and " << c << "." << endl;
    }

    return 0;
}