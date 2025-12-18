#include<iostream>
using namespace std;
int main(){
    int num , r=0, s=0;
    cin>>num;

    while(num != 0){
        r= num %10;
        s+=r;
        num=num/10;
    }
    cout<<"the sum of the digits is  "<<s;
}