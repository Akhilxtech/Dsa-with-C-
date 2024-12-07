// WAP to find the largest three elements in the array.
#include <iostream>
#include<climits>
using namespace std;

int main(){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;
    int size;
    cout<<"enetr the size of an array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter elements of an array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>max1){
            // first largest element
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2&&arr[i]<max1){
            // second largest element
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3&&arr[i]<max2&&arr[i]<max1){
            // third largest element
            max3=arr[i];
        }
    }
    cout<<"the three largest elements of an array is: "<<max1 <<","<< max2 <<" and "<<max3;
    return 0;
}