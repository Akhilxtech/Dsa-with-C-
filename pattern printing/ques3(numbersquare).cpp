/* 1234
   1234
   1234
   1234
logic- let krlo n=4 to yha clearl  dikh rha hai ki row bhi 4 hai or coloumn bhi 4 hai to ek relation ban gya i=n=j or humko counting agge badhani hai to hum loop ka istemal krenge or j ko proint krdenge*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << j;
        }
        cout << endl;
    }

    return 0;
}