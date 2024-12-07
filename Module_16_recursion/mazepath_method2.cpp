#include <iostream>
using namespace std;
int maze(int er,int ec){
    if(er<1||ec<1) return 0;
    if(er==1&&ec==1) return 1;
    int rightways=maze(er,ec-1);
    int downways=maze(er-1,ec);
    return rightways+downways;
}
void printpath(int er,int ec,string s){
    if(er<1||ec<1) return;
    if(er==1&&ec==1){
        cout<<s<<endl;
        return;
    }
    printpath(er,ec-1,s+"R");
    printpath(er-1,ec,s+"D");
}
int main() {
    int erow,ecol;
    cout<<"enter ending row:"<<endl;
    cin>>erow;
    cout<<"enter ending coloumn:"<<endl;
    cin>>ecol;
    cout<<"the total number of ways to reach destination are:"<<maze(erow,ecol)<<endl;
    cout<<" their paths are: "<<endl;
    printpath(erow,ecol," ");
    return 0;
}