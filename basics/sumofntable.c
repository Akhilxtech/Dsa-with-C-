#include <stdio.h>

int main()
{
    int i, sum = 0, b = 8;
    for (i = 0; i < 11; i++)
    {
        b = 8 * i;
        sum += b;
    }
    printf("%d", sum);
    return 0;
}