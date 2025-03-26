#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int largest = arr[0]; // Assume the first element is the largest initially

    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; // Update largest if a bigger element is found
        }
    }

    return largest;
}

int main() {
    int n[10] = {12, 34, 5, 9, 56, 23, 89, 45, 67, 10}; // Array of 10 integers

    int largest = findLargest(n, 10); // Find the largest element
    cout << "The largest element is: " << largest << endl;

    return 0;
}
