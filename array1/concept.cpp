#include<iostream>
using namespace std;
// int  main(){
//     int a=10;
//     int *ptr=&a; // it will show the address of the int a ;
//     int y=20;
//     ptr=&y;         // here we can see that we can make the pointer like a variable some time it will 
//                 // take some value and after some we can store another value (means address )
//     cout<<*ptr;
// }
int main(){
    //but in the case of pointer we can not do that thing,
    int *ptr;
    int a[]={9};
    int y=90;
    ptr =a;
    cout<<*ptr;
   // ptr=y;
  // cout<<*ptr; // here we will get a error because cpp does not allow to do this thats why 
   //the poiters first index act like a constant


}
