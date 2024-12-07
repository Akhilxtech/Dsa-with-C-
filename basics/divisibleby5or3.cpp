#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter any number " << endl;
    cin >> n;
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            cout << n << " is divisible by 5 and 3 both " << endl;
        }
        else
        {
            cout << " condition is not matched " << endl;
        }
    }
    else
    {
        cout << "condition is not matched " << endl;
    }
    return 0;
}