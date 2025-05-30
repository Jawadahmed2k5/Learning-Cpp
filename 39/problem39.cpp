#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter lowercase letter: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
        cout << "Uppercase: " << char(ch - 32);
    else
        cout << "Not a lowercase letter";

    return 0;
}