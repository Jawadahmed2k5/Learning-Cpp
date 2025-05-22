#include <iostream>
using namespace std;

int main() {
    // Problem No 19: Multiple of 3 or 7
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0 || num % 7 == 0)
        cout << "Yes, it is a multiple of 3 or 7";
    else
        cout << "No, it is not a multiple of 3 or 7";

    return 0;
}
