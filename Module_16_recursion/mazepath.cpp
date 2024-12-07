#include <iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;// out of the maze
    if(sr==er&&sc==ec) return 1; //reached destination
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways+downways;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec) return;// out of the maze
    if(sr==er&&sc==ec){
        cout<<s<<endl;
        return;
    }; //reached destination
    printpath(sr,sc+1,er,ec,s+"R");
    printpath(sr+1,sc,er,ec,s+"D");
}
int main() {
    int srow,scol,erow,ecol;
    cout<<"enter starting row:"<<endl;
    cin>>srow;
    cout<<"enter starting coloumn:"<<endl;
    cin>>scol;
    cout<<"enter ending row:"<<endl;
    cin>>erow;
    cout<<"enter ending coloumn:"<<endl;
    cin>>ecol;
    cout<<"the total number of ways to reach destination are:"<<maze(srow,scol,erow,ecol)<<endl;
    cout<<" their paths are: "<<endl;
    printpath(srow,scol,erow,ecol," ");
    return 0;
}