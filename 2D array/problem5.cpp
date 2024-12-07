// transpose of the marix
#include <iostream>
using namespace std;

int main(){
    int rows;// no. of row in a matrix
    cout<<"enter no. of rows in a matrix:"<<endl;
    cin>>rows;
    int col;
    cout<<"enter number of coloumns in a matrix:"<<endl;
    cin>>col;
    int arr[rows][col];
    cout<<"enter matrix elements:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enterd matrix is:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //performing operetions
    // method 1 coloumn wise printing
    cout<<"transpose matrix is(by using coloumn printing):"<<endl;
    for(int j=0;j<col;j++){
        for(int i=0;i<rows;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // method 2 store in a another matrix
    int trans[col][rows];// transpose matrix ka size interchange krdo agar size m X n tha to n x m krdo
    for(int i=0;i<col;i++){
        for(int j=0;j<rows;j++){
            trans[i][j]=arr[j][i];
        }
    }
    cout<<"the transposed matrix is(by method stroing in another matrix):"<<endl;
    for(int i=0;i<col;i++){
        for(int j=0;j<rows;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}