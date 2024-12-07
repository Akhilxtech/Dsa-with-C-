#include <iostream>
using namespace std;
int nto1(int n){
    if (n==0) return 0;
    cout<<n<<endl;
    return nto1(n-1);
}
int main() {
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    cout<<"reverse counting is:"<<nto1(num);
    
    return 0;
}