#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    if (rows <= 0 || cols <= 0 || rows > 50 || cols > 50) {
        cout << "Invalid size";
        return 1;
    }
    int a[50][50];
    cout << "Enter elements: ";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) cin >> a[i][j];

    int largest = a[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] > largest) largest = a[i][j];

    cout << "Largest element = " << largest;
    return 0;
}
