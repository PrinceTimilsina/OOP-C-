#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x1, y1, x2, y2;

    // Input the coordinates of the first point
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    // Input the coordinates of the second point
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;
    // Calculate the distance using the distance formula
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the distance
    cout << "The distance between the points (" << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") is " << distance << endl;

    return 0;
}

