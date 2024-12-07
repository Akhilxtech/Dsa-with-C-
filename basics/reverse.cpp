#include <iostream>
using namespace std;
bool ispalindrome(int num)
{
    if (num < 0)
    {
        return false;
    }
    int ld, rev = 0;
    int originalnum = num;
    while (num > 0)
    {
        rev = rev * 10;
        ld = num % 10;
        rev += ld;
        num /= 10;
    }
    return rev == originalnum;
}
int main()
{
    int n;
    cout << "enter any number" << endl;
    cin >> n;
    if (ispalindrome(n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}