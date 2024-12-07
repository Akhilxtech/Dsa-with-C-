#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Guess the number between 0 to 100 :");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("higher number please:\n");
        }
        else if (guess > number)
        {
            printf("lower number please:\n");
        }
        else
        {
            printf("You guessed it right :-)\n");
            printf("%d attempts taken", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}