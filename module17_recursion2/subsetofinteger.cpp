#include <iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,int idx,vector<int> v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    subset(arr,n,idx+1,v);
}

int main() {
    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    subset(arr,size,0,ans);
    return 0;
}