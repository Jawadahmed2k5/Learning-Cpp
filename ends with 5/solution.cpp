#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Please Enter A Number ";
    cin >> num;

    if(num % 10 == 5){
        cout << "The Number Ends With Digit 5";
    }
    else{
        cout << "The Number Does Not Ends With Digit 5";
    }
    return 0;
}