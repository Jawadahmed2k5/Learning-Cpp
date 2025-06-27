#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Please Enter A 3-Digits Number ";
    cin >> num;

    if(num < 100 || num >900){
        cout << "Given Number Is Not 3-Digits Number ";
        return 1;
    }

    int first = num/100;
    int last = num%10;

    if (first == last)
        cout << "First and last digits are equal.";
    else
        cout << "First and last digits are different."; 

    return 0;
}