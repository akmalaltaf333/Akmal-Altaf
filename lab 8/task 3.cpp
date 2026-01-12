#include <iostream>
using namespace std;

int main() {
    int choice;
    float area, r, l, w, b, h;

    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Select shape: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> r;
            area = 3.14 * r * r;
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter length and width: ";
            cin >> l >> w;
            area = l * w;
            cout << "Area of Rectangle = " << area;
            break;

        case 3:
            cout << "Enter base and height: ";
            cin >> b >> h;
            area = 0.5 * b * h;
            cout << "Area of Triangle = " << area;
            break;

        default:
            cout << "Invalid choice!";
    }
    return 0;
}
