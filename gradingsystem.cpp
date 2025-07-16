#include<iostream>
using namespace std; 

int main() {
    int x; 
    int y; 


    cout << "Please Enter your Total marks ";
    cin >> x;

    if(x > 100) {
        cout << "Please Enter Your Valid Marks less then or euqal to 100 ";
    }
    else if( x > 0 && x <= 49) {
        cout << " Fail "; 
    }
     else if( x > 50 && x <= 60) {
        cout << "C+ Grade "; 
    }
     else if(x > 60 && x <= 70 ) {
        cout << "B+ ";
    }
     else if(x > 70 && x <= 80 ) {
        cout << " A "; 
    }
     else  if (x > 80 && x <= 100 ){
        cout << "A+ Grade";
    } 
    else {
        cout << "!invalid  "; 
    }

    return 0;
}