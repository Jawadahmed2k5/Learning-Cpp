#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Please enter first number ";
    cin >> a;

    cout << "Please enter second number ";
    cin >> b;

    int sum = a+b;
    cout << "The Sum of " << a <<  " and " << b << " is " << sum <<endl;

    if(sum >= 100 && sum <= 999){
        cout << "Sum of given numbers is a 3-digit number";
    }
    else {
        cout << "Sum of given number is not a 3-digit number";
    }
    return 0;
}