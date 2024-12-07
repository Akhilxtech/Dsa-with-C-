#include <iostream>
using namespace std;
int main(){
    int m,n;// no. of rows and coloumns of first matrix
    cout<<"enter no. of rows in a first matrix: "<<endl;
    cin>>m;
    cout<<"enter no. of coloumns in a first matrix:"<<endl;
    cin>>n;
    int p,q;
    cout<<"enter number of rows in a second matrix:"<<endl;
    cin>>p;
    cout<<"enter number of coloumns in a second matrix: "<<endl;
    cin>>q;
    if(n==p){
        int matrix1[m][n];
        cout<<"enter element of matrix 1:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>matrix1[i][j];
            }
        }
        cout<<"matrix 1 is:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix1[i][j]<<" ";
            }
            cout<<endl;
        }
        int matrix2[p][q];
        cout<<"enter element of second matrix:"<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>matrix2[i][j];
            }
        }
        cout<<"second matrix is:"<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cout<<matrix2[i][j]<<" ";
            }
            cout<<endl;
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){// n ya p tak loop chlayenge 
                    // res[i][j]= a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[j][2]----so on
                    res[i][j]+=matrix1[i][k]*matrix2[k][j]; 
                }
            }
        }
        cout<<"multiplication of matrix is:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"matrix addition is not possible";
    }
    return 0;
}