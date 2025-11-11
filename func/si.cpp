#include<iostream>
using namespace std;
float simpleintrest(int p,int t,float r){
    
    return (p*t*r)/100;
}
int main(){
    int a=simpleintrest(10000,1,5);
    cout << a;
    return 0;
}