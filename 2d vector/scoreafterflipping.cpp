// leetcode 861
#include <iostream>
#include <vector>
using namespace std;
int matrixScore(vector<vector<int>>& grid) 
{
    int rows=grid.size();
    int col=grid[0].size();
    for(int i=0;i<rows;i++){
        if(grid[i][0]==0){
            // flip krdo
            for(int j=0;j<col;j++){
                if(grid[i][j]==0){
                    grid[i][j]=1;
                }
                else{
                    grid[i][j]=0;
                }
            }
        }
    }
    // coloumns main 0 or 1 ginne ke liye coloumn ka loop lagayenge
    for(int j=0;j<col;j++){
        int zeros=0;
        int ones=0;
        for(int i=0;i<rows;i++){
            if(grid[i][j]==0) zeros++;
            else ones++;
        }
        if(zeros>ones){
            for(int i=0;i<rows;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    // converting binary to decimal
    int sum=0;
    for(int i=0;i<rows;i++){
        int x=1;
        for(int j=col-1;j>=0;j--){
            sum+=grid[i][j]*x;
            x*=2;
        }
    }
    return sum;
    

}

int main() {
    int m;
    cout<<"enter no. of rows:"<<endl;
    cin>>m;
    int n;
    cout<<"enter no. of coloumns:"<<endl;
    cin>>n;
    cout<<"enter matrix element:"<<endl;
    vector<vector<int>> v(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int result=matrixScore(v);
    cout<<"the matrix score is:"<<result;    

    
    return 0;
}