#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &b)
{
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
int main()
{
    int x, i, j, temp;
    cout << "enter the size of an array: " << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter the array elements: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << "array before reverse" << endl;
    display(v);
    for (i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    cout << "array after reverse " << endl;
    display(v);

    return 0;
}