// Exercise 7: Some Counting
// This program demonstrates different counting patterns using loops

#include <iostream>
using namespace std;

int main() {
    cout << "Various Counting Patterns\n" << endl;
    
    // Pattern 1: Count up from 1 to 10
    cout << "Counting from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n" << endl;
    
    // Pattern 2: Count down from 10 to 1
    cout << "Counting down from 10 to 1:" << endl;
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << "\n" << endl;
    
    // Pattern 3: Count even numbers from 2 to 20
    cout << "Even numbers from 2 to 20:" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << "\n" << endl;
    
    // Pattern 4: Count odd numbers from 1 to 19
    cout << "Odd numbers from 1 to 19:" << endl;
    for (int i = 1; i <= 19; i += 2) {
        cout << i << " ";
    }
    cout << "\n" << endl;
    
    // Pattern 5: Count by fives from 5 to 50
    cout << "Counting by fives from 5 to 50:" << endl;
    for (int i = 5; i <= 50; i += 5) {
        cout << i << " ";
    }
    cout << "\n" << endl;
    
    return 0;
}