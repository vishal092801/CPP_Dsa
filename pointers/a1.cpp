#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *p=&a;
    std::cout << *p<<endl; // with the using of *p we will get the value of a, or what value is
                    // store in the address of p pointer.


    std::cout << p<<endl; // this is shows the address of a variable

    int **pp=&p;
    cout<<pp<<endl;
    cout<<*pp<<endl;

     


    return 0;
}