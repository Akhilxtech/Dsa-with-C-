#include <iostream>
using namespace std;
int digit(int n){
    int count=0;
    while(n>0){
        int ld=n%10;
        count++;
        n/=10;
    }
    return count;
}
int main() {
    int n=12345;
    cout<<digit(n);
    
    return 0;
}