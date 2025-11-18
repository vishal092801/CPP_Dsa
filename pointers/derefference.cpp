#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<"="<<a<<endl;/*basically derefferencing means * operator like *ptr show the value that is 
    store in the ptr location

    */  

    return 0;
}