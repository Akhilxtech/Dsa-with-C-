/*
*    *-->diagnol2
 *  *
  *
*   *
     *--> diagnol1
yha pr jab no. of rows brabr honge no. of coloumns ke tbhi diagnol1 ka pattern bnega
or jab no. of row+ no. of coloumn brabr hoga n+1 ke tbhi diagnol 2 print hoga
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter valuer of n " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
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