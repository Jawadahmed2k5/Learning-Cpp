#include <iostream>
using namespace std;

int main (){
    int num;

    cout << "Please enter a number ";
    cin >> num;

    if( num >= 90 && num <= 110){
        cout << "Number is within 10 units of 100";
    }
    else {
        cout << "Number does not lies within 10 units of 100";
    }
    return 0;

}