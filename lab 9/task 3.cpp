
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num <= 0) {
        cout << "Invalid number! Enter again: ";
        cin >> num;
    }

    cout << "Valid number entered: " << num;
    return 0;
}

