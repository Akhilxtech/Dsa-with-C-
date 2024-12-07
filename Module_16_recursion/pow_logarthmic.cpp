#include <iostream>
using namespace std;
int pow(int x,int n){
    if(x==0) return 0;
    if(n==0) return 1;
    int ans=pow(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }
}
int main() {
    int b,e;
    cout<<"enter base:"<<endl;
    cin>>b;
    cout<<"enter exponent or power:"<<endl;
    cin>>e;
    cout<<b<<" raised to the power "<<e<<" is:"<<pow(b,e);
    
    return 0;
}