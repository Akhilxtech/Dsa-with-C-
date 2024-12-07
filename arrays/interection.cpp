#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {3, 4, 5, 9, 10};
    bool isintersection;
    for (int i = 0; i < 5; i++)
    {
        isintersection = false;
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                isintersection = true;
                break;
            }
        }
        if (isintersection)
        {
            cout << arr1[i] << " ";
        }
    }
    return 0;
}