// Check if a number is a square and even
// Input: Integer
// Approach:
// Check against known even squares: 4, 16, 36, 64, 100...
// Or loop i = 1–10: if i*i == num && num % 2 == 0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Check if number is a perfect square
    int root = static_cast<int>(sqrt(num));

    if (root * root == num) {
        // Now check if it's even
        if (num % 2 == 0) {
            cout << num << " is an even perfect square." << endl;
        } else {
            cout << num << " is a perfect square but not even." << endl;
        }
    } else {
        cout << num << " is not a perfect square." << endl;
    }

    return 0;
}

