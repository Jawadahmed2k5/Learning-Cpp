// Check if a triangle is isosceles (two equal sides)
// Input: Three integers: a, b, c
// Approach:
// if (a == b || b == c || a == c)
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the triangle is isosceles
    if (a == b || b == c || a == c) {
        cout << "The triangle with sides " << a << ", " << b << ", and " << c << " is isosceles." << endl;
    } else {
        cout << "The triangle with sides " << a << ", " << b << ", and " << c << " is not isosceles." << endl;
    }

    return 0;
}