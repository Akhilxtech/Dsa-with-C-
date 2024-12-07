// Check whether the given string is palindrome or not.
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    // int i=0;
    // int j=str.length()-1;
    bool ispalindrome=true;
    for(int i=0,j=str.length()-1;i<j;i++,j--){
        if(str[i]!=str[j]) ispalindrome=false;
    }
    if(ispalindrome) cout<<"true";
    else cout<<"false";

    
    return 0;
}