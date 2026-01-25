#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of array (N): ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print in reverse order
    cout << "Array in reverse order: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
