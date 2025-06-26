#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter a Number ";
    cin >> num;

    if(num >=10 && num <=99 || num >=-10 && num <=-99){
        cout << "Two Digits Number";
    }
    else{
        cout << "Not Two Digits Number";
    }
    return 0;
}