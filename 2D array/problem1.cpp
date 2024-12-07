// write a pgm to store roll numbers and marks obtained by 4 students side by side in a matrix
#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows: "<<endl;
    cin>>rows;
    int col;
    cout<<"enter number of coloumns:"<<endl;
    cin>>col;
    int arr[rows][col];
    cout<<"enter roll number and marks of students"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"roll number and marks of students are:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}