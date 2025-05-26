#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Problem No 29
    float a, b, c, d, r1, r2;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        cout << "Real and distinct roots: " << r1 << " , " << r2;
    } else if (d == 0) {
        r1 = -b / (2*a);
        cout << "Real and equal roots: " << r1;
    } else {
        cout << "Complex roots";
    }

    return 0;
}
