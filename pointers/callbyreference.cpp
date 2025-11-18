#include<iostream>
using namespace std;
void ref(int *ptr){
    int a=10;
    *ptr=a;
    cout<<*ptr<<endl;// dereference hua hai
}
int main(){
    int a=20;
    ref(&a);
    cout<<a;

}
/*call by reference me basically hota hai ki hum function me address of the variable pass krte hai
or adress pass krne ke wajah se us address me jo bhi changes karte hai wo humare main function me 
dikhta hai jo bhi changes hum usme krte hai */