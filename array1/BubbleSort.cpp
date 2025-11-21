#include<iostream>
using namespace std ;
void bubbleSort(int *arr, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    for(int i=0; i<n;i++){
        cout<<arr[i];

    }

    return 0;
}