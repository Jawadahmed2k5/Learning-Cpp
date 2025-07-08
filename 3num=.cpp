//problem:
      //  Check if three numbers are all equal
//Input: Three integers
//Approach:
//if (a == b && b == c)

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "All three numbers are equal." << endl;
    } else {
        cout << "The three numbers are not all equal." << endl;
    }

    return 0;
}