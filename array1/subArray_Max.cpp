/*Maxsum of the sub array me sare subarray ke elements ka addition kiya jata hai
usme se jo sbse bada hota hai use print karana hota hai*/
/*kuch important predefind Macro 
INT_MAX ye int ke maximum num ko show krta hai man lo + infinity hai
INT_MIN ye int ke minimum num ko show karta hai man lo -infinity hai

ek or max fun hai jo do numbers ko compare krta hai usme se kon sa bada hai ye batata hai
n= max(int a, int b)
n=min(int a, int b) // ye minimum element ko return krta hai

*/


#include<iostream>
using namespace std;
void subArray_Max(int *arr,int n){
    int maxsum = INT_FAST16_MIN;
    for(int st=0;st<n;st++){
        for(int end=st; end<n;end++){
            int currentSum=0;
            for(int i=st;i<=end;i++){
                currentSum+=arr[i];
                
            }
            maxsum= max(maxsum,currentSum);
        }
    }
    cout << maxsum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    subArray_Max(arr,n);
    return 0;

}