#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse (vector<int> arr){
    vector<int> num = arr;
    int size = num.size();

    int i=0, j=size-1;
    while (i<=j){
        swap(num[i], num[j]);
        i++;
        j--;
    }
    return num;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans=reverse(arr);
    int size= ans.size();

    for(int i=0; i<size; i++)
        cout<<ans[i];
}