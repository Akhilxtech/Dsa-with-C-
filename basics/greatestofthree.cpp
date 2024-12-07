#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "enter number1 " << endl;
    cin >> n1;
    cout << "enter number2 " << endl;
    cin >> n2;
    cout << "enter number3 " << endl;
    cin >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << n1 << " is a greater number " << endl;
    }
    if (n1 < n2 && n2 > n3)
    { // n2>n1 and n2>n3
        cout << n2 << " is a greater number " << endl;
    }

    if (n3 > n1 && n3 > n2)

    {
        cout << n3 << " is a greater  number " << endl;
    }
    return 0;
}