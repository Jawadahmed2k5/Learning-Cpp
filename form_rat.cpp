// Determine if three sides form a right-angled triangle
// Input: a, b, c
// Approach:
// Use Pythagoras:
// if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the triangle is a right-angled triangle using Pythagorean theorem
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        cout << "The triangle with sides " << a << ", " << b << ", and " << c << " is a right-angled triangle." << endl;
    } else {
        cout << "The triangle with sides " << a << ", " << b << ", and " << c << " is not a right-angled triangle." << endl;
    }

    return 0;
}