//Write a program that allow to insert 10 different integer in an array and calculate the sum of even number.
#include <iostream>
using namespace std;

int main() {
    int arr[10], sum = 0;

    cout << "Enter 10 different integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    cout << "Sum of even numbers: " << sum;
    return 0;
}
