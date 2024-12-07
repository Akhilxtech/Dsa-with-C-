#include <iostream>
#include<vector>
using namespace std;

int main() {
    // vector <int> v(5,2);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
    vector< vector<int> > v(3,vector<int> (4,2));// 2222
    //(3,vector<int>(4)) 3 vector ban jayenge 4 size ke (or) 3 ka mtlb hai 2d vector main hum kitne vector dal skte hai or vector<int> (4) ka mtlb hai un 3 vector ka size kya hoga
    //cout<<v.size()<<endl;
    //printing vector
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //printing row
    cout<<v.size()<<endl;
    //printing coloumn
    cout<<v[0].size();
    return 0;
}