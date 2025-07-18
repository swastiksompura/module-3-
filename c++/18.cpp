// 1. Class for a Simple Calculator

#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float subtract(float a, float b) {
        return a - b;
    }

    float multiply(float a, float b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    float num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+': cout << "Result: " << calc.add(num1, num2) << endl; break;
        case '-': cout << "Result: " << calc.subtract(num1, num2) << endl; break;
        case '*': cout << "Result: " << calc.multiply(num1, num2) << endl; break;
        case '/': cout << "Result: " << calc.divide(num1, num2) << endl; break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}