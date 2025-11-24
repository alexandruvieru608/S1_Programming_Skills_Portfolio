// Exercise 3: Biography
// This program collects and displays personal information from the user

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables to store user information
    string name;
    int age;
    string hometown;
    
    // Prompt the user for their name
    cout << "Enter your name: ";
    getline(cin, name);  // Use getline to allow names with spaces
    
    // Prompt the user for their age
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // Clear the newline character from the input buffer
    
    // Prompt the user for their hometown
    cout << "Enter your hometown: ";
    getline(cin, hometown);
    
    // Display the collected information in a formatted way
    cout << "\nYour Biography:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Hometown: " << hometown << endl;
    
    return 0;
}