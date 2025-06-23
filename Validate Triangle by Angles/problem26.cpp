#include <iostream>
using namespace std;

int main() {
    // Problem No 26
    int a, b, c;
    cout << "Enter three angles of triangle: ";
    cin >> a >> b >> c;

    if (a + b + c == 180)
        cout << "Valid triangle";
    else
        cout << "Invalid triangle";

    return 0;
}
