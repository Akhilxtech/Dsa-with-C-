// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

// Input 1:
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0
// Output 1:
//     3
//     5
// 7 6 5 4 3
//     6
//     37

#include <iostream>
#include<vector>
using namespace std;
void pattern(vector<vector<int>>& mat){
    int rows=mat.size();
    int mid=rows/2;
    cout<<"output"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(i==mid||j==mid){
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main() {
    int rc;
    cout<<"enter number of rows or coloumns:"<<endl;
    cin>>rc;
    vector<vector<int>> v(rc,vector<int>(rc));
    cout<<"enter matrix element "<<endl;
    for(int i=0;i<rc;i++){
        for(int j=0;j<rc;j++){
            cin>>v[i][j];
        }
    }
    pattern(v);
    return 0;
}