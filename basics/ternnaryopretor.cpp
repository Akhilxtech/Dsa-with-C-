#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "enter your marks " << endl;
    cin >> marks;
    // syntax= condition?true:false;
    (marks >= 33) ? cout << " pass " : cout << "fail";
    return 0;
}