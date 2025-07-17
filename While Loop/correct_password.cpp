// Ask for password until it is correct
// Approach:
//         Use while (input != "password") and keep asking
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Enter the password: ";
    cin >> input;

    while (input != "password") {
        cout << "Incorrect password. Try again: ";
        cin >> input;
    }

    cout << "Password accepted!" << endl;
    return 0;
}