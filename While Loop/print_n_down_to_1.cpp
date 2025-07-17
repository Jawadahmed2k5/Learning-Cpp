// Print numbers from n down to 1
// Approach:
//         Input n, initialize i = n
//         While i >= 1, print i, then i--
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i =n;
    while (i >= 1){
        cout << i << " ";
        i--;
    }
}