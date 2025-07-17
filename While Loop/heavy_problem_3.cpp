#include <iostream>
using namespace std;
int main() {
    int i = 1;

    cout << "Numbers from 1 to 100:" << endl;
    while (i <= 100) {
        cout << i<<endl ;
        i++;
    }
    cout << endl;
    i = 1;
    cout << "Even numbers from 1 to 100:" << endl;
    while (i <= 100) {
        if (i % 2 == 0) {
            cout << i<<endl;
        }
        i++;
    }
    cout << endl;
    i = 1;
    cout << "Odd numbers from 1 to 100:" << endl;
    while (i <= 100) {
        if (i % 2 != 0) {
            cout << i<<endl;
        }
        i++;
    }
    cout << endl;
    i = 1;
    cout << "Numbers divisible by 2 from 1 to 100:" << endl;
    while (i <= 100) {
        if (i % 2 == 0) {
            cout << i<<endl;
        }
        i++;
    }
    cout << endl;
    i = 1;
    cout << "Numbers divisible by 3 from 1 to 100:" << endl;
    do {
        if (i % 3 == 0) {
            cout << i<<endl;
        }
        i++;
    } while (i <= 100);
    
    cout << endl;

    return 0;
}