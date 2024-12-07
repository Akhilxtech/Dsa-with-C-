// given an string consisting of lower case english alphabets print the character that is occuring most number of times
#include <iostream>
#include<string>
#include<vector>
using namespace std; 

int main() {
    // // method 1
    // string s;
    // cout<<"enter any string:"<<endl;
    // getline(cin,s);
    // int max=0;
    // // counting maximum
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     int count=1;// atleast one time that character appear in a string
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(count>max) max=count;
    // }
    // // printing that maximum character
    // for(int i=0;i<s.length();i++){
    //     char ch=s[i];
    //     int count=1;// atleast one time that character appear in a string
    //     for(int j=i+1;j<s.length();j++){
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(count==max) cout<<ch<<" "<<max<<endl;
    // }
    // above method is not effective due to more number of loops
    // method -2 optimized approach
    string s;
    cout<<"enter any string:"<<endl;
    getline(cin,s);
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
    return 0;
}