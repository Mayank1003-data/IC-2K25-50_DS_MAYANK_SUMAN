#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Nested loops to print the 2D array
    for (int i = 0; i < 3; i++) {       // Loop for rows
        for (int j = 0; j < 4; j++) {   // Loop for columns
            cout << arr[i][j] << " ";
        }
        cout << endl; // New line after each row
    }

    return 0;
}
