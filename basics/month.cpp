#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << " enter value of x " << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << " january 31 days" << endl;
        break;
    case 2:
        cout << " feb 28 days " << endl;
        break;
    case 3:
        cout << " march 31 days " << endl;
        break;
    case 4:
        cout << " april 30 days " << endl;
        break;
    case 5:
        cout << " may 31 days " << endl;
        break;
    case 6:
        cout << " june 30 days " << endl;
        break;
    case 7:
        cout << " july 31 days " << endl;
        break;
    case 8:
        cout << " august 31 days " << endl;
        break;
    case 9:
        cout << " september 30 days " << endl;
        break;
    case 10:
        cout << " october 31 days " << endl;
        break;
    case 11:
        cout << " november 30 days " << endl;
        break;
    case 12:
        cout << " december 31 days " << endl;
        break;
    default:
        cout << " invalid input " << endl;
    }
    return 0;
}