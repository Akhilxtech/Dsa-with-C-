#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cout << "\nenter the size of an array: ";
    cin >> n;
    long long int arr[n];
    if (n <= 0)
    {
        cout << "please enter size greater than zero ";
        return 0;
    }
    cout << "enter the elements of an array for calculating sum :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of all array elements is:" << sum << endl;
    return 0;
}