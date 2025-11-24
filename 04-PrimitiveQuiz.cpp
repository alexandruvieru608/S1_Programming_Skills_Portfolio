// Exercise 4: Primitive Quiz
// This program creates a simple quiz with multiple questions and tracks the score

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable to keep track of the user's score
    int score = 0;
    string answer;
    
    cout << "Welcome to the Quiz!" << endl;
    cout << "Answer the following questions:\n" << endl;
    
    // Question 1
    cout << "Question 1: What is the capital of France?" << endl;
    cout << "Answer: ";
    getline(cin, answer);
    
    // Check if the answer is correct (case-insensitive comparison)
    if (answer == "Paris" || answer == "paris") {
        cout << "Correct!" << endl;
        score++;  // Increment score for correct answer
    } else {
        cout << "Incorrect! The correct answer is Paris." << endl;
    }
    
    // Question 2
    cout << "\nQuestion 2: What is 5 + 7?" << endl;
    cout << "Answer: ";
    getline(cin, answer);
    
    if (answer == "12") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect! The correct answer is 12." << endl;
    }
    
    // Question 3
    cout << "\nQuestion 3: What color is the sky on a clear day?" << endl;
    cout << "Answer: ";
    getline(cin, answer);
    
    if (answer == "Blue" || answer == "blue") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect! The correct answer is Blue." << endl;
    }
    
    // Display the final score
    cout << "\nQuiz Complete!" << endl;
    cout << "Your final score: " << score << " out of 3" << endl;
    
    return 0;
}