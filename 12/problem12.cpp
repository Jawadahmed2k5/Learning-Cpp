#include <iostream>
using namespace std;

int main() {
    // Problem No 12: Check Even or Odd
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}
