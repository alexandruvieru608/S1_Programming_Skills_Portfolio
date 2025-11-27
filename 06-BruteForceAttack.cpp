// Exercise 6: Brute Force Attack
// This program simulates a password guessing system with limited attempts

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Set the correct password
    string correctPassword = "secret123";
    string userInput;
    int maxAttempts = 5;  // Maximum number of attempts allowed
    int attemptCount = 0;  // Counter for attempts made
    bool accessGranted = false;  // Flag to track if access is granted
    
    cout << "Password Protection System" << endl;
    cout << "You have " << maxAttempts << " attempts to enter the correct password.\n" << endl;
    
    // Loop until max attempts reached or correct password entered
    while (attemptCount < maxAttempts && !accessGranted) {
        cout << "Attempt " << (attemptCount + 1) << " of " << maxAttempts << endl;
        cout << "Enter password: ";
        cin >> userInput;
        
        // Check if the entered password is correct
        if (userInput == correctPassword) {
            accessGranted = true;
            cout << "\nAccess Granted! Welcome!" << endl;
        } else {
            attemptCount++;
            int remainingAttempts = maxAttempts - attemptCount;
            
            if (remainingAttempts > 0) {
                cout << "Incorrect password. " << remainingAttempts << " attempt(s) remaining.\n" << endl;
            }
        }
    }
    
    // If all attempts used without success, deny access
    if (!accessGranted) {
        cout << "\nAccess Denied! You have exceeded the maximum number of attempts." << endl;
        cout << "The system is now locked." << endl;
    }
    
    return 0;
}