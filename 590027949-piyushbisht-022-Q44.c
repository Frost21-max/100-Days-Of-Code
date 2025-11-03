#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;
    int num = 1, den = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = 1.0;

    num = 3;
    den = 4;

    for (i = 2; i <= n; i++)
    {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Approximate sum: %.1f", sum);

    printf("\n");

    return 0;
}
