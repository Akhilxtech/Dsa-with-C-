#include <iostream>
using namespace std;

int main()
{
    int i, n, fact;
    cout << "enter the value of n " << endl;
    cin >> n;
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        cout << fact << endl;
    }

    return 0;
}