#include <iostream>
using namespace std;

// Function to swap alternate elements in an array
void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    // Sample array for demonstration
    int arr[] = {11, 22, 33, 44, 55, 66};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Swapping alternate elements
    swapAlternate(arr, size);

    // Printing the updated array
    cout << "Array after swapping alternate elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
