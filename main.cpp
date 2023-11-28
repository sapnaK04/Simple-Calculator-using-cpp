#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Get user input
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the operator
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the denominator is zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit the program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Exit the program with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0; // Exit the program successfully
}
