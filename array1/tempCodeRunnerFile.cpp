#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a[n];
    
    for(i=0; i<n; i++)
        cin>>a[i];
    
    if(n%2==0){
        for(i=0; i<n/2 ; i++){

            swap(a[i],a[n-i-1]);
        }
    }
    else {
         for(i=0; i<(n/2)-1 ; i++){

            swap(a[i],a[n-i-1]);
        }
        
    }
    for(i=0; i<n ; i++){
        cout<<a[i]<<" ";
    }


}