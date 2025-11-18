#include<iostream>
int main(){
    int a=3;
    int *p=&a;
    std::cout << *p; // with the using of *p we will get the value of a, or what value is
                    // store in the address of p pointer.


    std::cout << p; // this is shows the address of a variable
    

     


    return 0;
}