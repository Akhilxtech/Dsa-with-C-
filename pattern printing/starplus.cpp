/*
    *
    *
* * * * *
    *
    *
ye pattern tbhi print hoga jab input no. odd hoga

ek mid variable create kro or formula bnao mid=n/2+1
for eg n=5 5/2=2=> 2+1 => 3 to yha pr notice kro star 3rd postion pr hai har row or coloumn main
conditoon humlog use krenge jab no.of rows brabr hai mid ke  or no. of coloumn brabr hai mid ke tbhi star print kro nhi to space print kro

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n " << " ";
    cin >> n;
    int mid = n / 2 + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}