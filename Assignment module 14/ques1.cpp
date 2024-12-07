// input a string of size n and update all the odd number positions to the characte "#" consider 0 based indexing
#include <iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    cout<<"original string"<<endl;
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i]='#';
        }
    }
    cout<<"updated string"<<endl;
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }

    
    
    return 0;
}