#include <iostream>
#include<vector>
using namespace std;
// void printelement(int arr[],int n,int idx){
//     if(idx==n){
//         return;
//     }
//     cout<<arr[idx]<<" ";
//     printelement(arr,n,idx+1);
// }
void printvector(vector<int>& vec,int idx){
    if(idx==vec.size()){
        return;
    }
    cout<<vec[idx]<<" ";
    printvector(vec,idx+1);
}
int main() {
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int size=sizeof(arr)/sizeof(arr[0]);
    // printelement(arr,size,0);
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    printvector(v,0);

    return 0;
}