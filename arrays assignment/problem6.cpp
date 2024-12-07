// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of an array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        int count=0;// reset count =0 for each iteretion to count number of occurecne of each elements
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){// it means if count ==1 then that element is unique
            cout<<"the unique value is "<<arr[i];
            return 0;
        }
    }
    cout<<"no  unique value found";
    return 0;
}
// approach- count no.of occurence of elements