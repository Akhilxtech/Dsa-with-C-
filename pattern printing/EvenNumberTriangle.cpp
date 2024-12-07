/*
2
2 4
2 4 6
2 4 6 8
print even number triangle
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 2;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a += 2;
        }
        cout << endl;
    }
    return 0;
}