/*
    #            * * * *
                 * * * *   ye print krna hai to ek extra k loop chlayenge
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of  n " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}