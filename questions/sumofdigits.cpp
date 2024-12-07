#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    int ld = n;
    int sum = 0;
    while (n > 0)
    {
        ld = n % 10;
        n /= 10;
        sum = sum + ld;
    }

    cout << sum << endl;
    return 0;
}