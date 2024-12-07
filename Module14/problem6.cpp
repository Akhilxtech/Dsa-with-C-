// input a string and return the number of times thr neighbouring characters are diffrent from each other
#include <iostream>
using namespace std;
#include<string>
int main() {
    string str;
    cout<<"enter string:"<<endl;
    getline(cin,str);
    int count=0;
    int n=str.length();
    if(n==1){
        count=0;
    }
    else{
        for(int i=0;i<n;i++){
            if(i==0){
                if(str[i]!=str[i+1]) count++;// for index 0 
            }
            else if(i==n-1){// for last index
                if(str[i]!=str[i-1]) count++;
            }
            else if(str[i]!=str[i+1]&&str[i]!=str[i-1]){
                count++;
            }
        }
    }
    cout<<"number of diffrent neighbouring characters are:"<<count<<endl;
    
    return 0;
}