#include <iostream>
using namespace std;

int main() {
    int num[11] = {1, 2, 3, 4, 5, 6}; // Array with space for one extra element
    int currentSize = 6;              // Number of initialized elements
    int pos, val;

    cout << "Enter position (0 to " << currentSize << ") and value to insert: ";
    cin >> pos >> val;

    // Validate position
    if (pos < 0 || pos > currentSize) {
        cout << "Invalid position. Must be between 0 and " << currentSize << ".\n";
        return 1;
    }

    // Shift elements to the right
    for (int i = currentSize; i > pos; i--) {
        num[i] = num[i - 1];
    }

    // Insert value
    num[pos] = val;
    currentSize++;

    // Print updated array
    cout << "Updated array:\n";
    for (int i = 0; i < currentSize; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}