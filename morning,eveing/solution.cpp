#include <iostream>
using namespace std;

int main(){
    int hour;

    cout << "Please Enter Hour ";
    cin >> hour;

    if(hour >= 5 && hour < 12){
        cout << "Its Morning ";
    }
    else if (hour >= 12 && hour <18){
        cout << "Its Afternoon ";
    }
    else{
        cout << "Its Night ";
    }
     return 0;
}