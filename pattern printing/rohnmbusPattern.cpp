/*
       * * * *
      * * * *
     * * * *
    * * * *
    yha observe kro pheli line main 3 space dusri line main do space tisri line main 1 space or chauthi line main 0 space hai or uske baad star print hai
to yha se saaf pata chalta hai humko #=space
    # # #        * * * *
    # #     +    * * * *
    #            * * * *
                 * * * *   ye print krna hai to ek extra k loop chlayenge
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of  n " << " ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}