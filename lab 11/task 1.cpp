#include <iostream>
using namespace std;

int main() {
    // Initialize array of five integers
    int arr[5] = {10, 20, 30, 40, 50};
    
    cout << "Array elements: ";
    
    // Traverse and print array elements
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
