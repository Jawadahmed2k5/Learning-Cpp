// Count the number of digits in a number
// Approach:
//         While n != 0, divide n by 10, increment counter
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    
    while (n != 0) {
        n /= 10; 
        count++; 
    }
    
    cout << "Number of digits: " << count << endl;
    return 0;
}