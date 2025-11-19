/*basically in this case an array is act like a pointer when pass it in a function 
argument*/
#include<iostream>
using namespace std;
void sample(int b[]){
    b[0]=10;
}
//another way to declare a fuction using array;
void anotherway(int *ptr){
    cout<<*ptr<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6};
   // sample(arr);
     //  cout<<arr[0];   // in this case we can seen that array is call by refe.
    //cout<<arr<<endl;   // an array is act like a pointer it is the pointer of first index.
    //cout<<*arr<<endl;   //dereferencing it will show the value of the array in the first index
    // cout<< *(arr+1)<<endl;
    anotherway(arr);
    cout<<arr<<endl;
}