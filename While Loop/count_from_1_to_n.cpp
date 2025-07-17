//  Count from 1 to n, skipping multiples of 3
// Approach:
//         While i <= n, check if i % 3 != 0, then print
//         Increment i
#include <iostream>
using namespace std;
int main(){
    int n;
    cout  << "Enter a number: ";
    cin >> n;
    int i = 1;
    while(i <=n){
        if (i % 3 != 0)
            cout << i << " ";
            i++;
    cout << endl;
    }
    return 0;
}
