#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;

    
    cout << "Enter number of elements: ";
    cin >> n;

   
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

   
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
    } else {
        
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        
        cout << "Array after deletion:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}