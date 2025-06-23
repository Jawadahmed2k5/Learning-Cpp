#include <iostream>
using namespace std;

int main() {
    // Problem No 13: Find Maximum of Two Numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Maximum: " << a;
    else
        cout << "Maximum: " << b;

    return 0;
}
