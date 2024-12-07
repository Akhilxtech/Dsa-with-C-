#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n:" << "";
    cin >> n;
    int m = n - 1;
    int nsp = 1;
    for (int f = 1; f <= 2 * n - 1; f++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int l = 1; l <= m + 1 - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}