#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
    int term;
    cout<<"enter the term which you want:"<<endl;
    cin>>term;
    cout<<"The "<<term<<"th term is:"<<fibo(term);
    
    return 0;
}