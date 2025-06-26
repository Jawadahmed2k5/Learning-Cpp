#include <iostream>
using namespace std ;

int main(){
    int a;
    int b;
    
    cout << "Please Enter Two Numbers" <<endl;
    cin >> a >> b;

    if(a+b>100){
        cout << "Sum Of Given Numbers Is Greater Than 100";
    }
    else{
        cout << "Sum Of Giver Numbers Is Not Greater Than 100";
}
    return 0;
}