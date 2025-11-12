#include<iostream>
using namespace std;
int input(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<"enter the element of"<<i+1;
        cin>>arr[i];
    }
}
void output(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[20];
    
    input(arr,5);
   // output(arr,5);
   // linear search is basically find a element in array we want that element 
   //for example in a array of 5 elements a[]={1,2,3,4,5}
   //if we want to find 4 this will be called target . for this we have to traverse in every index of arry.
   int size=5,target;
   cout<<"enter your target element";
   cin>>target;
   for(int i=0; i<size; i++){
        if(target==arr[i]){
            cout<<"elements index num is ="<<i;
        }

   }

    return 0;

}