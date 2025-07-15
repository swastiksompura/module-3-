// 5. Variables and Constants

#include <iostream>
using namespace std;

int main() {
    // Constants
    const float PI = 3.14159;

    // Variables
    int radius = 5;
    float area;
    char unit = 'm';  // unit: meters

    // Area of circle: πr²
    area = PI * radius * radius;

    cout << "Radius: " << radius << unit << endl;
    cout << "Area: " << area << unit << "^2" << endl;

    return 0;
}
