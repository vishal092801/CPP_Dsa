#include<iostream>
using namespace std;
int main(){
    // way to write a 2D array is 
    int arr[3][2]={ {1,2},
                    {3,4},     // this is the basic initialization of an array 
                    {5,6}};
    for(int i=0; i<3; i++){
        for(int j=0; j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}