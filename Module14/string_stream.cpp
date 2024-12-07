// string stream class
#include <iostream>
#include<sstream>// to use string stream
using namespace std;

int main() {
    string str;
    cout<<"enter any string:"<<endl;
    getline(cin,str);
    stringstream s(str);
    string temp;// used to store words as string
    while(s>>temp){// stream se temp main input le raha hu
        cout<<temp;
    }
    
    return 0;
}