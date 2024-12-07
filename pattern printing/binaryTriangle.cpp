/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

observation-->  1. if  row number is odd then print 1 else print 0
2. observe that 0 and 1 print alternatively

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of  n: " << " ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        { // row no. odd hai
            a = 1;
        }
        else
        { // row no. even hai
            a = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            // flip (observation 2 bnane ke liye)
            if (a == 1)
            {
                a = 0;
            }
            else
            {
                a = 1;
            }
        }
        cout << endl;
    }
    return 0;
}