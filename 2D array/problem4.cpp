// write a pgm to print sum of all elements present in 2-d matrix
#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter the no. of rows:"<<endl;
    cin>>rows;
    int col;
    cout<<"enter the no. of coloumns:"<<endl;
    cin>>col;
    int arr[rows][col];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"the sum of all elements is:"<<sum;
    return 0;
}