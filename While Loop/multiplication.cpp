// Multiplication table of a given number
// Approach:
//         Input num, initialize i = 1
//         While i <= 10, print num * i, then increment i
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    int i = 1;
    while(i <= 10){
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }
}