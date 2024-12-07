#include <iostream>
#include <climits>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    cout << "\nenter the size of an array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "size of an array is must be greater than zero ";
        return 0;
    }
    int arr[n];
    int large = INT_MIN;
    int small = INT_MAX; // int max= +infinity greatest number
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Smallest element present at position:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << "smallest and largest number before swaaping " << small << " and " << large << endl;
    swap(&small, &large);
    cout << "smallest and largest number after swaaping " << small << " and " << large;
    return 0;
}