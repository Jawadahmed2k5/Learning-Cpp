// Determine if three numbers are in arithmetic progression
// Input: a, b, c
// Approach:
// Check if middle is average:
// if (b - a == c - b)
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Check if the numbers are in arithmetic progression
    if (b - a == c - b) {
        cout << "The numbers " << a << ", " << b << ", and " << c << " are in arithmetic progression." << endl;
    } else {
        cout << "The numbers " << a << ", " << b << ", and " << c << " are not in arithmetic progression." << endl;
    }

    return 0;
}