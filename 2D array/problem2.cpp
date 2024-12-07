// find the largest element from 2-d array
#include <iostream>
#include<climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int rows;
    cout<<"enter the no. of rows:"<<endl;
    cin>>rows;
    int col;
    cout<<"enter the no. of coloumns: "<<endl;
    cin>>col;
    int arr[rows][col];
    cout<<"enter matrix elements:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"the largest element is:"<<max;
    
    return 0;
}