#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Please Enter A Number: ";
    cin >> num;

    if (num < 0 && num % 2 != 0) {
        cout << "Given Number is Negative and Odd";
    }
    else if (num < 0 && num % 2 == 0) {
        cout << "Given Number is Negative and Even";
    }
    else if (num > 0 && num % 2 != 0) {
        cout << "Given Number is Positive and Odd";
    }
    else if (num > 0 && num % 2 == 0) {
        cout << "Given Number is Positive and Even";
    }
    else {
        cout << "The Number is Zero";
    }

    return 0;
}
