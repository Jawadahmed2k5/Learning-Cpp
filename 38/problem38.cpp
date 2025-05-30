#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Say Hello\n2. Say Bye\n3. Exit\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello!";
            break;
        case 2:
            cout << "Bye!";
            break;
        case 3:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}