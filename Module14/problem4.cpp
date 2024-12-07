// input a string of even length and return the second half of that string using inbuilt substr function
#include <iostream>
using namespace std;
#include<string>
#include<algorithm>

int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    int half=str.size()/2;
    cout<<"substring is:"<<str.substr(half);
    return 0;
}