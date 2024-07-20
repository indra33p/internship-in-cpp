#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1,num2;
    cout << "Enter any two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
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
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator. Please enter currect operation/." << endl;
    }
    return 0;
}