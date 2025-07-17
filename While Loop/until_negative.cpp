//  Keep asking for input until a negative number is entered
// Approach:
//         Use while (num >= 0) to keep asking input
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number (negative to stop): ";
    cin >> num;
    while(num >=0){
        cout << "You entered: " << num << endl;
        cout << "Enter another number (negative to stop): ";
        cin >> num;
    }
    cout << "Negative number entered, stopping input." << endl;
    return 0;
}