#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter target number:" << endl;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == x && i != j)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "no pairs found";
    return 0;
}