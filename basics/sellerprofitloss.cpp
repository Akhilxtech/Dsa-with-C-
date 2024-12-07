#include <iostream>
using namespace std;

int main()
{
    int sp, cp, profit, loss;
    cout << "enter selling price of the product " << endl;
    cin >> sp;
    cout << "enter the cost price of the product " << endl;
    cin >> cp;
    profit = sp - cp;
    loss = cp - sp;
    // cout << profit << " " << loss << endl;
    if (profit > loss)
    {
        cout << profit << " rs profit " << endl;
        cout << "seller is profitable " << endl;
    }
    else if (profit = loss || profit == 0 || loss == 0)
    {
        cout << "no profit no loss" << endl;
    }
    else
    {
        cout << loss << " rs loss " << endl;
        cout << "seller is not profitable " << endl;
    }
    return 0;
}