#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {1, 2, 3, 1, 2, 3, 4, 4, 5, 6, 7};
    bool isunique;
    for (int i = 0; i < 11; i++)
    {
        isunique = true; // let consider element is unique
        for (int j = 0; j < 11; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isunique = false; // element is not unique
                break;
            }
        }
        if (isunique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}