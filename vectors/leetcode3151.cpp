#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "enter the size of an array: " << endl;
    cin >> x;
    bool isparity = true;
    ;
    vector<int> v(x);
    cout << "enter array elements" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] % 2 == 0 && v[i + 1] % 2 == 0) || (v[i] % 2 != 0 && v[i + 1] % 2 != 0))
        {
            isparity = false;
            break;
        }
    }
    if (isparity)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false";
    }

    return 0;
}