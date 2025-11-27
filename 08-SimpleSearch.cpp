// Exercise 8: Simple Search
// This program searches for a specific value in an array

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of numbers
    int numbers[] = {12, 45, 23, 67, 89, 34, 56, 90, 21, 78};
    int arraySize = 10;  // Size of the array
    int searchValue;
    bool found = false;  // Flag to track if value is found
    int position = -1;  // Position where value is found
    
    // Display the array contents
    cout << "Array contents: ";
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n" << endl;
    
    // Prompt user for the value to search
    cout << "Enter a number to search for: ";
    cin >> searchValue;
    
    // Linear search through the array
    for (int i = 0; i < arraySize; i++) {
        if (numbers[i] == searchValue) {
            found = true;
            position = i;
            break;  // Exit loop once value is found
        }
    }
    
    // Display search results
    if (found) {
        cout << "\nValue " << searchValue << " found at position " << position << " (index " << position << ")." << endl;
    } else {
        cout << "\nValue " << searchValue << " not found in the array." << endl;
    }
    
    return 0;
}