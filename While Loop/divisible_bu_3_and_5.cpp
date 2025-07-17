// Print numbers divisible by both 3 and 5 from 1 to 100
// Approach:
//         Initialize i = 1
//         While i <= 100, if i % 3 == 0 && i % 5 == 0, print
//         Increment i
#include <iostream>
using namespace std;
int main(){
    int i =1;
    while(i <= 100){
        if(i % 3 == 0 && i % 5 == 0){
            cout << i << endl;
        }
        i++;
    }
    return 0;
}