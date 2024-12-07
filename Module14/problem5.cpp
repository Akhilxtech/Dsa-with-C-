// return the total number of digits in a number without using loop 
// hint try using inbuilt to_string() function
#include <iostream>
using namespace std;
#include<string>
int main() {
    int num;
    cout<<"enter any number:"<<endl;
    cin>>num;
    string s=to_string(num);
    cout<<"the number of digits in a number "<<num<<" is "<< s.length();
    
    return 0;
}