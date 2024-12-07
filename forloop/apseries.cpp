#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    // 1 3 5 7 9 -------n
    // for (int i = 1; i < 2 * n - 1; i += 2)
    //{
    //    cout << i << endl;
    //}
    // method -2 using seperate variable  1 3 5 7 9-----------n
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 2;
    }
    return 0;
}