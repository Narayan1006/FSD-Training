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

    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                cout<<"element found same"<<endl;
                cout<<arr[i]<<endl;
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else{
                j++;
            }
        }
    }
     cout << "Array after deletion:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

}