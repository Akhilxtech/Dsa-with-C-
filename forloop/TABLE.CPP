#include <iostream>
using namespace std;

int main()
{
    int num, i, result;
    cout << "enter value of num " << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        int result = num * i;
        // cout << result << endl;

        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}