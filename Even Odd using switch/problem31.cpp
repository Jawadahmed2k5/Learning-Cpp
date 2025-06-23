#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2) {
        case 0:
            cout << "Even number";
            break;
        case 1:
            cout << "Odd number";
            break;
    }

    return 0;
}