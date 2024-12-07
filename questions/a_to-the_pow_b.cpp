#include <iostream>
using namespace std;

int main()
{
    int a, b;
    float pow;
    cout << "enter base " << endl;
    cin >> a;
    cout << "enter exponent " << endl;
    cin >> b;
    pow = 1;
    bool flag = true; // true means power is positive
    if (b < 0)
    {
        flag = false; // flase means power is negative
        b = -b;
    }
    for (int i = 1; i <= b; i++)
    {
        pow = pow * a;
    }
    if (flag == false)
    {
        pow = 1 / pow;
        b = -b;
    }
    if (a == 0 && b == 0)
    {
        cout << "not define" << endl;
    }
    else
    {
        cout << a << " raised to the power " << b << " is " << pow;
    }

    return 0;
}