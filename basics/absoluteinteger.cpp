#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    if (n < 0)
    {
        n = -n;
        cout << n;
    }
    else
    {
        cout << n;
    }
    return 0;
}