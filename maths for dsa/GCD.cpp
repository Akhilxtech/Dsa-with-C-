// euclid's algorithm
#include <iostream>
using namespace std;
int gcd(int a,int b){
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}
int gcdrec(int a,int b){
    // assume that a<b
    if(b==0) return a;
    return gcdrec(b,a%b);
}
int main() {
    int num1,num2;
    cout<<"enter number 1:"<<endl;
    cin>>num1;
    cout<<"enter number 2:"<<endl;
    cin>>num2;
    cout<<"the gcd of two numbers "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2)<<endl;
    cout<<gcdrec(num1,num2);
    return 0;
}