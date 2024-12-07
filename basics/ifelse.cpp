#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "enter a number " << endl;
    cin >> num1;
    if (num1 % 2 == 0)
    {
        cout << num1 << " is an even number" << endl;
    }
    if (num1 % 2 != 0)
    {
        cout << num1 << " is an odd number";
    }
    return 0;
}