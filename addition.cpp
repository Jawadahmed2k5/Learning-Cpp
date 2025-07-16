#include<iostream>
using namespace std;

int main(){
 int num1;
 int num2;
 int sum;
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
 sum = num1 + num2;
 cout << "The sum of " <<num1 << " and " <<num2 <<" is " <<sum; 
 return 0;
}