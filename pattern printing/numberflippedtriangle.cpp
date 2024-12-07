/* Number Flipped Triangle
      1
    1 2
  1 2 3
1 2 3 4
*/
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}*/
// method-2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) >= n + 1)
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