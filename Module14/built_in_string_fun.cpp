#include <iostream>
#include<string>
#include<algorithm>// for accesing reverse function
using namespace std;

int main() {
    // length
    string str="akhil is a good boy";
    cout<<"length of string is "<<str.size()<<endl;// size function does not count null character and you can also use length function
    // push back add letter at the end of the string and you can only add single letter at the end
    string str1="abcd";
    cout<<"initial string:"<<str1<<endl;
    str1.push_back('e');
    str1.push_back('f');
    cout<<"final string:"<<str1<<endl;
    //pop back functions remove last letter from the string
    string str2="akhil";
    cout<<"initial string:"<<str2<<endl;
    str2.pop_back();
    cout<<"final string:"<<str2<<endl;
    // "+" operetor use to concatenate two strings or you can modify string by adding another string at the starting or end of an string
    // you can not add integers with string
    string str3="akhil";
    string str4="Tiwari";
    cout<<"string without concatenation:"<<str3<<endl;
    str3=str3+str4;
    cout<<"string after concatenation:"<<str3<<endl;
    // reverse function
    string str5="abcdef";
    cout<<"without reverse:"<<str5<<endl;
    reverse(str5.begin()+2,str5.begin()+5);//    reverse(str5.begin(),str5.end());

    cout<<"string after reverse:"<<str5<<endl;
    
    return 0;
}