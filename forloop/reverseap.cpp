#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    /*for (int i = 1; i <= 34; i++)
    {
        cout << a << endl;
        a = a - 3;
    }*/
    // method 2

    // for (int i = 100; i >= 1; i -= 3)
    //{
    //     cout << i << endl;
    // }
    // method 3
    for (; a > 0;)
    {
        cout << a << endl;
        a = a - 3;
    }
    return 0;
}