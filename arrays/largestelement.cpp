#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of an array:";
    cin >> n;
    if (n <= 0)
    { // edge case if size of an array is 0 then 0 or -ve size array is not created on memory
        cout << "size of an array must be greater than 0";
        return 0;
    }
    int arr[n];
    int large = INT_MIN;
    cout << "enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = i;
        }
    }
    cout << "the largest element present at position: " << large << endl;
    return 0;
}