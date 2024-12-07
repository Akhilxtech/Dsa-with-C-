// given two strings s and t determine if they are isomorphic or not
#include <iostream>
using namespace std;
#include<string>
#include<vector>
int main() {
    string s;
    cout<<"enter string s:"<<endl;
    getline(cin,s);
    string t;
    cout<<"enter string t:"<<endl;
    getline(cin,t);
    vector<int> v(150,1000);// we give 1000 because we know that we have not more than 150 character it means there diffrence is also not more than 150 so we can give big value randomly
    bool isisomorphic= true;
    if(s.length()!=t.length()) isisomorphic=false;
    // view from s perspective 
    for(int i=0;i<s.length();i++){
        int idx=int(s[i]);
        if(v[idx]==1000) v[idx]=s[i]-t[i];
        else if(v[idx]!=s[i]-t[i]) isisomorphic=false;
    }
    //emptying the vector
    for(int i=0;i<150;i++){
        v[i]=1000;
    }
    // view from t perspective
    for(int i=0;i<s.length();i++){
        int idx=int(t[i]);
        if(v[idx]==1000) v[idx]=t[i]-s[i];
        else if(v[idx]!=t[i]-s[i]) isisomorphic=false;
    }
    if(isisomorphic){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}