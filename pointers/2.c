#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d", &n);
    int a = 4;
    for (int i = 4; i <= n; i = i++)
    {
        printf("%d ", a);
        a = a + 1;
    }
    return 0;
}