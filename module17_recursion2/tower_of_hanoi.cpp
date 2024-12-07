#include <iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){// source,helper,destination
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main() {
    int disk;
    cout<<"enter number of disk:"<<endl;
    cin>>disk;
    hanoi(disk,'A','B','C');
    
    return 0;
}