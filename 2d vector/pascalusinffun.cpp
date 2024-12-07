#include <iostream>
#include<vector>
using namespace std;
vector<vector <int> > pascal(int numrows){
    int m=numrows;
    //creating structure of pascal triangle of size m;
    vector<vector<int > > v;
    for(int i=1;i<=m;i++){
        vector<int> a(i);// creating vector of vector
        v.push_back(a);
    }
    //filling elements on created vector
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
    }
    return v;

}

int main() {
    int size;
    cout<<"enter the size of an pascal triangle:"<<endl;
    cin>>size;
    vector< vector<int> > result=pascal(size);
    //printing pascal triangle
    for(int i=0;i<size;i++){
        for( int j=0;j<=i;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}