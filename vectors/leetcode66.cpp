// plus one
/*
input=[1,2,3]
output=[1,2,4]
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cout << "enter the size of an array:" << endl;
    cin >> x;
    cout << "enter the array elements:" << endl;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (v[i] < 9)
        {
            v[i]++;
            break;
        }
        else
        {
            v[i] = 0;
        }
    }
    if (v[0] == 0)
    {
        v.insert(v.begin(), 1);
        // v[0] = 1;
    }
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}