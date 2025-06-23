#include <iostream>
#include <cctype>
using namespace std;

int main() {
    // Problem No 20: Character Type Checker
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
        cout << "Alphabet";
    else if (isdigit(ch))
        cout << "Digit";
    else
        cout << "Special symbol";

    return 0;
}
