#include <iostream>
#include<climits>
using namespace std;
// method 1 print max value
// void printmax(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(max,arr[idx]) max=arr[idx];
//     printmax(arr,n,idx+1,max);
// }
// method 2 store max value
// int storemax(int arr[],int n,int idx){
//     if (idx==n) return INT_MIN;
//     return max(arr[idx],storemax(arr,n,idx+1));
// }
int storemin(int arr[],int size,int idx){
    if(idx==size) return INT_MAX;
    return min(arr[0],storemin(arr,size,idx+1));
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<storemin(arr,size,0);
    
    return 0;
}