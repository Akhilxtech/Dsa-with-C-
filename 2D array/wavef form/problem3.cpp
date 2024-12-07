/* 1 2 3 
   4 5 6
   7 8 9
o/p= 1 4 7 8 5 2 3 6 9*/
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
    // spiral printing (print coloumn wise)
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<rows;i++){
                cout<<arr[i][j]<<" ";         
            }
        }
        else{
            for(int i=rows-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
