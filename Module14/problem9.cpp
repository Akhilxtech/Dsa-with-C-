// given n strings consisting of digits from 0 to 9 return the index of string whihc has max value
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int x;
    cout<<"enter the size of the vector"<<endl;
    cin>>x;
    vector<string> v(x);
    cout<<"enter the string"<<endl;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int max=stoi(v[0]);
    string maxs=v[0];// used to print integer with leading zeros like 002901 if you not use this then out put will be without leading zero like 2901
    for(int i=1;i<x;i++){
        int num=stoi(v[i]);
        if(num>max){
            max=num;
            maxs=v[i];
        }
    }
    cout<<"the maximum integer is:"<<maxs<<endl;
    return 0;
}