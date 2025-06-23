#include <iostream>
using namespace std;

int main() {
    // Problem No 14: Find Minimum of Two Numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a < b)
        cout << "Minimum: " << a;
    else
        cout << "Minimum: " << b;

    return 0;
}
