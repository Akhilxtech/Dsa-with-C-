#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of an array:" << endl;
    cin >> n;
    int largest = INT_MIN;
    int second = INT_MIN;
    int arr[n];
    cout << "enter array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    cout << "second largest element is: " << second << endl;
    return 0;
}