#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &a)
{
    int number_of_zeros = 0;
    int number_of_ones = 0;
    int number_of_twos = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0) // checking how many zeros are present in array
        {
            number_of_zeros++; // incrimenting no. of zeros by one
        }
        if (a[i] == 1)
        {
            number_of_ones++; // same with ones also
        }
        else
        {
            number_of_twos++;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (i < number_of_zeros) // over right number of zeros
        {
            a[i] = 0;
        }
        else if (i < number_of_ones + number_of_zeros)
        {
            a[i] = 1; // over right number of ones
        }
        else
        {
            a[i] = 2;
        }
    }
    return;
}
int main()
{
    int x;
    cout << "enter the size of an array" << endl;
    cin >> x;
    vector<int> v(x);
    cout << "enter the array elements" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    cout << "sorted array is:" << endl;
    sort(v);
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}