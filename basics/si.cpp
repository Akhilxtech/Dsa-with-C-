#include <iostream>
using namespace std;

int main()
{
    float profit, rate, si;
    int time;
    cout << "profit "
         << " ";
    cin >> profit;
    cout << "rate "
         << " ";
    cin >> rate;
    cout << "time"
         << " ";
    cin >> time;
    si = profit * rate * time / 100;
    cout << "si "
         << " " << si;
    return 0;
}