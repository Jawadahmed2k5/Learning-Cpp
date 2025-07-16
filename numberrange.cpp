#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }

    if (number >= 0 && number <= 50) {
        cout << "In range" << endl;
    } else {
        cout << "Not in range" << endl;
    }

    return 0;
}
