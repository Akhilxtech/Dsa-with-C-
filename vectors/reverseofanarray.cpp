#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int x;
    cout << "enter the size of an array: ";
    cin >> x;
    vector<int> arr1(x);
    cout << "enter array elements:" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> arr1[i];
    }
    display(arr1);
    vector<int> arr2(x);
    for (int i = 0; i < x; i++)
    {
        // i+j=size-1;
        int j = x - 1 - i;
        arr2[i] = arr1[j];
    }
    display(arr2);
}