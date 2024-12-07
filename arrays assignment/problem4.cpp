// Find the difference between the sum of elements at even indices to the sum of elements at odd indices
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of an array:";
    cin>>size;
    int arr[size];
    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sume=0;
    int sumo=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            sume+=arr[i];
        }
        else{
            sumo+=arr[i];
        }
    }
    int diff=sume-sumo;
    cout<<"the diffrence between the sum of even indices and sum of odd indices is: "<<diff;
    return 0;
}
