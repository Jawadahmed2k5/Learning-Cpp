#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please Enter a Number ";
    cin >> num;

        if (cin.fail()){
        cout << "Please Enter a Valid Number";
        return 1;
    }

    if(num % 10 == 0){
        cout << "Number is miltiple of 10";
    }
    else{
        cout << "Number is not a multiple of 10";
    }
    return 0;
}