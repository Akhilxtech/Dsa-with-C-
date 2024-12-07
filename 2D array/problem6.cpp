// transform the given matrix into its transpose
#include <iostream>
using namespace std;

int main(){
    int rc;// no. of row or coloumns in a matrix
    cout<<"enter no. of rows/columns in a matrix:"<<endl;
    cin>>rc;
    int arr[rc][rc];
    cout<<"enter matrix elements:"<<endl;
    for(int i=0;i<rc;i++){
        for(int j=0;j<rc;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enterd matrix is:"<<endl;
    for(int i=0;i<rc;i++){
        for(int j=0;j<rc;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transpose in the same matrix
    for(int i=0;i<rc;i++){
        for(int j=i+1;j<rc;j++){
            //swaapping of non diagnol element
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"transpose is:"<<endl;
    for(int i=0;i<rc;i++){
        for(int j=0;j<rc;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}