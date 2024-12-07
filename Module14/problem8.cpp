// given a sentence str ,return the word that is occuring most number of times in the sentence
#include <iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    // printing vector fo proof
    cout<<"string before sorting:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // sorting the string
    sort(v.begin(),v.end()); // sort krne se ek jaise word ek sath ajayenge
    cout<<"string after sorting:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    // loop for printing word
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
    return 0;
}