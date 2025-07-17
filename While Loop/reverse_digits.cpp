// Reverse the digits of a number
// Approach:
//         Use modulus % and divide / in a loop
//         Rebuild reversed number by multiplying by 10 and adding last digit
#include <iostream>
using namespace std;
int main(){
    int n, reversed = 0;
    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10; 
        reversed = reversed * 10 + digit; 
        n /= 10; 
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}