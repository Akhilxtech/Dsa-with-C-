//input a string of even length and reverse the first half of the string
#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    cout<<"enterd string is:"<<str<<endl;
    int half=str.size()/2;
    reverse(str.begin()+0,str.begin()+(half));
    cout<<"half reverse string is:"<<str<<endl;
    return 0;
} 