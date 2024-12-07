#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    int m = arr1.size();
    int n = arr2.size();
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> res(m + n);
    while (i <= m - 1 && j <= n - 1)
    {
        if (arr1[i] <= arr2[j])
        { // arr1 ka element chota hai arr2 ke element se to isko humne res array main dal denge
            res[k] = arr1[i];
            i++;
            k++;
        }
        else
        { // arr2 ka element chota hai arr1 se to isko humlog res array main dalenge
            res[k] = arr2[j];
            j++;
            k++;
        }
    } // 1st opretion finish
    if (i == m)
    { //  arr1 choti hai arr2 se
        while (j <= n - 1)
        { // arr 2 ke elements res main daldenge jab tak arr2 khtm na hojaye
            res[k] = arr2[j];
            j++;
            k++;
        }
    }
    else if (j == n)
    { // arr2 choti hai arr1 se
        while (i <= m - 1)
        { // arr1 ke elements res arr main daldenge jab tk arr1 khtm na hojaye
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}
int main()
{
    int x;
    cout << "enter size of the array:" << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter element of first array:" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << "first array is:" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int y;
    cout << "enter size of the array:" << endl;
    cin >> y;
    vector<int> w(y);
    cout << "enter element of second array:" << endl;
    for (int i = 0; i < y; i++)
    {
        cin >> w[i];
    }
    cout << "second array is:" << endl;
    for (int i = 0; i < y; i++)
    {
        cout << w[i] << " ";
    }
    cout << endl;
    vector<int> result = merge(v, w); // calling function
    cout << "merge sorted array is:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}