#include<iostream>
using namespace std;

int main() {
    int num1, num2, result;
    char op;
    
    do {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /, %): ";
        cin >> op;
        cout << "Enter num2: ";
        cin >> num2;

        switch(op) {
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
                    cout << "ERROR: can't be divided by zero" << endl;
                    break; // Added a break to exit the switch if division by zero occurs
                }
                break;
            case '%':
                if(num2 != 0) {
                    result = num1 % num2;
                } else {
                    cout << "ERROR: can't calculate modulo with zero divisor" << endl;
                    break; // Added a break to exit the switch if division by zero occurs
                }
                break;
            default:
                cout << "Invalid operator" << endl;
                break; // Added a break to exit the switch for an invalid operator
        }

        cout << "RESULT = " << result << endl;
        char choice;
        cout << "Do you want to continue? Press any key except '0' to continue: ";
        cin >> choice;

        if(choice == '0') {
            break;
        }
    } while(true);

    return 0;
}
