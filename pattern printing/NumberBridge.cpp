#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n:" << "";
    cin >> n;
    int m = n - 1;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i;
    }
    cout << endl;

    for (int f = 1; f <= m; f++)
    {
        int a = 1;
        for (int j = 1; j <= m + 1 - f; j++)
        {
            cout << a;
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;
        }
        nsp += 2;
        for (int l = 1; l <= m + 1 - f; l++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}