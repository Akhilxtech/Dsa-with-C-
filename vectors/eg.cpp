#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 0, 0, 3};
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] != 0)
        {
            i++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }

    return 0;
}