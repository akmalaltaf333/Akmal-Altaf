#include <iostream>
using namespace std;

// Function to calculate factorial
long long calculateFactorial(int n) {
    long long factorial = 1;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int num;
    
    cout << "Enter a number to calculate factorial: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        long long result = calculateFactorial(num);
        cout << "Factorial of " << num << " is: " << result << endl;
    }
    
    return 0;
}
