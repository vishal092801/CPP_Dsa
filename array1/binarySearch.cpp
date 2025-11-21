// binary search is way to find the target element in an array , in the way 
//where we have to search in a every half of array.
// Array must be sorted main condition
#include<iostream>
using namespace std;
int binarySearch(int *arr1,int size, int target){
    int st=0,end=size-1;
    
    while(st<=end){
        int mid = (st+end)/2;
        if(arr1[mid]==target){
            return mid;
        }
        else if(arr1[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    return -1;

}
int main(){

    int arr[]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(int);
    int arr1[]={5,4,3,2,1,0};
    int n1= sizeof(arr1)/sizeof(int);
    cout<<binarySearch(arr1,n1,2);

    return 0;

    
}