#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter any number " << endl;
    cin >> n;
    if (n >= 100 && n <= 999)
    {
        cout << "enterd number is a three digit number " << endl;
    }
    else
    {
        cout << " enterd no. is  not a three digit number " << endl;
    }
    return 0;
}