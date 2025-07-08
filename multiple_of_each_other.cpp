// Check if two numbers are multiples of each other
// Input: a, b
// Approach:
// if (a % b == 0 || b % a == 0)
#include <iostream>
using namespace std;
int main(){
    int a;
    int b;

    cout << "Please enter first digit ";
    cin >> a;

    cout << "Please enter second digit ";
    cin >> b;

    if (a % b == 0 || b % a == 0)
    {
        cout << "Both number are multiples of each other";
    }
    else{
        cout << "Both numbers are not multiple of each other";
    }
    return 0;
    
}