#include <stdio.h>

int main()
{
    int i, j;
    int stars = 1;
    int step = 2;

    for (i = 1; i <= 9; i++)
    {

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");

        if (stars == 9)
        {
            step = -2;
        }

        stars += step;
    }

    return 0;
}
