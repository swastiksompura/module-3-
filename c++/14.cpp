// 14. Variable Scope (Global vs Local)

#include <iostream>
using namespace std;

int globalVar = 100;  // Global variable

void showScope() {
    int localVar = 50;  // Local variable
    cout << "Inside function - Global variable: " << globalVar << endl;
    cout << "Inside function - Local variable: " << localVar << endl;
}

int main() {
    cout << "In main - Global variable: " << globalVar << endl;

    showScope();

    // The following line would give an error if uncommented because localVar is not accessible here
    // cout << localVar;

    return 0;
}