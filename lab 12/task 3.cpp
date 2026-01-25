#include <iostream>
using namespace std;

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
}

int main() {
    // Testing with different values
    checkEvenOdd(10);
    checkEvenOdd(15);
    checkEvenOdd(0);
    checkEvenOdd(7);
    
    // User input version
    int userNum;
    cout << "\nEnter a number: ";
    cin >> userNum;
    checkEvenOdd(userNum);
    
    return 0;
}
