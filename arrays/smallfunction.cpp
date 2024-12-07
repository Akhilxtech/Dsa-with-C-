#include <iostream>
#include <climits>
using namespace std;
int smaller(int n)
{
    int arr[n];
    int large = INT_MIN;
    int small = INT_MAX; // int max= +infinity greatest number
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << "Smallest element present at position:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;
}
int main()
{
    int n, res;
    cout << "\nenter the size of an array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "size of an array is must be greater than zero ";
        return 0;
    }
    res = smaller(n);
    cout << res;
}