#include <iostream>
using namespace std;

int main() {
    // Problem No 28
    int a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilateral triangle";
    else if (a == b || b == c || a == c)
        cout << "Isosceles triangle";
    else
        cout << "Scalene triangle";

    return 0;
}
