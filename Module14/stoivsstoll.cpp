// string to integer vs string to long inbuilt functions
#include <iostream>
#include<string>
using namespace std;

int main() {
    // string to integer
    string str ="123456";
    int x=stoi(str);
    cout<<x<<endl;
    // string to long
    string str1="45744673985724";
    long long y=stoll(str1);
    cout<<y<<endl;
    return 0;
}