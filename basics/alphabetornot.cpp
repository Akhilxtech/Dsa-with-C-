// #include <iostream>
// using namespace std;
//
// int main()
//{
//     char ch;
//     cout << "enter any character " << endl;
//     cin >> ch;
//     if (ch >= 65 && ch <= 122)
//     {
//         cout << "enterd character is an alphabet " << endl;
//     }
//     else
//     {
//         cout << "enterd character is not an alphabet " << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter any character " << endl;
    cin >> ch;
    if (ch >= 65 && ch < 97)
    {
        cout << "enterd character is an upper case alphabet " << endl;
    }
    if (ch >= 97 && ch <= 122)
    {
        cout << "enterd character is  an lower case alphabet " << endl;
    }
    if (ch > 0 && ch <= 64)
    {
        cout << "enterd character is not an alphabet" << endl;
    }
    return 0;
}