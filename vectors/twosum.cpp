#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of an array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the elements of an array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter target number:" << endl;
    cin >> x;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == x && i != j)
            {
                cout << "(" << i << " " << j << ")" << endl;
                // return 0;
            }
        }
    }
    return 0;
}