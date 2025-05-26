#include <iostream>
using namespace std;

int main() {
    // Problem No 27
    int a, b, c;
    cout << "Enter three angles of triangle: ";
    cin >> a >> b >> c;

    if (a + b + c != 180) {
        cout << "Not a valid triangle";
    } else if (a == 90 || b == 90 || c == 90) {
        cout << "Right-angled triangle";
    } else if (a > 90 || b > 90 || c > 90) {
        cout << "Obtuse triangle";
    } else {
        cout << "Acute triangle";
    }

    return 0;
}
