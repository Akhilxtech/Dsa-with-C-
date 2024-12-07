#include <iostream>
using namespace std;
int  reverse(int num){
    int revnum=0,ld;
    while(num!=0){
        ld=num%10;
        // revnum+=ld;
        revnum=(revnum*10)+ld;
        num/=10;
    }
    return revnum;
}
int main() {
    cout<<reverse(4375);
    
    return 0;
}