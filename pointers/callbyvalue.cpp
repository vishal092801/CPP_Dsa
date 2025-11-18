#include<iostream>
using namespace std;
void change(int s){
    int a=20;
    cout<<a<<endl;
}
int main(){
    int a=90;
    change(a);
    cout<<a;
    return 0;
}
/*In the case of call by value we make a copy of var. in a function 
here no change will be occurs in the main function */