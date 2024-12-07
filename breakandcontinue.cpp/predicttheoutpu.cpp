/*#include <iostream>
using namespace std;

int main()
{
    // while ('a' < 'b') //infinite loop
    //   cout << "malayalam is a palindrome " << endl;
   // int i;
   // while (i = 10)
   // {
   //     cout << i << endl;
   //     i = i + 1;
   // }


    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            cout << x << " " << y << endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;

/*int main()
{
    int x = 4, y = 0, z;
    while (x >= 0)
    {
        if (x == y)
            break;
        else
        {
            cout << x << " " << y << endl;
        }
        x--;
        y++;
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int t = 10;
    while (t /= 2)
    {
        cout << "hello" << endl;
    }
    return 0;
}
