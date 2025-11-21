#include<iostream>
using namespace std;
int binarySearch(int *arr, int n, int target){
    int st=0,end=n-1,mid;
    while(st<=end){
        mid =(st + end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if ( arr[mid]< target){
            st = mid + 1;
        }
        else {
            end = mid -1 ;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,n,6);
    return 0;

}