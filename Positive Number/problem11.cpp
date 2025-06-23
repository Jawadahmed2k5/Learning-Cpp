#include <iostream>
using namespace std;

int main() {
    // Problem No 11: Check if a Number is Positive, Negative, or Zero
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "Positive number";
    else if (num < 0)
        cout << "Negative number";
    else
        cout << "Zero";

    return 0;
}
