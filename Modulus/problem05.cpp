#include <iostream>
using namespace std;

int main() {
    // Problem No 5: Modulus of Two Numbers
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b != 0)
        cout << "Remainder: " << a % b << endl;
    else
        cout << "Modulus by zero is not allowed." << endl;
    return 0;
}
