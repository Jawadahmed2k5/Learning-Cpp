#include <iostream>
using namespace std;

int main(){
    int num;

    cout <<  "Please Enter a Number ";
    cin >> num;

    if(num < -50 || num > 50){
        cout << "Number Is Outside Of The Range ";
    }
    else{
        cout << "Number In Range";
    }
    return 0;
}