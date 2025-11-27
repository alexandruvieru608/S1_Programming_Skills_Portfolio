// Exercise 9: Hello
// This program greets the user by name using a function

#include <iostream>
#include <string>
using namespace std;

// Function declaration
// This function takes a name as parameter and displays a greeting
void greetUser(string name) {
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
}

int main() {
    string userName;
    
    // Prompt the user to enter their name
    cout << "Please enter your name: ";
    getline(cin, userName);
    
    // Call the greeting function with the user's name
    greetUser(userName);
    
    // Additional personalized message
    cout << "It's great to have you here, " << userName << "!" << endl;
    
    return 0;
}