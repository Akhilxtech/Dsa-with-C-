#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter any number " << endl;
    cin >> n;
    if (n % 3 == 0 || n % 5 == 0)
    {
        if (n % 15 != 0)
        {
            cout << n << " is divisible by 3 or 5 but not divisible by 15 " << endl;
        }
        else
        {
            cout << "condition is not matched " << endl;
        }
    }
    else
    {
        cout << "condition is not matched " << endl;
    }
    return 0;
}