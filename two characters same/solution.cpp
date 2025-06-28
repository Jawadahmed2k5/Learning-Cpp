#include <iostream>
using namespace std;

int main(){
    char char1;
    char char2;
    cout << "Please Enter Two Characters ";
    cin >> char1 >> char2 ;

    if(char1 == char2){
        cout << "Both Characters Are Same ";
    }
    else{
        cout << "Characters are Different ";
    }
    return 0;
}