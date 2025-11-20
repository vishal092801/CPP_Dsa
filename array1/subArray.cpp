
// Subb array is the countigous array of the array 
// Let the array is [1,2,3,4,5]
/*sub array will be like this 
            1 12 123 1234 12345
            2 23 234 2345
            3 34 345 
            4 45
            5*/

#include<iostream>
using namespace std;
void subArray(int *arr,int n){
    for(int st=0;st<n;st++){
        for(int end=st; end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    subArray(arr,n);
    return 0;

}