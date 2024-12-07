// Q2. Input a string of length n and count all the consonants in the given string.
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"enter string:"<<endl;
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        if((str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[1]!='u')&&(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[1]!='U')){
            count++;
        }
    }
    cout<<"number of consonats present in string are:"<<count<<endl;
    
    return 0;
}