#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout << "Enter the first number: ";
    cin >> num1;
    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }
    cout << "Enter the second number: ";
    cin >> num2;
    if (cin.fail()) {
        cout << "Please enter a valid number." << endl;
        return 1;
    }
    cout << "The answer for substract number 1 from 2 is ";
    cout << num2 - num1;
    return 0;
}