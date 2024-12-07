//  Check if the given array is sorted or not.
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of an array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool issort=true;
    for(int i=0;i<size-1;i++){// give size - 1 so that we can handle index out of bound error
        if(arr[i]>arr[i+1]){
            issort=false;
            break;
        }
    }
    if(issort){
        cout<<"array is sorted ";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}