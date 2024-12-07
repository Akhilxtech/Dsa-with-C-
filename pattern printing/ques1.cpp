#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter no. of rows " << endl;
    cin >> n;
    cout << "enter no. of coloumns " << endl;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}