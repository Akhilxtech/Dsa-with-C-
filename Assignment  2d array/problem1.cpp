// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"enter number of rows:"<<endl;
    cin>>rows;
    int col;
    cout<<"enter number of coloumns:"<<endl;
    cin>>col;
    int arr[rows][col];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=10;
        }
    }
    cout<<"matrix elements are:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}