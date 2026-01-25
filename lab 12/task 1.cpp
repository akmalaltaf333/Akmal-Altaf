#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    // Square Root
    if (num >= 0) {
        cout << "Square Root: " << sqrt(num) << endl;
    } else {
        cout << "Square Root: Cannot calculate square root of negative number" << endl;
    }
    
    // Absolute value
    cout << "Absolute Value: " << abs(num) << endl;
    
    // Sin (converting to radians for sin/cos)
    double radians = num * (M_PI / 180.0); // Convert degrees to radians
    cout << "Sin(" << num << " degrees): " << sin(radians) << endl;
    
    // Cos
    cout << "Cos(" << num << " degrees): " << cos(radians) << endl;
    
    // Power of 3
    cout << "Power of 3: " << pow(num, 3) << endl;
    
    return 0;
}
