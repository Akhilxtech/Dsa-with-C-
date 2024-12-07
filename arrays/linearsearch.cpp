#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter the size of an array:";
    cin >> n;
    int arr[n];
    cout << "enter the array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    bool ispresent = false;
    cout << "enter search element:" << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ispresent = true;
            break;
        }
    }
    if (ispresent)
    {
        cout << arr[i] << " present at position " << i << endl;
    }
    else
    {
        cout << "error 404 element not found" << endl;
    }
    return 0;
}