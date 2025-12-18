#include<iostream>
using namespace std;
/*int main(){
    int arr[]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";  // simple program to reverse an array 
    }
    return 0;
} */
//reverse using a function
void rev(int a[],int size){
    for(int i=size-1;i>=0;i--){  // this is not the efficient code its only print the values of the array 
                                    // in the reverse form but in actual its not done.
        cout<<a[i]<<" ";
    }
}
int main(){
    int n,i;
    cout<<"entet the size of the array";
    cin>>n;
    int arr[n];
    cout << "enter the values of the arrays";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    rev(arr,n);
    for(i=0;i<n ; i++)
        cout<<arr[i];
}