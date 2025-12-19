#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printPair(vector<int> arr){
    int i;
    for(i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    printPair(arr);

}