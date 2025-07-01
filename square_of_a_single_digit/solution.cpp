#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 1 || num == 4 || num == 9 || num == 16 || num == 25 || 
        num == 36 || num == 49 || num == 64 || num == 81) {
        cout << "The number is the square of a single-digit number.";
    } else {
        cout << "The number is NOT the square of a single-digit number.";
    }

    return 0;
}
