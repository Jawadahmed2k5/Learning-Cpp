```cpp
// Check if a number is prime (from 1 to 50 only)
// Input: Integer
// Approach:
// Use basic if-else to match known primes from 1 to 50
// (e.g. 2, 3, 5, 7, 11, ..., 47)

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number (1 to 50): ";
    cin >> num;

    // Validate range
    if (num < 1 || num > 50) {
        cout << "Number out of range. Please enter a number between 1 and 50." << endl;
        return 0;
    }

    // Check primality
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
