#include <iostream>
using namespace std;
bool powof2(int n)
{
    if (n <= 0)
    { // power shoulde be non zero
        return false;
    }
    while (n > 1)
    {
        if (n % 2 != 0)
        { // if a number is a power of 2 then it should be divisible by 2 until number becomes 1
            return false;
        }
        n /= 2;
    }
    return true;
}
int main()
{
    int num;
    cout << "enter number :" << endl;
    cin >> num;
    if (powof2(num)) // powof2 return here true or false or wkt true means 1 and false means 0 and we know that any non zero no. is always true so, if condition is always true, if fuction return true here
    {
        cout << num << " is a power of 2" << endl;
    }
    else
    {
        cout << num << " is not a power of 2" << endl;
    }
    return 0;
}