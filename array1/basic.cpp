// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    // Write C++ code here
    //int arr[10];
    //int arr[5] = {1,2,3,4,5};
    //int arr[5] = {10,20};
    //int arr[5] = {0};
    //int arr[5] = {1};
    //int arr[] = {10,20,23};
    
    //printArray(arr,3);
    
    // int arr[5] = {11,23,35,65,77};
    // int size = 5;
    // //observation -> index -> 0 -> <size -> [0 -> size-1]
    // for(int i=0; i<size; i++) {
    //     cout << arr[i] << ", ";
    // }
        
    //declare
    int arr[10];
    cout << "Enter the value of n, (n= number of values to take input for)" << endl;
    int n ;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cout << "Taking input for index: " << i << endl;
        cin >> arr[i] ;
    }
    return 0;
}