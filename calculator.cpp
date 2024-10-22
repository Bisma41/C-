#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    // Display options to the user
    cout << "Simple Calculator\n";
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform calculation based on operation
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
    }

    return 0;
}
