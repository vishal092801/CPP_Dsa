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
    int max=a[0];
     for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<endl<<"largest element is "<<max;
    return 0;
}