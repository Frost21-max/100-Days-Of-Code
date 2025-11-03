#include <stdio.h>

int main()
{
    int i, j, spaces, stars;

    spaces = 3;
    stars = 1;

    for (i = 1; i <= 4; i++)
    {

        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");

        spaces--;
        stars += 2;
    }

    spaces = 1;
    stars = 5;

    for (i = 1; i <= 3; i++)
    {

        for (j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");

        spaces++;
        stars -= 2;
    }

    return 0;
}
