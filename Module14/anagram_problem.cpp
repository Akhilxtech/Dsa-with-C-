// given two strings s and t return true if t is an anagram of s and otherwise false
#include <iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {
    string s;
    cout<<"enter string s:"<<endl;
    getline(cin,s);
    string t;
    cout<<"enter string t:"<<endl;
    getline(cin,t);
    sort(s.begin(),s.end());
    cout<<"string s after sorting: "<<s<<endl;
    sort(t.begin(),t.end());
    cout<<"string t after sorting: "<<t<<endl;
    if(s==t)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}