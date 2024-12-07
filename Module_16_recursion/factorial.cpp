#include <iostream>
using namespace std;
int fact(double long n){
    if(n==1||n==0) return 1; //base case;
    return n*fact(n-1);
}
int main() {
    double long num;
    cout<<"enter numbers whose factorial you want"<<endl;
    cin>>num;
    cout<<fact(num);
    return 0;
}
