// ques input a string of size n and update all the even postion in the string to character 'a' consider 0 based indexing
#include <iostream>
using namespace std;
#include<string>
int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<str;
    
    return 0;
}