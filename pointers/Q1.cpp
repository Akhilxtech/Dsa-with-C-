/*find first and last digit of a  number by taking user input*/
#include <iostream>
using namespace std;
int firstdigit(int *x)
{
    int fd = *x;
    while (fd > 9)
    {
        fd = fd / 10;
    }
    return fd;
}
int lastdigit(int *y)
{

    return (*y) % 10;
}
int main()
{
    int num, result;
    cout << "enter number: ";
    cin >> num;
    cout << "The first digit of a number is: ";
    result = firstdigit(&num);
    cout << result << endl;
    cout << "The last digit of a number is: ";
    result = lastdigit(&num);
    cout << result;
    return 0;
}