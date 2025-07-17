//  Count how many numbers between 1 and 100 are divisible by 7
// Approach:
//         Initialize i = 1, count = 0
//         While i <= 100, if divisible by 7, increment count
#include <iostream>
using namespace std;
int main(){
    int i = 1, count = 0;
    while(i <= 100){
        if(i % 7 == 0){
            count++;
        }
        i++;
    }
    cout << "Count of numbers between 1 and 100 that are divisible by 7: " << count << endl;
    return 0;
}