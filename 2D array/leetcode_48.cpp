// rotate an array by 90 degree
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array: "<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"enter array element: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enterd matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // doing transpose of input matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"transpose of matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // reverse the array row wise
    for(int k=0;k<n;k++){// traversing each row
        int i=0;
        int j=n-1;
        while(i<=j){// swapping k,i and k,j
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }
    cout<<"matrix after rotating 90 degree: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}