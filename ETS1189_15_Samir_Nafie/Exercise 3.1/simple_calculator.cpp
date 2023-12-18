#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Display user interface
    cout << "Simple Calculator" << endl;
    cout << "Enter two numbers and an operation (+, -, *, /): ";
    cin >> num1 >> num2 >> operation;

    // Perform calculation based on operation
    switch(operation) {
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
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation" << endl;
            return 1;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
