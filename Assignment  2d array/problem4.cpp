// Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 1 3
//  5
// 7 9
#include <iostream>
using namespace std;
#include<vector>
void diagnolprint(vector<vector<int> >& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main() {
    int rc;
    cout<<"enter the number of rows and coloumns:"<<endl;
    cin>>rc;
    cout<<"enter matrix elements"<<endl;
    vector<vector<int>> v(rc,vector<int>(rc));
    for(int i=0;i<rc;i++){
        for(int j=0;j<rc;j++){
            cin>>v[i][j];
        }
    }
    diagnolprint(v);
    return 0;
}