#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
void reverse(int i, int j, vector<int> &a)
{
    int temp;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int x, a, b;
    cout << "enter the size of an array:" << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter the array elements: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << "enter index from where you start reverse:" << endl;
    cin >> a;
    cout << "enter index where you want to stop reversing:" << endl;
    cin >> b;
    reverse(a, b, v);
    cout << "the reverse part of an array is:";
    display(v);
    return 0;
}