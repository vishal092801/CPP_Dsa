#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<< "enter the size of the rows :"<<endl;
    cin>>n;
    cout<< "enter the size of the column :"<<endl;
    cin>>m;

    int arr[n][m];
    cout<< " enter the elements of the arrays";
    for(int i=0; i<n ; i++){
        for(int j=0; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n ; i++){
        for(int j=0; j<m ; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}
/*Some thought comes in our mind that in which way the matrix stored in the memory
generally we visualize the matrix in the form of 2d box but in the memory what happens ??
let suppose out matrix is { 1 2 3 }
                          { 2 3 4 }
                          { 2 3 4 }
                in the memory it will store in two ways 1. row major 2.column major
                1.row major {[1 2 3] [2 3 4] [2 3 4]}
                              row 1    row 2   row 3

                1.row major {[1 2 2] [2 3 3] [3 4 4]}
                               col 1   col 2   col3 */