// to_string() this function converts integer to string
#include <iostream>
using namespace std;
#include<string>
int main() {
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    string s=to_string(num);
    cout<<"converted form int to string:"<<s<<endl;
    
    return 0;
}