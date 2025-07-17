// Product of first n numbers (Factorial)
// Approach:
//         Initialize product = 1, i = 1
//         While i <= n, multiply product *= i, increment i
#include <iostream>
using namespace std;
int main() {
    int n, product = 1, i = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    while(i <= n){
        product *= i;
        i++;
    }
    cout << "Factorial of " << n << " = " << product << endl;
    return 0;
}