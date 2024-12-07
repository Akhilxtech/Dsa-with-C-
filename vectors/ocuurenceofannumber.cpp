// last ocurrence
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "enter the elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a;
    int idx = -1;
    cout << "enter the search ocuurence:" << endl;
    cin >> a;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == a)
        {
            idx = i;
            break;
        }
    }
    cout << idx;

    return 0;
}