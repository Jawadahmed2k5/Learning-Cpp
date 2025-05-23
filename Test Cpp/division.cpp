#include <iostream>
using namespace std;

int main() {
    int dividend;
    int divisor;

    cout << "Enter the dividend: ";
    cin >> dividend;

    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }

    cout << "Enter the divisor: ";
    cin >> divisor;

    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }

    if (divisor == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "Quotient  : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;

    return 0;
}
