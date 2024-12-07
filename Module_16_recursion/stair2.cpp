// problem statement: you have to find the number of ways to reach destination
// or at the top of the stair but there are some conditions:
// either one step or two step or three step at a time or their combination

#include <iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main() {
    int stairs;
    cout<<"enter number of stairs:"<<endl;
    cin>>stairs;
    cout<<"for "<<stairs<<" stairs there are total "<<stair(stairs)<<" ways";
    
    return 0;
}