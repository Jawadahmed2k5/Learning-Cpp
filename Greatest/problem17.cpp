#include <iostream>
using namespace std;

int main() {
    // Problem No 17: Greatest of Three Numbers
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Greatest: " << a;
    else if (b >= a && b >= c)
        cout << "Greatest: " << b;
    else
        cout << "Greatest: " << c;

    return 0;
}
