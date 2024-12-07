#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of students " << endl;
    cin >> n;
    if (n <= 0)
    {
        cout << "please enter valid input:" << endl;
        return 0;
    }
    int marks[n];
    cout << "enter the marks of the student " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    cout << "students roll number who score less than 35 marks: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}