#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Input: Getting values for the 3x3 matrix from the user
    cout << "Enter elements for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Output: Display the 3x3 matrix
    cout << "\nThe 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
