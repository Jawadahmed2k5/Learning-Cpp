#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Problem No 21
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch))
        cout << "Uppercase letter";
    else if (islower(ch))
        cout << "Lowercase letter";
    else if (isdigit(ch))
        cout << "Digit";
    else
        cout << "Special character";

    return 0;
}
