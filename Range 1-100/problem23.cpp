#include <iostream>
using namespace std;

int main() {
    // Problem No 23
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 100)
        cout << "Number is within the range 1-100";
    else
        cout << "Number is outside the range";

    return 0;
}
