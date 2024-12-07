#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"hello good morning"<<endl;
    fun(n-1);
}
int main(){
    int num;
    cout<<"enter number of times you want to print"<<endl;
    cin>>num;
    fun(num);
}