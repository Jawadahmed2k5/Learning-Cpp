#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Please Enter Your Age ";
    cin >> age;

    if(age >= 60){
        cout << "You are eligible for senior citizen discount";
    }
    else{
        cout << "You are not eligible for senior citizen discount";
    }
    return 0;
}