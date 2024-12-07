#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{// key<mid
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;// if key was not found in array
}
int main() {
    int even[]={3,4,15,33,54,56};
    int odd[]={4,7,9,12,40};

    int index=BinarySearch(even,6,336);
    cout<<"The index of 336 is:"<<index<<endl;
    index=BinarySearch(odd,5,456);
    cout<<"The index of 456 is:"<<index<<endl;
    
    return 0;
}