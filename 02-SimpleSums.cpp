// Exercise 2: Simple Sums
// This program performs basic arithmetic operations and displays the results

#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables and initialize them
    int num1 = 10;
    int num2 = 5;
    
    // Perform addition and display the result
    int sum = num1 + num2;
    cout << "Sum: " << num1 << " + " << num2 << " = " << sum << endl;
    
    // Perform subtraction and display the result
    int difference = num1 - num2;
    cout << "Difference: " << num1 << " - " << num2 << " = " << difference << endl;
    
    // Perform multiplication and display the result
    int product = num1 * num2;
    cout << "Product: " << num1 << " * " << num2 << " = " << product << endl;
    
    // Perform division and display the result
    int quotient = num1 / num2;
    cout << "Quotient: " << num1 << " / " << num2 << " = " << quotient << endl;
    
    return 0;
}