#include <iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<"in "<<n<<endl;
    pip(n-1);
    cout<<"in "<<n<<endl;
    pip(n-1);
    cout<<"post "<<n<<endl;
}
int main() {
    pip(4);
    return 0;
}