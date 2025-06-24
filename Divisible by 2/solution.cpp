#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please Enter A Number ";
    cin >> num;

    if(num % 2 == 0 && num % 3 != 0){
        cout << "The Number Is Divisible By 2 and Not By 3 ";
    }
    else{
        cout << "Number Is Not A Divisible of 2";
    }
    return 0;
}