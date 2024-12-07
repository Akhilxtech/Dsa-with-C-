// remove all occurence of 'a' from the string
#include <iostream>
#include<string>
using namespace std;
void remove(string ans ,string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') remove(ans,original,idx+1);
    else remove(ans+ch,original,idx+1);
}
int main() {
    string str;
    cout<<"enter string:"<<endl;
    getline(cin,str);
    remove("",str,0);
    
    return 0;
}