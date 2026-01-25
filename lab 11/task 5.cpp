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
    
    // Find largest number
    int largest = arr[0];
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "Array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Largest number in the array: " << largest << endl;
    
    return 0;
}
