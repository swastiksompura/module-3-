// 6. Type Conversion

#include <iostream>
using namespace std;

int main() {
    int intValue = 10;
    float floatValue = 5.5;

    // Implicit conversion (int to float)
    float result1 = intValue + floatValue;

    // Explicit conversion (float to int)
    int result2 = intValue + (int)floatValue;

    cout << "Implicit Conversion (int + float): " << result1 << endl;
    cout << "Explicit Conversion (int + (int)float): " << result2 << endl;

    return 0;
}