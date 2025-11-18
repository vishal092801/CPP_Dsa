#include<iostream>
using namespace std;
void change(int s){
    int b;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    s=b;
    cout<<s<<endl;
}
int main(){
    int a=90;
    change(a);
    cout<<a;
    return 0;
}
/*In the case of call by value we make a copy of var. in a functio
here no change will be occurs in the main function */