/* star flipped triangle*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n:" << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {                                    // for spaces or #
        for (int j = 1; j <= n - i; j++) // agar n+1-i use krenege to ek space extra print hoga isliye hum isme n-i usse krenge
        {
            cout << " ";
        } // for star
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}