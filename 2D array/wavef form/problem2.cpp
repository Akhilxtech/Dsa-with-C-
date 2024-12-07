#include <iostream>

using namespace std;
int main(){
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
    cout<<"wave form is:"<<endl;
    for(int i=rows-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}