#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    
    // Calculate size using sizeof() trick
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Size of the array (in bytes): " << sizeof(arr) << endl;
    cout << "Size of one element (in bytes): " << sizeof(arr[0]) << endl;
    cout << "Length of array (number of elements): " << size << endl;
    
    return 0;
}
