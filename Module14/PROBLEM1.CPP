//count vowels on strings
#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
        i++;
    }
    cout<<"there are total "<<count<<" vowels";
    return 0;
}