#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter any number " << endl;
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << n << " is divisible by 5 and 3 " << endl;
    }
    else
    {
        cout << n << " is not divisible by 5 and 3 " << endl;
    }
    return 0;
}