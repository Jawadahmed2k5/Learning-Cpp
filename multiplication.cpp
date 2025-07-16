#include<iostream>
using namespace std;

int main(){
 int num1;
 int num2;
 int multiplication;
 cout << "Enter first number: ";
 cin >> num1;
    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }
 cout << "Enter second number: ";
 cin >> num2;
    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }
 multiplication = num1 * num2;
 cout << "The result of " <<num1 << " Multiply by " <<num2 <<" is " <<multiplication; 
 return 0;
}