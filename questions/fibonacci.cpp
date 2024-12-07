#include <iostream>
using namespace std;

int main()
{
    int n, a, b, sum;
    cout << "enter value of n " << endl;
    cin >> n;
    a = 1;
    b = 1;
    sum = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        }
    cout << b;
    return 0;
}