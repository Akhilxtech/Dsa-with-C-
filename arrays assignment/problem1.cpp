// Count the number of elements strictly greater than x.
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    int target,count=0;
    cout<<"enter target number"<<endl;
    cin>>target;
    int arr[size];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>target)
        count++;
    }
    cout<<"there are total "<<count <<" numbers greater than "<<target;
    return 0;
}