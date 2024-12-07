#include <iostream>
using namespace std;

int main()
{
    float area, r, pi;
    cout << "enter radius of the circle " << endl;
    cin >> r;
    pi = 3.14159265359;
    area = pi * r * r;
    cout << "area of the circle is " << area;
    return 0;
}