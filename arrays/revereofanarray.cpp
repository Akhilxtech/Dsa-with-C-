#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nenter the size of an array:";
    cin >> n;
    if (n <= 0)
    {
        cout << "size of an array is must be greater than 0";
        return 0;
    }
    int arr[n];
    // int start = 0;
    // int end = n - 1;
    cout << "enter an array element:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array before reversing:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // reversing without using inbuilt function
    int temp;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*if (n % 2 == 0)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    else
    {
        while (start == end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }*/
    cout << "reversed array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}