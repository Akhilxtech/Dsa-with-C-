#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &a)
{
    int i = 0, j = a.size() - 1;
    while (i < j)
    {
        if (a[i] == 0)
        {
            i++;
        }
        if (a[j] == 1)
        {
            j--;
        }
        else if (a[i] == 1 && a[j] == 0)
        {
            a[i] = 0;
            a[j] = 1;
            i++;
            j--;
        }
    }
}
int main()
{

    int x;
    cout << "enter the size of an array" << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter the array elements" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << "sorted array is:" << endl;
    sort(v);
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}