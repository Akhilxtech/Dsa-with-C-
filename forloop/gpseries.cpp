#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    // 1 2 4 8 16-----n gp series
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }

    return 0;
}