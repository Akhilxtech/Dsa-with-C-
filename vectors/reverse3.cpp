#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v)
{
    int i, j, temp;
    for (i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
int main()
{
    int x;
    cout << "enter the size of an array: " << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter the array elements: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << "array after reverse " << endl;
    reverse(v);
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}