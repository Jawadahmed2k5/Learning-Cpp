#include <iostream>
using namespace std;

int main(){
    int temp;

    cout << "Please Enter Temperature ";
    cin >> temp;

    if(temp <=15){
        cout << "Cold";
    }
    else if (temp >=16 && temp <=30){
        cout << "Moderate";
    }
    else{
        cout << "Hot";
    }
    return 0;
}