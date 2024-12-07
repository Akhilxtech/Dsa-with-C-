/*                                 3 2 1--->pseudo value   n=4  n =input
                           1 2 3 4 5 6 7 --->j
                       1   4 4 4 4 4 4 4
                       2   4 3 3 3 3 3 4
                       3   4 3 2 2 2 3 4
                       4   4 3 2 1 2 3 4
pseudo value -->>   3  5   4 3 2 2 2 3 4
                    2  6   4 3 3 3 3 3 4
                    1  7   4 4 4 4 4 4 4
                       i
  outer loop --> i to 2n-1
  inner loop --> j to 2n-1
  pseudo value bnao uske liye usko inner loop main new variable a or b define kro
  or shell wala concept use kro
*/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "enter value of n:" << "";
   cin >> n;
   for (int i = 1; i <= 2 * n - 1; i++)
   {
      for (int j = 1; j <= 2 * n - 1; j++)
      {
         // pseudo variable
         int a = i;
         int b = j;
         if (a > n)
         {
            a = 2 * n - i;
         }
         if (b > n)
         {
            b = 2 * n - j;
         }
         int x = min(a, b); // min or max inbuilt function hai c++ ka jo 2 value main jo min or max hota hai usko deta hai
         cout << n - x + 1;
      }
      cout << endl;
   }
   return 0;
}