#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}