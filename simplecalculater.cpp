#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Select an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please select a valid option (+, -, *, /)." << endl;
            break;
    }

    return 0;
}
