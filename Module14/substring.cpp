// substring
#include <iostream>
using namespace std;
#include<string>
int main() {
    string s="sadbutsad";
    cout<<"string is:"<<s<<endl;
    // s.substr(idx,len)
    cout<<"substring is:"<<s.substr(1,8)<<endl;
    return 0;
}