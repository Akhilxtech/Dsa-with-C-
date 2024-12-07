
#include <iostream>
using namespace std;
// method 1 using for loops
int pow(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
// method 2 using recursion
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main() {
    int a,b;
    cout<<"enter base:"<<endl;
    cin>>a;
    cout<<"enter exponent:"<<endl;
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" using iterative method is:"<<pow(a,b)<<endl;
    cout<<a<<" raised to the power "<<b<<" using recursion method is:"<<power(a,b);

    return 0;
}