/*
1
23
456
78910

isko solve krne ke liye  humlog ek extra variable use krenge vo bhi loop ke bhar
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << " ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count = count + 1;
            cout << count;
        }
        cout << endl;
    }
    return 0;
}