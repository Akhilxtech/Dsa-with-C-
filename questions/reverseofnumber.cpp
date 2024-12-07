#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    int ld = n;
    int r = 0;
    while (n > 0)
    {
        r = r * 10;
        ld = n % 10;
        r += ld;
        n /= 10;
    }
    cout << r << endl;

    return 0;
}