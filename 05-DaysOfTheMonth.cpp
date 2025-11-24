// Exercise 5: Days of the Month
// This program determines the number of days in a given month

#include <iostream>
using namespace std;

int main() {
    // Variable to store the month number (1-12)
    int month;
    
    // Prompt the user to enter a month number
    cout << "Enter month number (1-12): ";
    cin >> month;
    
    // Use switch statement to determine the number of days
    switch(month) {
        case 1:  // January
            cout << "January has 31 days." << endl;
            break;
        case 2:  // February
            cout << "February has 28 days (29 in leap years)." << endl;
            break;
        case 3:  // March
            cout << "March has 31 days." << endl;
            break;
        case 4:  // April
            cout << "April has 30 days." << endl;
            break;
        case 5:  // May
            cout << "May has 31 days." << endl;
            break;
        case 6:  // June
            cout << "June has 30 days." << endl;
            break;
        case 7:  // July
            cout << "July has 31 days." << endl;
            break;
        case 8:  // August
            cout << "August has 31 days." << endl;
            break;
        case 9:  // September
            cout << "September has 30 days." << endl;
            break;
        case 10:  // October
            cout << "October has 31 days." << endl;
            break;
        case 11:  // November
            cout << "November has 30 days." << endl;
            break;
        case 12:  // December
            cout << "December has 31 days." << endl;
            break;
        default:
            // Handle invalid month numbers
            cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
            break;
    }
    
    return 0;
}