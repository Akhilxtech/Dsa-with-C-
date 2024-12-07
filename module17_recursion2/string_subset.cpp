#include <iostream>
#include<vector>
using namespace std;
void subset(string ans,string original,vector<string>& finalans,int idx){
    if(idx==original.length()){// because we are sending index if we are not sending indrx then we use substr stl and check base consdition as if (original==" ")
        finalans.push_back(ans);
        return;
    }
    char ch=original[idx];
    subset(ans+ch,original,finalans,idx+1);// there are two function calls right and left this is left one
    subset(ans,original,finalans,idx+1);// this is calling right one
}
int main() {
    string st;
    cout<<"enter string:"<<endl;
    getline(cin,st);
    vector<string> str;
    
    subset("",st,str,0);
    for(string s:str){
        cout<<s<<endl;
    }
    
    return 0;
}