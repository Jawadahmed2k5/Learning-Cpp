#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    
    cout << "Enter the first number: ";
    cin >> num1;

    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }

    cout << "Enter the second number: ";
    cin >> num2;

    if (cin.fail()) {
        cout << " Please enter a valid number." << endl;
        return 1;
    }

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << num1 << " is equal to " << num2 << endl;
    }

    return 0;
}
