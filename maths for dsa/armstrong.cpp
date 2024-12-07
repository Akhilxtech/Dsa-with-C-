#include <iostream>
using namespace std;
bool isarmstrong(int n){
    int ld,sum=0,pow,original=n;
    while(n!=0){
        ld=n%10;
        pow=ld*ld*ld;
        sum+=pow;
        n/=10;
    }
    return sum==original;
}
int main() {
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    if(isarmstrong(num)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}