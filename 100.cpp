#include <iostream>
using namespace std;

int main() {
    int value;

    cout << "Enter a number: ";
    cin >> value;

    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }

    if (value == 100) {
        cout << "Value is equal to 100" << endl;
    } else if (value < 100) {
        cout << "Value is less than 100" << endl;
    } else {
        cout << "Value is greater than 100" << endl;
    }

    return 0;
}
