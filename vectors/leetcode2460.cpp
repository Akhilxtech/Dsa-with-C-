#include <iostream>
#include <vector>
using namespace std;
void opretions(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i + 1])
        {
            v[i] = v[i] * 2;
            v[i + 1] = 0;
        }
    }
    int lastnonzero = 0;
    int temp;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            temp = v[i];
            v[i] = v[lastnonzero];
            v[lastnonzero] = temp;
            lastnonzero++;
        }
    }
    return;
}
int main()
{
    int x;
    cout << "enter the size of an array:" << endl;
    cin >> x;
    vector<int> a(x);
    cout << "enter array elements: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    opretions(a);
    cout << "resultant:" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}