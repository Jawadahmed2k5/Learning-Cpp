//  Sum of first n natural numbers
// Approach:
//         Initialize sum = 0, i = 1
//         While i <= n, add i to sum, increment i
#include <iostream>
using namespace std;    
int main() {
    int n, sum = 0, i = 1;
    cout << "Enter a natural number: ";
    cin >> n;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}