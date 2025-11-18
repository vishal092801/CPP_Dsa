#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"take input in array"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enterd elements are "<<endl;
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int min=a[0];
     for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<endl<<"smallest element is "<<min;
    return 0;
}