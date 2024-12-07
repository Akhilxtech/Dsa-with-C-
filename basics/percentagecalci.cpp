#include <iostream>
using namespace std;

int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, scored;
    float percentage;
    cout << "enter your marks in maths " << endl;
    cin >> sub1;
    cout << "enter your marks in physics " << endl;
    cin >> sub2;
    cout << "enter your marks in c++ " << endl;
    cin >> sub3;
    cout << "enter your marks in civil " << endl;
    cin >> sub4;
    cout << "enter marks in iot " << endl;
    cin >> sub5;
    cout << " scored marks in maths " << sub1 << endl;
    cout << " scored marks in physics " << sub2 << endl;
    cout << " scored marks in c++ " << sub3 << endl;
    cout << " scored marks in civil " << sub4 << endl;
    cout << " scored marks in iot " << sub5 << endl;
    scored = (sub1 + sub2 + sub3 + sub4 + sub5);
    total = 500;
    cout << "total marks scored " << scored << endl;
    percentage = (scored / total) * 100;
    cout << "your percentage " << percentage << endl;
    if (percentage >= 91 && percentage <= 100)
    {
        cout << "excellent" << endl;
    }
    else if (percentage >= 81 && percentage <= 90)
    {
        cout << "very good " << endl;
    }
    else if (percentage >= 71 && percentage <= 80)
    {
        cout << "good " << endl;
    }
    else if (percentage >= 61 && percentage <= 70)
    {
        cout << " can do better " << endl;
    }
    else if (percentage >= 51 && percentage <= 60)
    {
        cout << " average " << endl;
    }
    else if (percentage >= 40 && percentage <= 50)
    {
        cout << " below average" << endl;
    }
    else
    {
        cout << "fail " << endl;
    }
    return 0;
}