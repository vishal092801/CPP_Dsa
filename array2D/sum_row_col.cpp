#include<iostream>
using namespace std;
void take_input(int arr[][3], int n , int m){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

}
void get_output(int arr[][3], int n , int m){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void sum_rows(int arr[][3], int n , int m){
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum+= arr[i][j];
        }
        cout<<"sum of row"<<sum<<endl;
    }

}
void sum_col(int arr[][3], int n , int m){
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum+= arr[j][i];
        }
        cout<<"sum of col"<<sum<<endl;
    }

}

int main(){
    int arr[3][3];
    take_input(arr, 3,3);
   // get_output(arr, 3,3);
   sum_rows(arr,3,3);
   sum_col(arr, 3,3);
}