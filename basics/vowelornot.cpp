#include <iostream>
using namespace std;

int main()
{
    char n;
    cout << "enter any char " << endl;
    cin >> n;
    if (n >= 65 || n <= 90 || n > 90 || n <= 122)
    {
        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
        {
            cout << n << " ia s vowel " << endl;
        }
        else
        {
            cout << n << " is a consonant " << endl;
        }
    }

    return 0;
}