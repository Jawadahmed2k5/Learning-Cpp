#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Plese Enter Two Numbers ";
    cin >> a >> b;

    if((a*b)%2== 0){
        cout << "The Product Of Given Numbers Is Even";
    }
    else{
        cout << "The Product Of Given Numbers Is Odd"; 
    }
    return 0;
}