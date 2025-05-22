#include <iostream>
using namespace std;

int main() {
    // Problem No 16: Leap Year Checker
    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "Leap year";
    else
        cout << "Not a leap year";

    return 0;
}