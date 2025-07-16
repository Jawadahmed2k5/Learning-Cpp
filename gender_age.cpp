#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    string gender;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
     if (cin.fail()) {
        cout << "Invalid input for age." << endl;
        return 1; 
    }
    cout << "Enter your gender: ";
    cin >> gender ;

    cout << "Hello " << name << ", you are classified as: ";
    if (age < 13) {
        cout << "Child" << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "Teenager" << endl;
    } else if (age >= 20 && age <= 59) {
        cout << "Adult" << endl;
    } else {
        cout << "Senior Citizen" << endl;
    }
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
}
    if (gender == "male" || "Male" && age >= 21) {
        cout << "Eligible for marriage in Pakistan." << endl;
    } else if (gender == "female" && age >= 18) {
        cout << "Eligible for marriage in Pakistan." << endl;
    } else {
        cout << "Not eligible for marriage in Pakistan." << endl;
    }
    return 0;
}