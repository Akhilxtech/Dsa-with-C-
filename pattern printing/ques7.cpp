/*+
1
13
135
1357
print pattern of odd number*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a = a + 2;
        }
        cout << endl;
    }
    return 0;
}