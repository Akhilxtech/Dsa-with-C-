#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the side1 of a triangle " << endl;
    cin >> a;
    cout << "enter the side2 of a triangle " << endl;
    cin >> b;
    cout << "enter the side3 of triangle " << endl;
    cin >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "condition of triangle is satisfied " << endl;
    }
    else
    {
        cout << "condition is not satisfied " << endl;
    }
    return 0;
}