#include <iostream>
using namespace std;
// string isprime(int n){
//     if(n==1 || n==0) return "1 and 0 is not a prime";
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return "not prime";
//         }
//     }
//     return "prime";
// }

// brute force approach for prime numbers in a range
void isprime(int n,int N){
    if(n==1) cout<<"1 IS NOT A PRIME NUMBER"<<endl;
    if(n==0) cout<<"0 IS NOT A PRIME NUMBER"<<endl;
    for(int k=n;k<=N;k++){
        bool prime=true;
        for(int i=2;i*i<=k;i++){
            if(k%i==0){
                prime=false;
                break;
            }
        }
         if(prime){
            cout<<k<<" ";
        }
        
    }
}
int main() {
    int n;
    cout<<"enter starting range:"<<endl;
    cin>>n;
    int N;
    cout<<"enter ending range:"<<endl;
    cin>>N;
    isprime(n,N);
    
    return 0;
}