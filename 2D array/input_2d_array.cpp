#include <iostream>
using namespace std;

int main(){
    int rows;
    int col;
    cout<<"enter the no. of rows: "<<endl;
    cin>>rows;
    cout<<"enter the no. of coloumns: "<<endl;
    cin>>col;
    int arr[rows][col];
    cout<<"array elements:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the entered elements are:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
