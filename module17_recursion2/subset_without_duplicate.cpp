#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(string ans,string original,vector<string>& finalans,int idx,bool flag){
    if(idx==original.length()){
        finalans.push_back(ans);
        return;
    }
    char ch=original[idx];
    if(original.length()==1){
        if(flag==true) subset(ans+ch,original,finalans,idx+1,true);
        subset(ans,original,finalans,idx+1,true);
        return;
    }
    char ch2=original[idx+1];
    if(ch==ch2){
        if(flag==true) subset(ans+ch,original,finalans,idx+1,true);
        subset(ans,original,finalans,idx+1,false);
    }
    else{
        if(flag == true) subset(ans+ch,original,finalans,idx+1,true);
        subset(ans,original,finalans,idx+1,true);
    }
}

int main() {
    string str;
    cout<<"enter string:"<<endl;
    getline(cin,str);
    sort(str.begin(),str.end());
    vector<string> v;
    subset("",str,v,0,true);
    cout<<"subsets of strings are:"<<endl;
    for(string ch:v){
        cout<<ch<<endl;
    }
    
    return 0;
}