#include <iostream>

using namespace std;

int main() {
    // Declare variables to store user input and result
    double num1, num2, result;
    char operation;

    // Get user input for the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Get user input for the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Get user input for the operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            // Check if the second number is not zero before performing division
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}