#include <iostream>
#include<vector>
using namespace std;
void permutation(string ans,string original,vector<string>& final){
    if(original==""){
        final.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right,final);
    }
}
int main() {
    string str;
    cout<<"enter string:"<<endl;
    getline(cin,str);
    vector <string> ans;
    permutation("",str,ans);
    for(string ele:ans){
        cout<<ele<<endl;
    }
    
    return 0;
}