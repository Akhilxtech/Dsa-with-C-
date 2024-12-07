#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{ // display function of an array
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void reverse(int i, int j, vector<int> &b)
{ // function for reversing array by parts
    int temp;
    while (i <= j)
    {
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    int x;
    cout << "enter size of an array:" << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter array elements:" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "enter number of steps you want to rotate:" << endl;
    cin >> k;
    if (k > x)
    {
        k = k % x; // using remiender so that no. of rotation give same array again and again will be eliminated
    }
    cout << "array before roatation:" << endl;
    display(v);
    cout << "the rotated array is:" << endl;
    reverse(0, x - k - 1, v);
    reverse(x - k, x - 1, v);
    reverse(0, x - 1, v);
    display(v);

    return 0;
}