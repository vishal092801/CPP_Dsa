#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n ; i++){
        if(a[i]<a[i+1])
            swap(a[i+1], a[i]);
    }
    for(i=0; i<n; i++)
        cout<<a[i];
    
}