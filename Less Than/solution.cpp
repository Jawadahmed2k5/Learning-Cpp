#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Please Enter two Numbers ";
    cin >> a >> b;
    
    if(a<b){
        cout << "1st Number is less than 2nd Number ";
    }
        else{
            cout << "First Number is Equal to or Greater than 2nd Number";
        
    }
    return 0;
}