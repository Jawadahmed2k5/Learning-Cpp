#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout << "Please  enter 1st angle "<<endl;
    cin >> a;

    cout << "Please enter 2nd angle "<<endl;
    cin >> b;

    cout << "Please enter 3rd angle "<<endl;
    cin >> c;

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0){
        cout <<"All three angles make triangle";
    }
    else{
        cout << "Angles does not make a triangle";
    }
    return 0;
}