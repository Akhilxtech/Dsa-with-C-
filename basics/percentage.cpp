#include <iostream>
using namespace std;
int main()
{
    float percentage, total, num1, num2, num3, num4, num5, scored;
    cout << "enter marks in physics " << endl;
    cin >> num1;
    cout << "enter marks in maths " << endl;
    cin >> num2;
    cout << "enter marks in english " << endl;
    cin >> num3;
    cout << "enter marks in c++ programming " << endl;
    cin >> num4;
    cout << "enter marks in chemistry " << endl;
    cin >> num5;
    cout << "*****************************" << endl;
    cout << "Physics " << num1 << endl;
    cout << "Maths " << num2 << endl;
    cout << "English " << num3 << endl;
    cout << "c++ Programming " << num4 << endl;
    cout << "chemistry " << num5 << endl;
    scored = (num1 + num2 + num3 + num4 + num5);
    total = 500;
    percentage = (scored / total) * 100;
    cout << "your percentage is " << percentage;
    return 0;
}