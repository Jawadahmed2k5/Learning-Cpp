// Input numbers until user enters 0, then print their sum
// Approach:
//         Initialize sum = 0
//         While input != 0, add to sum
#include <iostream>
using namespace std;
int main(){
    int sum = 0, n;
    cout << "Please Enter number (zero to stop program): ";
    cin >> n;
    while(n != 0)
    {
        sum += n;
        cin >> n;
    }
    cout << sum << endl;
    return 0;
}