// Exercise 10: Is it even?
// This program determines if a number is even or odd using a function

#include <iostream>
using namespace std;

// Function declaration
// This function checks if a number is even
// Returns true if even, false if odd
bool isEven(int number) {
    // Use modulo operator to check if number is divisible by 2
    if (number % 2 == 0) {
        return true;  // Number is even
    } else {
        return false;  // Number is odd
    }
}

int main() {
    int userNumber;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> userNumber;
    
    // Call the isEven function and display appropriate message
    if (isEven(userNumber)) {
        cout << userNumber << " is an even number." << endl;
    } else {
        cout << userNumber << " is an odd number." << endl;
    }
    
    // Additional demonstration with a loop
    cout << "\nChecking numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (isEven(i)) {
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }
    
    return 0;
}