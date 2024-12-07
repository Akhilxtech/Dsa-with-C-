#include <iostream>
#include<vector>
using namespace std;
void subsequence(vector<int>& arr,vector<int> final,int idx,int k){
    if(idx==arr.size()){
        if(final.size()==k){
            for(int i=0;i<final.size();i++){
                cout<<final[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(final.size()+(arr.size()-idx)<k) return;
    subsequence(arr,final,idx+1,k);
    final.push_back(arr[idx]);
    subsequence(arr,final,idx+1,k);
}
int main() {
    int size;
    cout<<"enter size of an vector:"<<endl;
    cin>>size;
    vector<int> arr(size);
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter value of k:"<<endl;
    cin>>k;
    vector<int> finalans;
    cout<<"subsequence are:"<<endl;
    subsequence(arr,finalans,0,k);
    return 0;
}