#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 25, 35, 45, 55, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0;
    float average;
    
    // Calculate sum
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    // Calculate average
    average = static_cast<float>(sum) / size;
    
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;
    
    return 0;
}
