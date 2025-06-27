#include <iostream>
using namespace std;

int main(){
    int hour;

    cout << "Please Enter Current Hour ";
    cin >> hour;

    if(hour >9 && hour <17){
        cout << "Shop Is Open Now";
    }
    else{
        cout << "Shop Is Closed Now";
    }
    return 0;
}